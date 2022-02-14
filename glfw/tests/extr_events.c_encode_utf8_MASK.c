
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t FUNC_0(char* VAR_0, unsigned int VAR_1)
{
    size_t VAR_2 = 0;

    if (VAR_1 < 0x80)
        VAR_0[VAR_2++] = (char) VAR_1;
    else if (VAR_1 < 0x800)
    {
        VAR_0[VAR_2++] = (VAR_1 >> 6) | 0xc0;
        VAR_0[VAR_2++] = (VAR_1 & 0x3f) | 0x80;
    }
    else if (VAR_1 < 0x10000)
    {
        VAR_0[VAR_2++] = (VAR_1 >> 12) | 0xe0;
        VAR_0[VAR_2++] = ((VAR_1 >> 6) & 0x3f) | 0x80;
        VAR_0[VAR_2++] = (VAR_1 & 0x3f) | 0x80;
    }
    else if (VAR_1 < 0x110000)
    {
        VAR_0[VAR_2++] = (VAR_1 >> 18) | 0xf0;
        VAR_0[VAR_2++] = ((VAR_1 >> 12) & 0x3f) | 0x80;
        VAR_0[VAR_2++] = ((VAR_1 >> 6) & 0x3f) | 0x80;
        VAR_0[VAR_2++] = (VAR_1 & 0x3f) | 0x80;
    }

    return VAR_2;
}
