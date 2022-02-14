
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_pll_vals {int M1; int M2; int N1; int N2; int refclk; int log2P; } ;



int
FUNC_0(struct nvkm_pll_vals *VAR_0)
{

 if (!VAR_0->M1 || !VAR_0->M2)
  return 0;

 return VAR_0->N1 * VAR_0->N2 * VAR_0->refclk / (VAR_0->M1 * VAR_0->M2) >> VAR_0->log2P;
}
