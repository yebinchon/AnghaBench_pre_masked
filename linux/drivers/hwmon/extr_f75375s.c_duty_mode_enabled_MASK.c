
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static bool FUNC_1(u8 VAR_0)
{
 switch (VAR_0) {
 case 0:
 case 1:
 case 4:
  return 1;
 case 2:
 case 3:
  return 0;
 default:
  FUNC_0(1, "Unexpected pwm_enable value %d\n", VAR_0);
  return 1;
 }
}
