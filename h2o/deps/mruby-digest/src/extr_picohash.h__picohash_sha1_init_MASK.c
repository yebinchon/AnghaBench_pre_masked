
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; scalar_t__ bufferOffset; scalar_t__ byteCount; } ;
typedef TYPE_1__ _picohash_sha1_ctx_t ;



inline void FUNC_0(_picohash_sha1_ctx_t *VAR_0)
{
    VAR_0->state[0] = 0x67452301;
    VAR_0->state[1] = 0xefcdab89;
    VAR_0->state[2] = 0x98badcfe;
    VAR_0->state[3] = 0x10325476;
    VAR_0->state[4] = 0xc3d2e1f0;
    VAR_0->byteCount = 0;
    VAR_0->bufferOffset = 0;
}
