
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum fe_stv0900_rolloff { ____Placeholder_fe_stv0900_rolloff } fe_stv0900_rolloff ;






__attribute__((used)) static u32 FUNC_0(u32 VAR_0, enum fe_stv0900_rolloff VAR_1)
{
 u32 VAR_2;

 switch (VAR_1) {
 case 130:
  VAR_2 = 20;
  break;
 case 129:
  VAR_2 = 25;
  break;
 case 128:
 default:
  VAR_2 = 35;
  break;
 }

 return VAR_0 + (VAR_0 * VAR_2) / 100;
}
