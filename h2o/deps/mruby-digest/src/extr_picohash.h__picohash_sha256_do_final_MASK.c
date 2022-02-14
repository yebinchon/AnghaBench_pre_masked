
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; int curlen; unsigned char* buf; int* state; } ;
typedef TYPE_1__ _picohash_sha256_ctx_t ;


 int FUNC_0 (TYPE_1__*,unsigned char*) ;

__attribute__((used)) static inline void FUNC_1(_picohash_sha256_ctx_t *VAR_0, void *VAR_1, size_t VAR_2)
{
    unsigned char *VAR_3 = VAR_1;
    size_t VAR_4;


    VAR_0->length += VAR_0->curlen * 8;


    VAR_0->buf[VAR_0->curlen++] = (unsigned char)0x80;





    if (VAR_0->curlen > 56) {
        while (VAR_0->curlen < 64) {
            VAR_0->buf[VAR_0->curlen++] = (unsigned char)0;
        }
        FUNC_0(VAR_0, VAR_0->buf);
        VAR_0->curlen = 0;
    }


    while (VAR_0->curlen < 56) {
        VAR_0->buf[VAR_0->curlen++] = (unsigned char)0;
    }


    for (VAR_4 = 0; VAR_4 != 8; ++VAR_4)
        VAR_0->buf[56 + VAR_4] = VAR_0->length >> (56 - 8 * VAR_4);
    FUNC_0(VAR_0, VAR_0->buf);


    for (VAR_4 = 0; VAR_4 != VAR_2 / 4; ++VAR_4) {
        VAR_3[VAR_4 * 4] = VAR_0->state[VAR_4] >> 24;
        VAR_3[VAR_4 * 4 + 1] = VAR_0->state[VAR_4] >> 16;
        VAR_3[VAR_4 * 4 + 2] = VAR_0->state[VAR_4] >> 8;
        VAR_3[VAR_4 * 4 + 3] = VAR_0->state[VAR_4];
    }
}
