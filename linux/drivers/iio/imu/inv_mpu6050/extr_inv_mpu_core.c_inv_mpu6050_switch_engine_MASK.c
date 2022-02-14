
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct inv_mpu6050_state {TYPE_1__* reg; int map; } ;
struct TYPE_2__ {int pwr_mgmt_1; int pwr_mgmt_2; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int) ;

int FUNC_3(struct inv_mpu6050_state *VAR_5, bool VAR_6, u32 VAR_7)
{
 unsigned int VAR_8, VAR_9;
 int VAR_10;





 if (VAR_7 == VAR_3) {
  VAR_10 = FUNC_1(VAR_5->map, VAR_5->reg->pwr_mgmt_1, &VAR_9);
  if (VAR_10)
   return VAR_10;

  VAR_9 &= ~VAR_2;
 }

 if ((VAR_7 == VAR_3) && (!VAR_6)) {




  VAR_9 |= VAR_0;
  VAR_10 = FUNC_2(VAR_5->map, VAR_5->reg->pwr_mgmt_1, VAR_9);
  if (VAR_10)
   return VAR_10;
 }

 VAR_10 = FUNC_1(VAR_5->map, VAR_5->reg->pwr_mgmt_2, &VAR_8);
 if (VAR_10)
  return VAR_10;
 if (VAR_6)
  VAR_8 &= ~VAR_7;
 else
  VAR_8 |= VAR_7;
 VAR_10 = FUNC_2(VAR_5->map, VAR_5->reg->pwr_mgmt_2, VAR_8);
 if (VAR_10)
  return VAR_10;

 if (VAR_6) {

  FUNC_0(VAR_4);
  if (VAR_7 == VAR_3) {

   VAR_9 |= VAR_1;
   VAR_10 = FUNC_2(VAR_5->map,
           VAR_5->reg->pwr_mgmt_1, VAR_9);
   if (VAR_10)
    return VAR_10;
  }
 }

 return 0;
}
