
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint_fast32_t ;
struct TYPE_4__ {size_t lo; void const* buffer; scalar_t__ hi; } ;
typedef TYPE_1__ _picohash_md5_ctx_t ;


 void* FUNC_0 (TYPE_1__*,void const*,size_t) ;
 int FUNC_1 (void const*,void const*,size_t) ;

inline void FUNC_2(_picohash_md5_ctx_t *VAR_0, const void *VAR_1, size_t VAR_2)
{
    uint_fast32_t VAR_3;
    unsigned long VAR_4, VAR_5;

    VAR_3 = VAR_0->lo;
    if ((VAR_0->lo = (VAR_3 + VAR_2) & 0x1fffffff) < VAR_3)
        VAR_0->hi++;
    VAR_0->hi += VAR_2 >> 29;

    VAR_4 = VAR_3 & 0x3f;

    if (VAR_4) {
        VAR_5 = 64 - VAR_4;

        if (VAR_2 < VAR_5) {
            FUNC_1(&VAR_0->buffer[VAR_4], VAR_1, VAR_2);
            return;
        }

        FUNC_1(&VAR_0->buffer[VAR_4], VAR_1, VAR_5);
        VAR_1 = (const unsigned char *)VAR_1 + VAR_5;
        VAR_2 -= VAR_5;
        FUNC_0(VAR_0, VAR_0->buffer, 64);
    }

    if (VAR_2 >= 64) {
        VAR_1 = FUNC_0(VAR_0, VAR_1, VAR_2 & ~(unsigned long)0x3f);
        VAR_2 &= 0x3f;
    }

    FUNC_1(VAR_0->buffer, VAR_1, VAR_2);
}
