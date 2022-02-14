
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_clk {int dummy; } ;
struct nv50_clk {int hwsq; } ;


 int FUNC_0 (int *,int) ;
 struct nv50_clk* FUNC_1 (struct nvkm_clk*) ;

void
FUNC_2(struct nvkm_clk *VAR_0)
{
 struct nv50_clk *VAR_1 = FUNC_1(VAR_0);
 FUNC_0(&VAR_1->hwsq, 0);
}
