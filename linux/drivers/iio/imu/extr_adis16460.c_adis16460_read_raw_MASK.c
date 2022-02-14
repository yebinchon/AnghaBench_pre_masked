
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct adis16460 {TYPE_1__* chip_info; } ;
struct TYPE_2__ {int gyro_max_scale; int gyro_max_val; int accel_max_scale; int accel_max_val; } ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iio_dev*,int*,int*) ;
 int FUNC_1 (struct iio_dev*,struct iio_chan_spec const*,int ,int*) ;
 struct adis16460* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
 const struct iio_chan_spec *VAR_4, int *VAR_5, int *VAR_6, long VAR_7)
{
 struct adis16460 *VAR_8 = FUNC_2(VAR_3);

 switch (VAR_7) {
 case 131:
  return FUNC_1(VAR_3, VAR_4, 0, VAR_5);
 case 129:
  switch (VAR_4->type) {
  case 133:
   *VAR_5 = VAR_8->chip_info->gyro_max_scale;
   *VAR_6 = VAR_8->chip_info->gyro_max_val;
   return VAR_1;
  case 134:
   *VAR_5 = VAR_8->chip_info->accel_max_scale;
   *VAR_6 = VAR_8->chip_info->accel_max_val;
   return VAR_1;
  case 128:
   *VAR_5 = 50;
   return VAR_2;
  default:
   return -VAR_0;
  }
 case 132:
  *VAR_5 = 500;
  return VAR_2;
 case 130:
  return FUNC_0(VAR_3, VAR_5, VAR_6);
 default:
  return -VAR_0;
 }
}
