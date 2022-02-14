
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ CENTER_MODE; } ;
struct TYPE_10__ {int member_0; } ;
struct spread_spectrum_info {scalar_t__ spread_spectrum_percentage; TYPE_4__ type; int spread_percentage_divider; TYPE_5__ member_0; } ;
struct dc_bios {TYPE_3__* funcs; } ;
struct TYPE_7__ {TYPE_1__* ctx; } ;
struct clk_mgr_internal {int xgmi_enabled; int ss_on_dprefclk; scalar_t__ dprefclk_ss_percentage; int dprefclk_ss_divider; TYPE_2__ base; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_8__ {int (* get_spread_spectrum_info ) (struct dc_bios*,int ,int ,struct spread_spectrum_info*) ;} ;
struct TYPE_6__ {struct dc_bios* dc_bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dc_bios*,int ,int ,struct spread_spectrum_info*) ;

__attribute__((used)) static void FUNC_1(struct clk_mgr_internal *VAR_2)
{
 enum bp_result VAR_3;
 struct spread_spectrum_info VAR_4 = { 0 };
 struct dc_bios *VAR_5 = VAR_2->base.ctx->dc_bios;

 VAR_2->xgmi_enabled = 0;

 VAR_3 = VAR_5->funcs->get_spread_spectrum_info(VAR_5, VAR_0,
           0, &VAR_4);
 if (VAR_3 == VAR_1 && VAR_4.spread_spectrum_percentage != 0) {
  VAR_2->xgmi_enabled = 1;
  VAR_2->ss_on_dprefclk = 1;
  VAR_2->dprefclk_ss_divider =
    VAR_4.spread_percentage_divider;

  if (VAR_4.type.CENTER_MODE == 0) {





   VAR_2->dprefclk_ss_percentage =
     VAR_4.spread_spectrum_percentage;
  }
 }
}
