
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pp_smu_funcs_nv {int pp_smu; int (* set_voltage_by_freq ) (int *,int ,int) ;} ;
struct dc {TYPE_3__* res_pool; } ;
struct TYPE_10__ {unsigned int dispclk_khz; } ;
struct TYPE_11__ {TYPE_4__ clks; } ;
struct clk_mgr_internal {TYPE_5__ base; } ;
struct TYPE_12__ {int dispclk_khz; } ;
struct clk_mgr {TYPE_6__ clks; TYPE_1__* ctx; } ;
struct TYPE_9__ {TYPE_2__* pp_smu; } ;
struct TYPE_8__ {struct pp_smu_funcs_nv nv_funcs; } ;
struct TYPE_7__ {struct dc* dc; } ;


 int VAR_0 ;
 struct clk_mgr_internal* FUNC_0 (struct clk_mgr*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct clk_mgr_internal*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct clk_mgr *VAR_1, unsigned int VAR_2)
{
 struct clk_mgr_internal *VAR_3 = FUNC_0(VAR_1);
 struct dc *VAR_4 = VAR_1->ctx->dc;
 struct pp_smu_funcs_nv *VAR_5 = ((void*)0);
 bool VAR_6 = VAR_3->base.clks.dispclk_khz < VAR_2;

 if (VAR_4->res_pool->pp_smu)
  VAR_5 = &VAR_4->res_pool->pp_smu->nv_funcs;

 VAR_3->base.clks.dispclk_khz = VAR_2;

 if (VAR_6 && VAR_5 && VAR_5->set_voltage_by_freq)
  VAR_5->set_voltage_by_freq(&VAR_5->pp_smu, VAR_0, VAR_1->clks.dispclk_khz / 1000);

 FUNC_3(VAR_3, VAR_2);

 if (!VAR_6 && VAR_5 && VAR_5->set_voltage_by_freq)
  VAR_5->set_voltage_by_freq(&VAR_5->pp_smu, VAR_0, VAR_1->clks.dispclk_khz / 1000);
}
