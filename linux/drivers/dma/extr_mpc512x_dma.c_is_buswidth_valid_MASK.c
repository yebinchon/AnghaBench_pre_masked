
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



inline bool FUNC_0(u8 VAR_0, bool VAR_1)
{
 switch (VAR_0) {
 case 16:
  if (VAR_1)
   return 0;
 case 1:
 case 2:
 case 4:
 case 32:
  break;
 default:
  return 0;
 }

 return 1;
}
