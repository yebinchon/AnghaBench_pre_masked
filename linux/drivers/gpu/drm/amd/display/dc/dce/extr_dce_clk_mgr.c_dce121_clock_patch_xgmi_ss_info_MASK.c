
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ CENTER_MODE; } ;
struct TYPE_6__ {int member_0; } ;
struct spread_spectrum_info {scalar_t__ spread_spectrum_percentage; TYPE_5__ type; int spread_percentage_divider; TYPE_1__ member_0; } ;
struct TYPE_8__ {TYPE_2__* ctx; } ;
struct dce_clk_mgr {int xgmi_enabled; int ss_on_dprefclk; scalar_t__ dprefclk_ss_percentage; int dprefclk_ss_divider; TYPE_3__ base; } ;
struct dc_bios {TYPE_4__* funcs; } ;
struct clk_mgr {int dummy; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_9__ {int (* get_spread_spectrum_info ) (struct dc_bios*,int ,int ,struct spread_spectrum_info*) ;} ;
struct TYPE_7__ {struct dc_bios* dc_bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dce_clk_mgr* FUNC_0 (struct clk_mgr*) ;
 int FUNC_1 (struct dc_bios*,int ,int ,struct spread_spectrum_info*) ;

void FUNC_2(struct clk_mgr *VAR_2)
{
 struct dce_clk_mgr *VAR_3 = FUNC_0(VAR_2);
 enum bp_result VAR_4;
 struct spread_spectrum_info VAR_5 = { 0 };
 struct dc_bios *VAR_6 = VAR_3->base.ctx->dc_bios;

 VAR_3->xgmi_enabled = 0;

 VAR_4 = VAR_6->funcs->get_spread_spectrum_info(VAR_6, VAR_0,
           0, &VAR_5);
 if (VAR_4 == VAR_1 && VAR_5.spread_spectrum_percentage != 0) {
  VAR_3->xgmi_enabled = 1;
  VAR_3->ss_on_dprefclk = 1;
  VAR_3->dprefclk_ss_divider =
    VAR_5.spread_percentage_divider;

  if (VAR_5.type.CENTER_MODE == 0) {



   VAR_3->dprefclk_ss_percentage =
     VAR_5.spread_spectrum_percentage;
  }
 }
}
