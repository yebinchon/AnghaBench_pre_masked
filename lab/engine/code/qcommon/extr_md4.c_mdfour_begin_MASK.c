
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdfour {int A; int B; int C; int D; scalar_t__ totalN; } ;



void FUNC_0(struct mdfour *VAR_0)
{
 VAR_0->A = 0x67452301;
 VAR_0->B = 0xefcdab89;
 VAR_0->C = 0x98badcfe;
 VAR_0->D = 0x10325476;
 VAR_0->totalN = 0;
}
