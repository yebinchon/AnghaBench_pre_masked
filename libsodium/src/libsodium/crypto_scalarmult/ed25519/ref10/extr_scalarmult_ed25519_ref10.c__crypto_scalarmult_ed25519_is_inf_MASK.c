
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const unsigned char VAR_0[32])
{
    unsigned char VAR_1;
    unsigned int VAR_2;

    VAR_1 = VAR_0[0] ^ 0x01;
    for (VAR_2 = 1; VAR_2 < 31; VAR_2++) {
        VAR_1 |= VAR_0[VAR_2];
    }
    VAR_1 |= VAR_0[31] & 0x7f;

    return ((((unsigned int) VAR_1) - 1U) >> 8) & 1;
}
