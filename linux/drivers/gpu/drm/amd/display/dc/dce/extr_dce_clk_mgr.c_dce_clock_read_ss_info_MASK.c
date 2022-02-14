
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
struct TYPE_8__ {int member_0; } ;
struct spread_spectrum_info {scalar_t__ spread_spectrum_percentage; TYPE_5__ type; int spread_percentage_divider; TYPE_3__ member_0; } ;
struct TYPE_7__ {TYPE_1__* ctx; } ;
struct dce_clk_mgr {int ss_on_dprefclk; scalar_t__ dprefclk_ss_percentage; int dprefclk_ss_divider; TYPE_2__ base; } ;
struct dc_bios {TYPE_4__* funcs; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_9__ {int (* get_ss_entry_number ) (struct dc_bios*,int ) ;int (* get_spread_spectrum_info ) (struct dc_bios*,int ,int ,struct spread_spectrum_info*) ;} ;
struct TYPE_6__ {struct dc_bios* dc_bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dc_bios*,int ) ;
 int FUNC_1 (struct dc_bios*,int ,int ,struct spread_spectrum_info*) ;
 int FUNC_2 (struct dc_bios*,int ,int ,struct spread_spectrum_info*) ;

void FUNC_3(struct dce_clk_mgr *VAR_3)
{
 struct dc_bios *VAR_4 = VAR_3->base.ctx->dc_bios;
 int VAR_5 = VAR_4->funcs->get_ss_entry_number(
   VAR_4, VAR_1);

 if (VAR_5) {
  struct spread_spectrum_info VAR_6 = { 0 };
  enum bp_result VAR_7 = VAR_4->funcs->get_spread_spectrum_info(
    VAR_4, VAR_1, 0, &VAR_6);






  if (VAR_7 == VAR_2 &&
    VAR_6.spread_spectrum_percentage != 0) {
   VAR_3->ss_on_dprefclk = 1;
   VAR_3->dprefclk_ss_divider = VAR_6.spread_percentage_divider;

   if (VAR_6.type.CENTER_MODE == 0) {



    VAR_3->dprefclk_ss_percentage =
      VAR_6.spread_spectrum_percentage;
   }

   return;
  }

  VAR_7 = VAR_4->funcs->get_spread_spectrum_info(
    VAR_4, VAR_0, 0, &VAR_6);






  if (VAR_7 == VAR_2 &&
    VAR_6.spread_spectrum_percentage != 0) {
   VAR_3->ss_on_dprefclk = 1;
   VAR_3->dprefclk_ss_divider = VAR_6.spread_percentage_divider;

   if (VAR_6.type.CENTER_MODE == 0) {



    VAR_3->dprefclk_ss_percentage =
      VAR_6.spread_spectrum_percentage;
   }
  }
 }
}
