
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


struct pp_smu_funcs_rv {int pp_smu; int (* set_min_deep_sleep_dcfclk ) (int *,int) ;int (* set_hard_min_dcfclk_by_freq ) (int *,int) ;int (* set_hard_min_fclk_by_freq ) (int *,int) ;int (* set_display_count ) (int *,int) ;} ;
struct dc_clocks {scalar_t__ dispclk_khz; scalar_t__ phyclk_khz; scalar_t__ fclk_khz; int dcfclk_khz; int dcfclk_deep_sleep_khz; } ;
struct TYPE_8__ {struct dc_clocks clk; } ;
struct TYPE_9__ {TYPE_2__ dcn; } ;
struct TYPE_10__ {TYPE_3__ bw; } ;
struct dc_state {TYPE_4__ bw_ctx; } ;
struct dc_debug_options {scalar_t__ force_fclk_khz; } ;
struct dc {struct dc_debug_options debug; } ;
struct clk_mgr_internal {TYPE_6__* pp_smu; } ;
struct TYPE_11__ {scalar_t__ dispclk_khz; scalar_t__ phyclk_khz; scalar_t__ fclk_khz; int dcfclk_khz; int dcfclk_deep_sleep_khz; } ;
struct clk_mgr {TYPE_5__ clks; TYPE_1__* ctx; } ;
struct TYPE_12__ {struct pp_smu_funcs_rv rv_funcs; } ;
struct TYPE_7__ {struct dc* dc; } ;


 int FUNC_0 (TYPE_6__*) ;
 struct clk_mgr_internal* FUNC_1 (struct clk_mgr*) ;
 int FUNC_2 (struct dc*,struct dc_state*) ;
 int FUNC_3 (struct clk_mgr_internal*,struct dc*,struct dc_clocks*) ;
 scalar_t__ FUNC_4 (int,int,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static void FUNC_12(struct clk_mgr *VAR_0,
   struct dc_state *VAR_1,
   bool VAR_2)
{
 struct clk_mgr_internal *VAR_3 = FUNC_1(VAR_0);
 struct dc *VAR_4 = VAR_0->ctx->dc;
 struct dc_debug_options *VAR_5 = &VAR_4->debug;
 struct dc_clocks *VAR_6 = &VAR_1->bw_ctx.bw.dcn.clk;
 struct pp_smu_funcs_rv *VAR_7 = ((void*)0);
 bool VAR_8 = 0;
 bool VAR_9 = 0;
 int VAR_10;

 bool VAR_11 = 0;

 FUNC_0(VAR_3->pp_smu);

 VAR_7 = &VAR_3->pp_smu->rv_funcs;

 VAR_10 = FUNC_2(VAR_4, VAR_1);

 if (VAR_10 == 0)
  VAR_11 = 1;

 if (VAR_11 == VAR_2) {





  if (VAR_7->set_display_count)
   VAR_7->set_display_count(&VAR_7->pp_smu, VAR_10);
 }

 if (VAR_6->dispclk_khz > VAR_0->clks.dispclk_khz
   || VAR_6->phyclk_khz > VAR_0->clks.phyclk_khz
   || VAR_6->fclk_khz > VAR_0->clks.fclk_khz
   || VAR_6->dcfclk_khz > VAR_0->clks.dcfclk_khz)
  VAR_8 = 1;

 if (FUNC_4(VAR_2, VAR_6->phyclk_khz, VAR_0->clks.phyclk_khz)) {
  VAR_0->clks.phyclk_khz = VAR_6->phyclk_khz;
  VAR_9 = 1;
 }


 if (VAR_5->force_fclk_khz != 0)
  VAR_6->fclk_khz = VAR_5->force_fclk_khz;

 if (FUNC_4(VAR_2, VAR_6->fclk_khz, VAR_0->clks.fclk_khz)) {
  VAR_0->clks.fclk_khz = VAR_6->fclk_khz;
  VAR_9 = 1;
 }


 if (FUNC_4(VAR_2, VAR_6->dcfclk_khz, VAR_0->clks.dcfclk_khz)) {
  VAR_0->clks.dcfclk_khz = VAR_6->dcfclk_khz;
  VAR_9 = 1;
 }

 if (FUNC_4(VAR_2,
   VAR_6->dcfclk_deep_sleep_khz, VAR_0->clks.dcfclk_deep_sleep_khz)) {
  VAR_0->clks.dcfclk_deep_sleep_khz = VAR_6->dcfclk_deep_sleep_khz;
  VAR_9 = 1;
 }




 if (VAR_8) {

  if (VAR_7->set_hard_min_fclk_by_freq &&
    VAR_7->set_hard_min_dcfclk_by_freq &&
    VAR_7->set_min_deep_sleep_dcfclk) {
   VAR_7->set_hard_min_fclk_by_freq(&VAR_7->pp_smu, VAR_6->fclk_khz / 1000);
   VAR_7->set_hard_min_dcfclk_by_freq(&VAR_7->pp_smu, VAR_6->dcfclk_khz / 1000);
   VAR_7->set_min_deep_sleep_dcfclk(&VAR_7->pp_smu, (VAR_6->dcfclk_deep_sleep_khz + 999) / 1000);
  }
 }



 if (FUNC_4(VAR_2, VAR_6->dispclk_khz, VAR_0->clks.dispclk_khz)
   || VAR_6->dispclk_khz == VAR_0->clks.dispclk_khz) {
  FUNC_3(VAR_3, VAR_4, VAR_6);
  VAR_0->clks.dispclk_khz = VAR_6->dispclk_khz;
  VAR_9 = 1;
 }

 if (!VAR_8 && VAR_9) {

  if (VAR_7->set_hard_min_fclk_by_freq &&
    VAR_7->set_hard_min_dcfclk_by_freq &&
    VAR_7->set_min_deep_sleep_dcfclk) {
   VAR_7->set_hard_min_fclk_by_freq(&VAR_7->pp_smu, VAR_6->fclk_khz / 1000);
   VAR_7->set_hard_min_dcfclk_by_freq(&VAR_7->pp_smu, VAR_6->dcfclk_khz / 1000);
   VAR_7->set_min_deep_sleep_dcfclk(&VAR_7->pp_smu, (VAR_6->dcfclk_deep_sleep_khz + 999) / 1000);
  }
 }
}
