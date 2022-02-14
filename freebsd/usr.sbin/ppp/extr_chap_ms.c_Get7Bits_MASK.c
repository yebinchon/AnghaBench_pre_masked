
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_char ;



__attribute__((used)) static u_char
FUNC_0(u_char *VAR_0, int VAR_1)
{
    register unsigned int VAR_2;

    VAR_2 = (unsigned)VAR_0[VAR_1 / 8] << 8;
    VAR_2 |= (unsigned)VAR_0[VAR_1 / 8 + 1];

    VAR_2 >>= 15 - (VAR_1 % 8 + 7);

    return VAR_2 & 0xFE;
}
