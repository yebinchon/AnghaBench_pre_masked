
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ) ;

unsigned long FUNC_1(void)
{
 unsigned int VAR_3 = (FUNC_0(VAR_0) >> 16) & 0x7;
 unsigned long VAR_4;

 switch (VAR_3) {
 case 1:
  VAR_4 = VAR_1;
  break;
 case 4:
  VAR_4 = VAR_2;
  break;
 default:
  VAR_4 = VAR_1;
  break;
 }

 return VAR_4;
}
