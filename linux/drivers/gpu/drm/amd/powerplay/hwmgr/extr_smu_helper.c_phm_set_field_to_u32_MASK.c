
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u32 ;



uint32_t FUNC_0(u32 VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;

 VAR_5 = (VAR_0 % 4) << 3;
 if (VAR_3 == sizeof(uint8_t))
  VAR_4 = 0xFF << VAR_5;
 else if (VAR_3 == sizeof(uint16_t))
  VAR_4 = 0xFFFF << VAR_5;

 VAR_1 &= ~VAR_4;
 VAR_1 |= (VAR_2 << VAR_5);
 return VAR_1;
}
