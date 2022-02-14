
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct inv_mpu6050_state {int irq_mask; int lock; TYPE_1__* reg; int map; } ;
struct iio_dev {int dummy; } ;
struct i2c_mux_core {int dummy; } ;
struct TYPE_2__ {int int_pin_cfg; } ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct i2c_mux_core*) ;
 struct inv_mpu6050_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct inv_mpu6050_state*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_mux_core *VAR_1, u32 VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_1);
 struct inv_mpu6050_state *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 FUNC_3(&VAR_4->lock);

 VAR_5 = FUNC_2(VAR_4, 1);
 if (VAR_5)
  goto error_unlock;

 VAR_5 = FUNC_5(VAR_4->map, VAR_4->reg->int_pin_cfg,
      VAR_4->irq_mask | VAR_0);

error_unlock:
 FUNC_4(&VAR_4->lock);

 return VAR_5;
}
