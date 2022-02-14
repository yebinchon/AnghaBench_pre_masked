
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int ) ;

unsigned long FUNC_1(void)
{
 int VAR_5 = (FUNC_0(VAR_0) >> 25) & 0xf;

 switch (VAR_5) {
 case 1:
  return VAR_4;
 case 5:
  return VAR_3;
 case 2:
  return VAR_2;
 case 6:
  return VAR_1;

 default:
  return VAR_1;
 }
}
