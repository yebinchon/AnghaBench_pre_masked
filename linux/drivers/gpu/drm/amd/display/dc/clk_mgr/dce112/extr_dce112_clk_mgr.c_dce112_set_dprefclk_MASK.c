
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dc_bios {TYPE_3__* funcs; } ;
struct TYPE_10__ {TYPE_4__* ctx; } ;
struct clk_mgr_internal {TYPE_5__ base; } ;
struct TYPE_7__ {int USE_GENLOCK_AS_SOURCE_FOR_DPREFCLK; } ;
struct bp_set_dce_clock_parameters {int target_clock_frequency; scalar_t__ pll_id; TYPE_2__ flags; int clock_type; } ;
typedef int dce_clk_params ;
struct TYPE_6__ {int hw_internal_rev; } ;
struct TYPE_9__ {TYPE_1__ asic_id; struct dc_bios* dc_bios; } ;
struct TYPE_8__ {int (* set_dce_clock ) (struct dc_bios*,struct bp_set_dce_clock_parameters*) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bp_set_dce_clock_parameters*,int ,int) ;
 int FUNC_2 (struct dc_bios*,struct bp_set_dce_clock_parameters*) ;

int FUNC_3(struct clk_mgr_internal *VAR_3)
{
 struct bp_set_dce_clock_parameters VAR_4;
 struct dc_bios *VAR_5 = VAR_3->base.ctx->dc_bios;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));



 VAR_4.target_clock_frequency = 0;
 VAR_4.pll_id = VAR_1;
 VAR_4.clock_type = VAR_2;
 if (!FUNC_0(VAR_3->base.ctx->asic_id.hw_internal_rev))
  VAR_4.flags.USE_GENLOCK_AS_SOURCE_FOR_DPREFCLK =
   (VAR_4.pll_id ==
     VAR_0);
 else
  VAR_4.flags.USE_GENLOCK_AS_SOURCE_FOR_DPREFCLK = 0;

 VAR_5->funcs->set_dce_clock(VAR_5, &VAR_4);


 return VAR_4.target_clock_frequency;
}
