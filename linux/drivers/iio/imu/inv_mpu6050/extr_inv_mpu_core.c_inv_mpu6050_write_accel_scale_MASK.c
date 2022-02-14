
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int accl_fs; } ;
struct inv_mpu6050_state {TYPE_2__ chip_config; TYPE_1__* reg; int map; } ;
struct TYPE_3__ {int accl_config; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct inv_mpu6050_state *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 u8 VAR_7;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); ++VAR_6) {
  if (VAR_2[VAR_6] == VAR_4) {
   VAR_7 = (VAR_6 << VAR_1);
   VAR_5 = FUNC_1(VAR_3->map, VAR_3->reg->accl_config, VAR_7);
   if (VAR_5)
    return VAR_5;

   VAR_3->chip_config.accl_fs = VAR_6;
   return 0;
  }
 }

 return -VAR_0;
}
