
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veml6070_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 struct veml6070_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct veml6070_data*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
    struct iio_chan_spec const *VAR_3,
    int *VAR_4, int *VAR_5, long VAR_6)
{
 struct veml6070_data *VAR_7 = FUNC_0(VAR_2);
 int VAR_8;

 switch (VAR_6) {
 case 128:
 case 129:
  VAR_8 = FUNC_1(VAR_7);
  if (VAR_8 < 0)
   return VAR_8;
  if (VAR_6 == 129)
   *VAR_4 = FUNC_2(VAR_8);
  else
   *VAR_4 = VAR_8;
  return VAR_1;
 default:
  return -VAR_0;
 }
}
