
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inv_mpu6050_state {int chip_type; TYPE_1__* reg; int map; } ;
typedef enum inv_mpu6050_filter_e { ____Placeholder_inv_mpu6050_filter_e } inv_mpu6050_filter_e ;
struct TYPE_2__ {int accel_lpf; int lpf; } ;





 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct inv_mpu6050_state *VAR_0,
        enum inv_mpu6050_filter_e VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->map, VAR_0->reg->lpf, VAR_1);
 if (VAR_2)
  return VAR_2;

 switch (VAR_0->chip_type) {
 case 129:
 case 130:
 case 128:

  VAR_2 = 0;
  break;
 default:

  VAR_2 = FUNC_0(VAR_0->map, VAR_0->reg->accel_lpf, VAR_1);
  break;
 }

 return VAR_2;
}
