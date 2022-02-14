
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_clk {int ustate_ac; int ustate_dc; } ;


 int FUNC_0 (struct nvkm_clk*,int) ;
 int FUNC_1 (struct nvkm_clk*,int) ;

int
FUNC_2(struct nvkm_clk *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 >= 0) {
  if (VAR_3 -= 2, VAR_2) VAR_0->ustate_ac = VAR_3;
  else VAR_0->ustate_dc = VAR_3;
  return FUNC_1(VAR_0, 1);
 }
 return VAR_3;
}
