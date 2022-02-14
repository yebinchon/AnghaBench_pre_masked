
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;


 int * VAR_0 ;

__attribute__((used)) static uint8_t *
FUNC_0(uint8_t *VAR_1, size_t VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
    uint32_t VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += 6) {
        if (VAR_2 < 1) {
            return ((void*)0);
        }
        *VAR_1++ = VAR_0[VAR_3 & 0x3f];
        VAR_2--;
        VAR_3 >>= 6;
    }
    return VAR_1;
}
