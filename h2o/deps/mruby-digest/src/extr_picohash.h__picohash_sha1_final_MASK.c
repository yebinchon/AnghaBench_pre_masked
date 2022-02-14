
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bufferOffset; int byteCount; int* state; } ;
typedef TYPE_1__ _picohash_sha1_ctx_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (void*,int*,int) ;

inline void FUNC_2(_picohash_sha1_ctx_t *VAR_0, void *VAR_1)
{

    FUNC_0(VAR_0, 0x80);
    while (VAR_0->bufferOffset != 56)
        FUNC_0(VAR_0, 0x00);


    FUNC_0(VAR_0, VAR_0->byteCount >> 53);
    FUNC_0(VAR_0, VAR_0->byteCount >> 45);
    FUNC_0(VAR_0, VAR_0->byteCount >> 37);
    FUNC_0(VAR_0, VAR_0->byteCount >> 29);
    FUNC_0(VAR_0, VAR_0->byteCount >> 21);
    FUNC_0(VAR_0, VAR_0->byteCount >> 13);
    FUNC_0(VAR_0, VAR_0->byteCount >> 5);
    FUNC_0(VAR_0, VAR_0->byteCount << 3);


    {
        int VAR_2;
        for (VAR_2 = 0; VAR_2 < 5; VAR_2++) {
            VAR_0->state[VAR_2] = (((VAR_0->state[VAR_2]) << 24) & 0xff000000) | (((VAR_0->state[VAR_2]) << 8) & 0x00ff0000) |
                          (((VAR_0->state[VAR_2]) >> 8) & 0x0000ff00) | (((VAR_0->state[VAR_2]) >> 24) & 0x000000ff);
        }
    }


    FUNC_1(VAR_1, VAR_0->state, sizeof(VAR_0->state));
}
