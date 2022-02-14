
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inv_mpu6050_state {int powerup_count; int map; TYPE_1__* reg; } ;
struct TYPE_2__ {int pwr_mgmt_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct inv_mpu6050_state *VAR_3, bool VAR_4)
{
 int VAR_5;

 if (VAR_4) {
  if (!VAR_3->powerup_count) {
   VAR_5 = FUNC_2(VAR_3->map, VAR_3->reg->pwr_mgmt_1, 0);
   if (VAR_5)
    return VAR_5;
   FUNC_3(VAR_2,
         VAR_1);
  }
  VAR_3->powerup_count++;
 } else {
  if (VAR_3->powerup_count == 1) {
   VAR_5 = FUNC_2(VAR_3->map, VAR_3->reg->pwr_mgmt_1,
           VAR_0);
   if (VAR_5)
    return VAR_5;
  }
  VAR_3->powerup_count--;
 }

 FUNC_0(FUNC_1(VAR_3->map), "set power %d, count=%u\n",
  VAR_4, VAR_3->powerup_count);

 return 0;
}
