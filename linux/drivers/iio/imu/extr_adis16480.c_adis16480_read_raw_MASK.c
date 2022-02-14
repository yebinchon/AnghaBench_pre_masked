
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct adis16480 {TYPE_1__* chip_info; } ;
struct TYPE_2__ {int gyro_max_scale; int gyro_max_val; int accel_max_scale; int accel_max_val; int temp_scale; } ;


 int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iio_dev*,struct iio_chan_spec const*,int*) ;
 int FUNC_2 (struct iio_dev*,struct iio_chan_spec const*,int*) ;
 int FUNC_3 (struct iio_dev*,struct iio_chan_spec const*,int*) ;
 int FUNC_4 (struct iio_dev*,int*,int*) ;
 int FUNC_5 (struct iio_dev*,struct iio_chan_spec const*,int ,int*) ;
 struct adis16480* FUNC_6 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_4,
 const struct iio_chan_spec *VAR_5, int *VAR_6, int *VAR_7, long VAR_8)
{
 struct adis16480 *VAR_9 = FUNC_6(VAR_4);
 unsigned int VAR_10;

 switch (VAR_8) {
 case 133:
  return FUNC_5(VAR_4, VAR_5, 0, VAR_6);
 case 131:
  switch (VAR_5->type) {
  case 138:
   *VAR_6 = VAR_9->chip_info->gyro_max_scale;
   *VAR_7 = VAR_9->chip_info->gyro_max_val;
   return VAR_1;
  case 139:
   *VAR_6 = VAR_9->chip_info->accel_max_scale;
   *VAR_7 = VAR_9->chip_info->accel_max_val;
   return VAR_1;
  case 130:
   *VAR_6 = 0;
   *VAR_7 = 100;
   return VAR_3;
  case 128:





   *VAR_6 = VAR_9->chip_info->temp_scale / 1000;
   *VAR_7 = (VAR_9->chip_info->temp_scale % 1000) * 1000;
   return VAR_3;
  case 129:
   *VAR_6 = 0;
   *VAR_7 = 4000;
   return VAR_3;
  default:
   return -VAR_0;
  }
 case 134:

  VAR_10 = 25 * 1000000LL;
  *VAR_6 = FUNC_0(VAR_10, VAR_9->chip_info->temp_scale);
  return VAR_2;
 case 137:
  return FUNC_1(VAR_4, VAR_5, VAR_6);
 case 136:
  return FUNC_2(VAR_4, VAR_5, VAR_6);
 case 135:
  return FUNC_3(VAR_4, VAR_5, VAR_6);
 case 132:
  return FUNC_4(VAR_4, VAR_6, VAR_7);
 default:
  return -VAR_0;
 }
}
