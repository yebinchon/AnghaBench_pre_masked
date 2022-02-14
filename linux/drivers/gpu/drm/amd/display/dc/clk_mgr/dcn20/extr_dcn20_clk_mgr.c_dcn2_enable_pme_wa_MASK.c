
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_smu_funcs_nv {int pp_smu; int (* set_pme_wa_enable ) (int *) ;} ;
struct clk_mgr_internal {TYPE_1__* pp_smu; } ;
struct clk_mgr {int dummy; } ;
struct TYPE_2__ {struct pp_smu_funcs_nv nv_funcs; } ;


 struct clk_mgr_internal* FUNC_0 (struct clk_mgr*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct clk_mgr *VAR_0)
{
 struct clk_mgr_internal *VAR_1 = FUNC_0(VAR_0);
 struct pp_smu_funcs_nv *VAR_2 = ((void*)0);

 if (VAR_1->pp_smu) {
  VAR_2 = &VAR_1->pp_smu->nv_funcs;

  if (VAR_2->set_pme_wa_enable)
   VAR_2->set_pme_wa_enable(&VAR_2->pp_smu);
 }
}
