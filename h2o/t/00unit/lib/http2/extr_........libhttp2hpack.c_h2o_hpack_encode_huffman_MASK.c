
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_3__ {int nbits; scalar_t__ code; } ;
typedef TYPE_1__ nghttp2_huff_sym ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;

size_t FUNC_0(uint8_t *VAR_2, const uint8_t *VAR_3, size_t VAR_4)
{
    uint8_t *VAR_5 = VAR_2, *VAR_6 = VAR_5 + VAR_4;
    const uint8_t *VAR_7 = VAR_3 + VAR_4;
    uint64_t VAR_8 = 0;
    int VAR_9 = 40;

    while (VAR_3 != VAR_7) {
        const nghttp2_huff_sym *VAR_10 = VAR_1 + *VAR_3++;
        VAR_8 |= (uint64_t)VAR_10->code << (VAR_9 - VAR_10->nbits);
        VAR_9 -= VAR_10->nbits;
        while (VAR_9 <= 32) {
            *VAR_5++ = VAR_8 >> 32;
            VAR_8 <<= 8;
            VAR_9 += 8;
            if (VAR_5 == VAR_6) {
                return VAR_0;
            }
        }
    }

    if (VAR_9 != 40) {
        VAR_8 |= ((uint64_t)1 << VAR_9) - 1;
        *VAR_5++ = VAR_8 >> 32;
    }
    if (VAR_5 == VAR_6) {
        return VAR_0;
    }

    return VAR_5 - VAR_2;
}
