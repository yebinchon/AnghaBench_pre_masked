
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t curlen; size_t length; unsigned char* buf; } ;
typedef TYPE_1__ _picohash_sha256_ctx_t ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char const*,size_t) ;

inline void FUNC_2(_picohash_sha256_ctx_t *VAR_1, const void *VAR_2, size_t VAR_3)
{
    const unsigned char *VAR_4 = VAR_2;
    size_t VAR_5;

    while (VAR_3 > 0) {
        if (VAR_1->curlen == 0 && VAR_3 >= VAR_0) {
            FUNC_0(VAR_1, (unsigned char *)VAR_4);
            VAR_1->length += VAR_0 * 8;
            VAR_4 += VAR_0;
            VAR_3 -= VAR_0;
        } else {
            VAR_5 = VAR_0 - VAR_1->curlen;
            if (VAR_5 > VAR_3)
                VAR_5 = VAR_3;
            FUNC_1(VAR_1->buf + VAR_1->curlen, VAR_4, (size_t)VAR_5);
            VAR_1->curlen += VAR_5;
            VAR_4 += VAR_5;
            VAR_3 -= VAR_5;
            if (VAR_1->curlen == 64) {
                FUNC_0(VAR_1, VAR_1->buf);
                VAR_1->length += 8 * VAR_0;
                VAR_1->curlen = 0;
            }
        }
    }
}
