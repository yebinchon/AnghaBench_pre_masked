
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dispclk_khz; } ;
struct TYPE_7__ {TYPE_2__ dce; } ;
struct TYPE_8__ {TYPE_3__ bw; } ;
struct dc_state {TYPE_4__ bw_ctx; } ;
struct clk_mgr_internal {int max_clks_state; TYPE_1__* max_clks_by_state; } ;
struct clk_mgr {int dummy; } ;
typedef enum dm_pp_clocks_state { ____Placeholder_dm_pp_clocks_state } dm_pp_clocks_state ;
struct TYPE_5__ {scalar_t__ display_clk_khz; int pixel_clk_khz; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk_mgr_internal* FUNC_0 (struct clk_mgr*) ;
 int FUNC_1 (struct dc_state*) ;

enum dm_pp_clocks_state FUNC_2(
 struct clk_mgr *VAR_2,
 struct dc_state *VAR_3)
{
 struct clk_mgr_internal *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;
 enum dm_pp_clocks_state VAR_6;
 int VAR_7 = FUNC_1(VAR_3);





 for (VAR_5 = VAR_4->max_clks_state; VAR_5 >= VAR_1; VAR_5--)
  if (VAR_3->bw_ctx.bw.dce.dispclk_khz >
    VAR_4->max_clks_by_state[VAR_5].display_clk_khz
   || VAR_7 >
    VAR_4->max_clks_by_state[VAR_5].pixel_clk_khz)
   break;

 VAR_6 = VAR_5 + 1;
 if (VAR_6 > VAR_4->max_clks_state) {

  if (VAR_4->max_clks_by_state[VAR_4->max_clks_state].display_clk_khz
    < VAR_3->bw_ctx.bw.dce.dispclk_khz)
   VAR_6 = VAR_0;
  else
   VAR_6 = VAR_4->max_clks_state;
 }

 return VAR_6;
}
