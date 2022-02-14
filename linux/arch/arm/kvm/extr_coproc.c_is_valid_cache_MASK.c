
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(u32 VAR_2)
{
 u32 VAR_3, VAR_4;

 if (VAR_2 >= VAR_0)
  return 0;


        VAR_3 = (VAR_2 >> 1);
        VAR_4 = (VAR_1 >> (VAR_3 * 3)) & 7;

 switch (VAR_4) {
 case 0:
  return 0;
 case 1:
  return (VAR_2 & 1);
 case 2:
 case 4:
  return !(VAR_2 & 1);
 case 3:
  return 1;
 default:
  return 0;
 }
}
