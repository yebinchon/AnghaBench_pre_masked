
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (int ) ;

unsigned long FUNC_1(void)
{
 unsigned int VAR_8;
 unsigned long VAR_9;

 VAR_8 = (FUNC_0(VAR_0) >> 4) & 0xf;

 switch (VAR_8) {
 case 0:
  VAR_9 = VAR_7;
  break;
 case 1:
  VAR_9 = VAR_6;
  break;
 case 2:
  VAR_9 = VAR_5;
  break;
 case 3:
  VAR_9 = VAR_4;
  break;
 case 5:
 case 6:
  VAR_9 = VAR_3;
  break;
 case 7:
  VAR_9 = VAR_2;
  break;
 case 4:
 case 8:
 case 9:
  VAR_9 = VAR_1;
  break;
 default:
  VAR_9 = 0;
  break;
 }

 return VAR_9;
}
