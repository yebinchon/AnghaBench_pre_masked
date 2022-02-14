
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int bw_dppclk_khz; int max_supported_dppclk_khz; int bw_dispclk_khz; int max_supported_dispclk_khz; } ;
struct TYPE_8__ {TYPE_2__ clk; } ;
struct TYPE_9__ {TYPE_3__ dcn; } ;
struct TYPE_10__ {TYPE_4__ bw; } ;
struct dc_state {TYPE_5__ bw_ctx; } ;
struct dc_clock_config {int bw_requirequired_clock_khz; int current_clock_khz; int min_clock_khz; int max_clock_khz; } ;
struct TYPE_6__ {int dppclk_khz; int dispclk_khz; } ;
struct clk_mgr {TYPE_1__ clks; } ;
typedef enum dc_clock_type { ____Placeholder_dc_clock_type } dc_clock_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct clk_mgr *VAR_4,
  struct dc_state *VAR_5,
   enum dc_clock_type VAR_6,
   struct dc_clock_config *VAR_7)
{

 if (VAR_6 == VAR_2) {
  VAR_7->max_clock_khz = VAR_5->bw_ctx.bw.dcn.clk.max_supported_dispclk_khz;
  VAR_7->min_clock_khz = VAR_0;
  VAR_7->current_clock_khz = VAR_4->clks.dispclk_khz;
  VAR_7->bw_requirequired_clock_khz = VAR_5->bw_ctx.bw.dcn.clk.bw_dispclk_khz;
 }
 if (VAR_6 == VAR_3) {
  VAR_7->max_clock_khz = VAR_5->bw_ctx.bw.dcn.clk.max_supported_dppclk_khz;
  VAR_7->min_clock_khz = VAR_1;
  VAR_7->current_clock_khz = VAR_4->clks.dppclk_khz;
  VAR_7->bw_requirequired_clock_khz = VAR_5->bw_ctx.bw.dcn.clk.bw_dppclk_khz;
 }
}
