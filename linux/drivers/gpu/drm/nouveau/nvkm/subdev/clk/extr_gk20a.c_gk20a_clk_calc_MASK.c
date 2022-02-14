
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_cstate {int* domain; } ;
struct nvkm_clk {int dummy; } ;
struct gk20a_clk {int pll; } ;


 int VAR_0 ;
 struct gk20a_clk* FUNC_0 (struct nvkm_clk*) ;
 int FUNC_1 (struct gk20a_clk*,int,int *) ;
 size_t VAR_1 ;

int
FUNC_2(struct nvkm_clk *VAR_2, struct nvkm_cstate *VAR_3)
{
 struct gk20a_clk *VAR_4 = FUNC_0(VAR_2);

 return FUNC_1(VAR_4, VAR_3->domain[VAR_1] *
      VAR_0, &VAR_4->pll);
}
