
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t uint32_t ;



uint8_t
FUNC_0(const char *VAR_0, size_t VAR_1)
{
    uint32_t VAR_2, VAR_3;

    for(VAR_2 = VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
        VAR_2 += VAR_0[VAR_3];
        VAR_2 += (VAR_2 << 10);
        VAR_2 ^= (VAR_2 >> 6);
    }
    VAR_2 += (VAR_2 << 3);
    VAR_2 ^= (VAR_2 >> 11);
    VAR_2 += (VAR_2 << 15);
    return VAR_2 & 0xff;
}
