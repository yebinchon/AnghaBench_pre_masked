
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a6xx_gmu {int dummy; } ;
typedef enum a6xx_gmu_oob_state { ____Placeholder_a6xx_gmu_oob_state } a6xx_gmu_oob_state ;



 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct a6xx_gmu*,int ,int) ;

void FUNC_1(struct a6xx_gmu *VAR_4, enum a6xx_gmu_oob_state VAR_5)
{
 switch (VAR_5) {
 case 128:
  FUNC_0(VAR_4, VAR_3,
   1 << VAR_2);
  break;
 case 130:
  FUNC_0(VAR_4, VAR_3,
   1 << VAR_0);
  break;
 case 129:
  FUNC_0(VAR_4, VAR_3,
   1 << VAR_1);
  break;
 }
}
