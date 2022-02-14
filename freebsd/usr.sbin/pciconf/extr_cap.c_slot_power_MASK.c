
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(uint32_t VAR_2)
{
 int VAR_3;

 VAR_3 = (VAR_2 & VAR_1) >> 7;
 switch (VAR_2 & VAR_0) {
 case 0x0:
  VAR_3 *= 1000;
  break;
 case 0x1:
  VAR_3 *= 100;
  break;
 case 0x2:
  VAR_3 *= 10;
  break;
 default:
  break;
 }
 return (VAR_3);
}
