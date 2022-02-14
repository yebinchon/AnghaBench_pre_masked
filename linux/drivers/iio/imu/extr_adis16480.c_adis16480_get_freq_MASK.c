
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct iio_dev {int dummy; } ;
struct adis16480 {scalar_t__ clk_mode; int clk_freq; int adis; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned int,int*) ;
 struct adis16480* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_4, int *VAR_5, int *VAR_6)
{
 struct adis16480 *VAR_7 = FUNC_1(VAR_4);
 uint16_t VAR_8;
 int VAR_9;
 unsigned VAR_10;
 unsigned int VAR_11;

 if (VAR_7->clk_mode == VAR_0)
  VAR_11 = VAR_2;
 else
  VAR_11 = VAR_1;

 VAR_9 = FUNC_0(&VAR_7->adis, VAR_11, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;
 if (VAR_7->clk_mode == VAR_0)
  VAR_10 = VAR_7->clk_freq * VAR_8;
 else
  VAR_10 = VAR_7->clk_freq / (VAR_8 + 1);

 *VAR_5 = VAR_10 / 1000;
 *VAR_6 = (VAR_10 % 1000) * 1000;

 return VAR_3;
}
