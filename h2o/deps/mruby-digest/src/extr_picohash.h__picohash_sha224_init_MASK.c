
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; scalar_t__ length; scalar_t__ curlen; } ;
typedef TYPE_1__ _picohash_sha256_ctx_t ;



inline void FUNC_0(_picohash_sha256_ctx_t *VAR_0)
{
    VAR_0->curlen = 0;
    VAR_0->length = 0;
    VAR_0->state[0] = 0xc1059ed8UL;
    VAR_0->state[1] = 0x367cd507UL;
    VAR_0->state[2] = 0x3070dd17UL;
    VAR_0->state[3] = 0xf70e5939UL;
    VAR_0->state[4] = 0xffc00b31UL;
    VAR_0->state[5] = 0x68581511UL;
    VAR_0->state[6] = 0x64f98fa7UL;
    VAR_0->state[7] = 0xbefa4fa4UL;
}
