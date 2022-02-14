
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_device {int dummy; } ;
struct nvkm_clk {int pll_prog; int pll_calc; } ;
struct nv40_clk {struct nvkm_clk base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv40_clk* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,struct nvkm_device*,int,int,struct nvkm_clk*) ;

int
FUNC_2(struct nvkm_device *VAR_5, int VAR_6, struct nvkm_clk **VAR_7)
{
 struct nv40_clk *VAR_8;

 if (!(VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_1)))
  return -VAR_0;
 VAR_8->base.pll_calc = VAR_2;
 VAR_8->base.pll_prog = VAR_3;
 *VAR_7 = &VAR_8->base;

 return FUNC_1(&VAR_4, VAR_5, VAR_6, 1, &VAR_8->base);
}
