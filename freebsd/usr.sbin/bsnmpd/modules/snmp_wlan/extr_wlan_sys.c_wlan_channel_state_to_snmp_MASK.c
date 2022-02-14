
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

uint8_t
FUNC_0(uint8_t VAR_8)
{
 uint8_t VAR_9 = 0;

 if ((VAR_8 & VAR_3) != 0)
  VAR_9 |= (0x1 << VAR_6);
 if ((VAR_8 & VAR_0) != 0)
  VAR_9 |= (0x1 << VAR_4);
 if ((VAR_8 & VAR_1) != 0)
  VAR_9 |= (0x1 << VAR_5);
 if ((VAR_8 & VAR_2) != 0)
  VAR_9 |= (0x1 << VAR_7);

 return (VAR_9);
}
