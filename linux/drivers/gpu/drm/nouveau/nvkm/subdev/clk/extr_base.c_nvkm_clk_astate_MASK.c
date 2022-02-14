
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_clk {int astate; scalar_t__ state_nr; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct nvkm_clk*,int) ;

int
FUNC_3(struct nvkm_clk *VAR_0, int VAR_1, int VAR_2, bool VAR_3)
{
 if (!VAR_2) VAR_0->astate = VAR_1;
 if ( VAR_2) VAR_0->astate += VAR_2;
 VAR_0->astate = FUNC_1(VAR_0->astate, VAR_0->state_nr - 1);
 VAR_0->astate = FUNC_0(VAR_0->astate, 0);
 return FUNC_2(VAR_0, VAR_3);
}
