
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc2485_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ltc2485_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct ltc2485_data*,int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_5,
       struct iio_chan_spec const *VAR_6,
       int *VAR_7, int *VAR_8, long VAR_9)
{
 struct ltc2485_data *VAR_10 = FUNC_0(VAR_5);
 int VAR_11;

 if (VAR_9 == VAR_1) {
  VAR_11 = FUNC_1(VAR_10, VAR_7);
  if (VAR_11 < 0)
   return VAR_11;

  return VAR_4;

 } else if (VAR_9 == VAR_2) {
  *VAR_7 = 5000;
  *VAR_8 = 25;
  return VAR_3;

 } else {
  return -VAR_0;
 }
}
