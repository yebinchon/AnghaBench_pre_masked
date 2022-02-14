
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct inv_mpu6050_state {int irq_mask; size_t chip_type; int chip_period; int chip_config; TYPE_1__* reg; int map; } ;
struct inv_mpu6050_chip_config {int dummy; } ;
struct iio_dev {int dummy; } ;
struct TYPE_4__ {int config; } ;
struct TYPE_3__ {int int_pin_cfg; int accl_config; int sample_rate_div; int gyro_config; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 struct inv_mpu6050_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct inv_mpu6050_state*,int ) ;
 int FUNC_3 (struct inv_mpu6050_state*,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_8)
{
 int VAR_9;
 u8 VAR_10;
 struct inv_mpu6050_state *VAR_11 = FUNC_1(VAR_8);

 VAR_9 = FUNC_3(VAR_11, 1);
 if (VAR_9)
  return VAR_9;
 VAR_10 = (VAR_2 << VAR_4);
 VAR_9 = FUNC_5(VAR_11->map, VAR_11->reg->gyro_config, VAR_10);
 if (VAR_9)
  goto error_power_off;

 VAR_9 = FUNC_2(VAR_11, VAR_1);
 if (VAR_9)
  goto error_power_off;

 VAR_10 = FUNC_0(VAR_5);
 VAR_9 = FUNC_5(VAR_11->map, VAR_11->reg->sample_rate_div, VAR_10);
 if (VAR_9)
  goto error_power_off;

 VAR_10 = (VAR_3 << VAR_0);
 VAR_9 = FUNC_5(VAR_11->map, VAR_11->reg->accl_config, VAR_10);
 if (VAR_9)
  goto error_power_off;

 VAR_9 = FUNC_5(VAR_11->map, VAR_11->reg->int_pin_cfg, VAR_11->irq_mask);
 if (VAR_9)
  return VAR_9;

 FUNC_4(&VAR_11->chip_config, VAR_7[VAR_11->chip_type].config,
        sizeof(struct inv_mpu6050_chip_config));






 VAR_11->chip_period = VAR_6;

 return FUNC_3(VAR_11, 0);

error_power_off:
 FUNC_3(VAR_11, 0);
 return VAR_9;
}
