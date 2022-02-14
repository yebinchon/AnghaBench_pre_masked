
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*) ;

u32 FUNC_1(u32 VAR_0)
{
 u32 VAR_1 = 0;

 switch (VAR_0) {
 case 0:
  VAR_1 = 1;
  break;
 case 16:
  VAR_1 = 2;
  break;
 case 17:
  VAR_1 = 3;
  break;
 case 18:
  VAR_1 = 2;
  break;
 case 19:
  VAR_1 = 3;
  break;
 case 20:
  VAR_1 = 4;
  break;
 case 21:
  VAR_1 = 5;
  break;
 default:
  FUNC_0("Invalid encoded Reference Divider\n");
  VAR_1 = 0;
  break;
 }

 return VAR_1;
}
