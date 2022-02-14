
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,unsigned int) ;

uint8_t *FUNC_2(uint8_t *VAR_0, int64_t VAR_1, unsigned VAR_2)
{
    if (FUNC_1(VAR_1, VAR_2)) {
        *VAR_0++ |= VAR_1;
    } else {

        FUNC_0(VAR_1 >= 0);
        VAR_1 -= (1 << VAR_2) - 1;
        *VAR_0++ |= (1 << VAR_2) - 1;
        for (; VAR_1 >= 128; VAR_1 >>= 7) {
            *VAR_0++ = 0x80 | VAR_1;
        }
        *VAR_0++ = VAR_1;
    }
    return VAR_0;
}
