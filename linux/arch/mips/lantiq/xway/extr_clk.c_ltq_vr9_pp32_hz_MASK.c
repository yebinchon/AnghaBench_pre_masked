
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ) ;

unsigned long FUNC_1(void)
{
 unsigned int VAR_4 = (FUNC_0(VAR_0) >> 16) & 0x7;
 unsigned long VAR_5;

 switch (VAR_4) {
 case 0:
  VAR_5 = VAR_3;
  break;
 case 1:
  VAR_5 = VAR_2;
  break;
 case 2:
  VAR_5 = VAR_1;
  break;
 default:
  VAR_5 = VAR_3;
  break;
 }

 return VAR_5;
}
