
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct adis16480 {scalar_t__ clk_mode; unsigned int clk_freq; int adis; TYPE_1__* chip_info; } ;
struct TYPE_2__ {unsigned int max_dec_rate; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned int,unsigned int) ;
 struct adis16480* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_4, int VAR_5, int VAR_6)
{
 struct adis16480 *VAR_7 = FUNC_1(VAR_4);
 unsigned int VAR_8, VAR_9;

 if (VAR_5 < 0 || VAR_6 < 0)
  return -VAR_3;

 VAR_8 = VAR_5 * 1000 + VAR_6 / 1000;
 if (VAR_8 == 0)
  return -VAR_3;
 if (VAR_7->clk_mode == VAR_0) {
  VAR_8 = VAR_8 / VAR_7->clk_freq;
  VAR_9 = VAR_2;
 } else {
  VAR_8 = VAR_7->clk_freq / VAR_8;
  VAR_9 = VAR_1;
 }

 if (VAR_8 > VAR_7->chip_info->max_dec_rate)
  VAR_8 = VAR_7->chip_info->max_dec_rate;

 if ((VAR_8 != 0) && (VAR_7->clk_mode != VAR_0))
  VAR_8--;

 return FUNC_0(&VAR_7->adis, VAR_9, VAR_8);
}
