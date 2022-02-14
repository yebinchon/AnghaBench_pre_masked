
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cyg_uint16 ;


 int* VAR_0 ;

cyg_uint16
FUNC_0(unsigned char *VAR_1, int VAR_2)
{
    int VAR_3;
    cyg_uint16 VAR_4;

    VAR_4 = 0;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        VAR_4 = VAR_0[((VAR_4>>8) ^ *VAR_1++) & 0xFF] ^ (VAR_4 << 8);
    }
    return VAR_4;
}
