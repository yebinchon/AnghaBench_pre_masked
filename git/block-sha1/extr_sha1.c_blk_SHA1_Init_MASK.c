
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* H; scalar_t__ size; } ;
typedef TYPE_1__ blk_SHA_CTX ;



void FUNC_0(blk_SHA_CTX *VAR_0)
{
 VAR_0->size = 0;


 VAR_0->H[0] = 0x67452301;
 VAR_0->H[1] = 0xefcdab89;
 VAR_0->H[2] = 0x98badcfe;
 VAR_0->H[3] = 0x10325476;
 VAR_0->H[4] = 0xc3d2e1f0;
}
