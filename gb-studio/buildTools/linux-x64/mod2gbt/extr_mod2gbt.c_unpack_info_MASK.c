
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



void FUNC_0(u8 *VAR_0, u8 *VAR_1, u16 *VAR_2, u8 *VAR_3,
                 u8 *VAR_4)
{
    *VAR_1 = (VAR_0[0] & 0xF0) | ((VAR_0[2] & 0xF0) >> 4);
    *VAR_2 = VAR_0[1] | ((VAR_0[0] & 0x0F) << 8);
    *VAR_3 = VAR_0[2] & 0x0F;
    *VAR_4 = VAR_0[3];
}
