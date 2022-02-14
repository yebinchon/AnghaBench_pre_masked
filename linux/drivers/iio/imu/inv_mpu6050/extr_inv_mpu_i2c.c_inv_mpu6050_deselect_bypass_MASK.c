
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct inv_mpu6050_state {int lock; int irq_mask; TYPE_1__* reg; int map; } ;
struct iio_dev {int dummy; } ;
struct i2c_mux_core {int dummy; } ;
struct TYPE_2__ {int int_pin_cfg; } ;


 struct iio_dev* FUNC_0 (struct i2c_mux_core*) ;
 struct inv_mpu6050_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct inv_mpu6050_state*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_mux_core *VAR_0, u32 VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_0(VAR_0);
 struct inv_mpu6050_state *VAR_3 = FUNC_1(VAR_2);

 FUNC_3(&VAR_3->lock);


 FUNC_5(VAR_3->map, VAR_3->reg->int_pin_cfg, VAR_3->irq_mask);
 FUNC_2(VAR_3, 0);

 FUNC_4(&VAR_3->lock);

 return 0;
}
