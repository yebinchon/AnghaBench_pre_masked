
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned char
FUNC_0(const unsigned char *VAR_0)
{
    int VAR_1;
    unsigned char VAR_2;

    VAR_2 = VAR_0[0];
    for (VAR_1 = 1; VAR_1 < 16; VAR_1++) {
        VAR_2 = VAR_2 ^ VAR_0[VAR_1];
    }
    return (VAR_2);
}
