
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_pll_vals {int N1; int M1; int N2; int M2; int log2P; int refclk; } ;
struct nvkm_clk {int subdev; } ;
struct nvbios_pll {int refclk; } ;


 int FUNC_0 (int *,struct nvbios_pll*,int,int*,int*,int*,int*,int*) ;

int
FUNC_1(struct nvkm_clk *VAR_0, struct nvbios_pll *VAR_1,
    int VAR_2, struct nvkm_pll_vals *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9 = FUNC_0(&VAR_0->subdev, VAR_1, VAR_2, &VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8);
 if (VAR_9) {
  VAR_3->refclk = VAR_1->refclk;
  VAR_3->N1 = VAR_4;
  VAR_3->M1 = VAR_5;
  VAR_3->N2 = VAR_6;
  VAR_3->M2 = VAR_7;
  VAR_3->log2P = VAR_8;
 }
 return VAR_9;
}
