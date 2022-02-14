
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pc1_ctx {int* x1a0; int* cle; int inter; int res; scalar_t__ i; } ;


 int FUNC_0 (struct pc1_ctx*) ;

__attribute__((used)) static void FUNC_1(struct pc1_ctx *VAR_0)
{
 VAR_0->x1a0[0] = (VAR_0->cle[0] * 256) + VAR_0->cle[1];

 FUNC_0(VAR_0);
 VAR_0->inter = VAR_0->res;

 VAR_0->x1a0[1] = VAR_0->x1a0[0] ^ ((VAR_0->cle[2]*256) + VAR_0->cle[3]);
 FUNC_0(VAR_0);
 VAR_0->inter = VAR_0->inter ^ VAR_0->res;

 VAR_0->x1a0[2] = VAR_0->x1a0[1] ^ ((VAR_0->cle[4]*256) + VAR_0->cle[5]);
 FUNC_0(VAR_0);
 VAR_0->inter = VAR_0->inter ^ VAR_0->res;

 VAR_0->x1a0[3] = VAR_0->x1a0[2] ^ ((VAR_0->cle[6]*256) + VAR_0->cle[7]);
 FUNC_0(VAR_0);
 VAR_0->inter = VAR_0->inter ^ VAR_0->res;

 VAR_0->x1a0[4] = VAR_0->x1a0[3] ^ ((VAR_0->cle[8]*256) + VAR_0->cle[9]);
 FUNC_0(VAR_0);
 VAR_0->inter = VAR_0->inter ^ VAR_0->res;

 VAR_0->x1a0[5] = VAR_0->x1a0[4] ^ ((VAR_0->cle[10]*256) + VAR_0->cle[11]);
 FUNC_0(VAR_0);
 VAR_0->inter = VAR_0->inter ^ VAR_0->res;

 VAR_0->x1a0[6] = VAR_0->x1a0[5] ^ ((VAR_0->cle[12]*256) + VAR_0->cle[13]);
 FUNC_0(VAR_0);
 VAR_0->inter = VAR_0->inter ^ VAR_0->res;

 VAR_0->x1a0[7] = VAR_0->x1a0[6] ^ ((VAR_0->cle[14]*256) + VAR_0->cle[15]);
 FUNC_0(VAR_0);
 VAR_0->inter = VAR_0->inter ^ VAR_0->res;

 VAR_0->i = 0;
}
