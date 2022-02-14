
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; scalar_t__ size; scalar_t__ offset; } ;
typedef TYPE_1__ blk_SHA256_CTX ;



void FUNC_0(blk_SHA256_CTX *VAR_0)
{
 VAR_0->offset = 0;
 VAR_0->size = 0;
 VAR_0->state[0] = 0x6a09e667ul;
 VAR_0->state[1] = 0xbb67ae85ul;
 VAR_0->state[2] = 0x3c6ef372ul;
 VAR_0->state[3] = 0xa54ff53aul;
 VAR_0->state[4] = 0x510e527ful;
 VAR_0->state[5] = 0x9b05688cul;
 VAR_0->state[6] = 0x1f83d9abul;
 VAR_0->state[7] = 0x5be0cd19ul;
}
