
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ) ;

unsigned long FUNC_1(void)
{
 unsigned int VAR_4;
 int VAR_5 = ((FUNC_0(VAR_0) >> 9) & 0x3);
 int VAR_6 = ((FUNC_0(VAR_0) >> 4) & 0x7);

 switch (VAR_5) {
 case 0:
  VAR_4 = VAR_1;
  break;
 case 1:
  VAR_4 = VAR_2;
  break;
 case 2:
  VAR_4 = VAR_3;
  break;
 default:
  VAR_4 = VAR_1;
  break;
 }

 switch (VAR_6) {
 case 0:
  return VAR_4;
 case 1:
  return VAR_4 >> 1;
 case 2:
  return VAR_4 >> 2;
 default:
  return VAR_4;
 }
}
