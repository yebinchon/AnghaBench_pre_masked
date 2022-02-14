
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum motionsensor_type { ____Placeholder_motionsensor_type } motionsensor_type ;
__attribute__((used)) static void FUNC_0(enum motionsensor_type VAR_0,
         u32 *VAR_1,
         u32 *VAR_2)
{
 switch (VAR_0) {
 case 134:
 case 131:
  *VAR_1 = 12500;
  *VAR_2 = 100000;
  break;
 case 129:
  *VAR_1 = 5000;
  *VAR_2 = 25000;
  break;
 case 128:
 case 130:
  *VAR_1 = 100;
  *VAR_2 = 50000;
  break;
 case 132:
  *VAR_1 = 250;
  *VAR_2 = 20000;
  break;
 case 133:
 default:
  *VAR_1 = 0;
  *VAR_2 = 0;
  break;
 }
}
