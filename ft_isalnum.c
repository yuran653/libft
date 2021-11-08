/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoldste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:31:17 by jgoldste          #+#    #+#             */
/*   Updated: 2021/10/05 20:45:23 by jgoldste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int str)
{
	return ((str >= '0' && str <= '9')
		|| (str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'));
}