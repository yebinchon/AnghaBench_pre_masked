
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
 unsigned int VAR_5 = (FUNC_0(VAR_0) >> 7) & 3;
 unsigned long VAR_6;

 switch (VAR_5) {
 case 1:
  VAR_6 = VAR_3;
  break;
 case 2:
  VAR_6 = VAR_2;
  break;
 case 3:
  VAR_6 = VAR_1;
  break;
 default:
  VAR_6 = VAR_4;
  break;
 }

 return VAR_6;
}
