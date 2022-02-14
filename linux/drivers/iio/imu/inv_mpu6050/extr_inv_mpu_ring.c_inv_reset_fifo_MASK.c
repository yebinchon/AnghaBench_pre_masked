
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int user_ctrl; scalar_t__ accl_fifo_enable; scalar_t__ gyro_fifo_enable; } ;
struct inv_mpu6050_state {TYPE_2__* reg; int map; TYPE_1__ chip_config; scalar_t__ it_timestamp; } ;
struct iio_dev {int dummy; } ;
struct TYPE_4__ {int int_enable; int fifo_en; int user_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 struct inv_mpu6050_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(struct iio_dev *VAR_5)
{
 int VAR_6;
 u8 VAR_7;
 struct inv_mpu6050_state *VAR_8 = FUNC_1(VAR_5);


 VAR_8->it_timestamp = 0;


 VAR_6 = FUNC_3(VAR_8->map, VAR_8->reg->int_enable, 0);
 if (VAR_6) {
  FUNC_0(FUNC_2(VAR_8->map), "int_enable failed %d\n",
   VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_3(VAR_8->map, VAR_8->reg->fifo_en, 0);
 if (VAR_6)
  goto reset_fifo_fail;

 VAR_6 = FUNC_3(VAR_8->map, VAR_8->reg->user_ctrl,
         VAR_8->chip_config.user_ctrl);
 if (VAR_6)
  goto reset_fifo_fail;


 VAR_7 = VAR_8->chip_config.user_ctrl | VAR_4;
 VAR_6 = FUNC_3(VAR_8->map, VAR_8->reg->user_ctrl, VAR_7);
 if (VAR_6)
  goto reset_fifo_fail;


 if (VAR_8->chip_config.accl_fifo_enable ||
     VAR_8->chip_config.gyro_fifo_enable) {
  VAR_6 = FUNC_3(VAR_8->map, VAR_8->reg->int_enable,
          VAR_2);
  if (VAR_6)
   return VAR_6;
 }

 VAR_7 = VAR_8->chip_config.user_ctrl | VAR_3;
 VAR_6 = FUNC_3(VAR_8->map, VAR_8->reg->user_ctrl, VAR_7);
 if (VAR_6)
  goto reset_fifo_fail;

 VAR_7 = 0;
 if (VAR_8->chip_config.gyro_fifo_enable)
  VAR_7 |= VAR_0;
 if (VAR_8->chip_config.accl_fifo_enable)
  VAR_7 |= VAR_1;
 VAR_6 = FUNC_3(VAR_8->map, VAR_8->reg->fifo_en, VAR_7);
 if (VAR_6)
  goto reset_fifo_fail;

 return 0;

reset_fifo_fail:
 FUNC_0(FUNC_2(VAR_8->map), "reset fifo failed %d\n", VAR_6);
 VAR_6 = FUNC_3(VAR_8->map, VAR_8->reg->int_enable,
         VAR_2);

 return VAR_6;
}
