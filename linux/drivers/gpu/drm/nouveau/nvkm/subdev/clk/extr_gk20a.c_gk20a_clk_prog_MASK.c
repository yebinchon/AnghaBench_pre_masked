
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_clk {int dummy; } ;
struct gk20a_clk {int pll; } ;


 struct gk20a_clk* FUNC_0 (struct nvkm_clk*) ;
 int FUNC_1 (struct gk20a_clk*,int *) ;
 int FUNC_2 (struct gk20a_clk*,int *) ;

int
FUNC_3(struct nvkm_clk *VAR_0)
{
 struct gk20a_clk *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1, &VAR_1->pll);
 if (VAR_2)
  VAR_2 = FUNC_1(VAR_1, &VAR_1->pll);

 return VAR_2;
}
