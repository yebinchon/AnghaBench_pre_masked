
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ieee754dp {int dummy; } ieee754dp ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_1(union ieee754dp VAR_4)
{
 VAR_0;

 VAR_1;
 switch(VAR_2) {
 case 129:
  return 0x01;
 case 130:
  return 0x02;
 case 132:
  return 0x04 << (VAR_3 ? 0 : 4);
 case 131:
  return 0x08 << (VAR_3 ? 0 : 4);
 case 133:
  return 0x10 << (VAR_3 ? 0 : 4);
 case 128:
  return 0x20 << (VAR_3 ? 0 : 4);
 default:
  FUNC_0("Unknown class: %d\n", VAR_2);
  return 0;
 }
}
