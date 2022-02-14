
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int ,int) ;

void
FUNC_2 (u8 VAR_2, u8 VAR_3, u16 VAR_4, u16 VAR_5, int VAR_6, u16 * VAR_7, u16 *VAR_8)
{
        FUNC_1 (VAR_8, 0, VAR_1 * 2);
        VAR_8[0] = (VAR_2 << 4) + (VAR_6 & 0xf);
        VAR_8[1] = (((VAR_5 == 0) ? 0 : 1) << 7) + (VAR_3 & 0x7f);
        VAR_8[2] = VAR_4;
        VAR_8[3] = VAR_5;
        if (VAR_2 == VAR_0)
                FUNC_0 (VAR_8 + 4, VAR_7, VAR_6 * 2);
        return;
}
