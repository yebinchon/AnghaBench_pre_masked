
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_1,
    unsigned int *VAR_2,
    unsigned int *VAR_3)
{
 switch (VAR_1) {
 case 0x0:
  *VAR_2 = 2000;
  *VAR_3 = 1200;
  break;
 case 0x6:
  *VAR_2 = 2200;
  *VAR_3 = 1200;
  break;
 case 0xD:
  *VAR_2 = 1600;
  *VAR_3 = 1200;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
