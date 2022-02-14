
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ gyro_fifo_enable; scalar_t__ accl_fifo_enable; int user_ctrl; } ;
struct inv_mpu6050_state {int skip_samples; TYPE_2__ chip_config; TYPE_1__* reg; int map; } ;
struct iio_dev {int dummy; } ;
struct TYPE_3__ {int user_ctrl; int int_enable; int fifo_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inv_mpu6050_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct inv_mpu6050_state*,int) ;
 int FUNC_2 (struct inv_mpu6050_state*,int,int ) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_2, bool VAR_3)
{
 struct inv_mpu6050_state *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 if (VAR_3) {
  VAR_5 = FUNC_1(VAR_4, 1);
  if (VAR_5)
   return VAR_5;
  FUNC_4(VAR_2);
  VAR_4->skip_samples = 0;
  if (VAR_4->chip_config.gyro_fifo_enable) {
   VAR_5 = FUNC_2(VAR_4, 1,
     VAR_1);
   if (VAR_5)
    goto error_power_off;

   VAR_4->skip_samples = 1;
  }
  if (VAR_4->chip_config.accl_fifo_enable) {
   VAR_5 = FUNC_2(VAR_4, 1,
     VAR_0);
   if (VAR_5)
    goto error_gyro_off;
  }
  VAR_5 = FUNC_3(VAR_2);
  if (VAR_5)
   goto error_accl_off;
 } else {
  VAR_5 = FUNC_5(VAR_4->map, VAR_4->reg->fifo_en, 0);
  if (VAR_5)
   goto error_accl_off;

  VAR_5 = FUNC_5(VAR_4->map, VAR_4->reg->int_enable, 0);
  if (VAR_5)
   goto error_accl_off;

  VAR_5 = FUNC_5(VAR_4->map, VAR_4->reg->user_ctrl,
          VAR_4->chip_config.user_ctrl);
  if (VAR_5)
   goto error_accl_off;

  VAR_5 = FUNC_2(VAR_4, 0,
     VAR_0);
  if (VAR_5)
   goto error_accl_off;

  VAR_5 = FUNC_2(VAR_4, 0,
     VAR_1);
  if (VAR_5)
   goto error_gyro_off;

  VAR_5 = FUNC_1(VAR_4, 0);
  if (VAR_5)
   goto error_power_off;
 }

 return 0;

error_accl_off:
 if (VAR_4->chip_config.accl_fifo_enable)
  FUNC_2(VAR_4, 0,
       VAR_0);
error_gyro_off:
 if (VAR_4->chip_config.gyro_fifo_enable)
  FUNC_2(VAR_4, 0,
       VAR_1);
error_power_off:
 FUNC_1(VAR_4, 0);
 return VAR_5;
}
