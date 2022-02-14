
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static u16
FUNC_0(u16 VAR_0)
{
        int VAR_1 = 0, VAR_2 = 0, VAR_3 = 0;
        if (VAR_0) {
                while (--VAR_2 && !(VAR_0 & 0x8000))
                        VAR_0 <<= 1;
                VAR_3 = ((VAR_0 << 1) & 0xffc0) >> 6;
                VAR_2 += 15;
        }
        return (VAR_1 << 15) | (VAR_2 << 10) | VAR_3;
}
