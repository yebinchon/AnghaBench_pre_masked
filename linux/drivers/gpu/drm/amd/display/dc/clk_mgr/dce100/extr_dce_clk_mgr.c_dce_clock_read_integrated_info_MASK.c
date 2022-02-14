
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct dc_debug_options {int disable_dfs_bypass; } ;
struct TYPE_11__ {int smu_gpu_pll_output_freq; } ;
struct dc_bios {TYPE_7__* integrated_info; TYPE_4__ fw_info; } ;
struct TYPE_10__ {TYPE_2__* ctx; } ;
struct clk_mgr_internal {int dentist_vco_freq_khz; int dfs_bypass_enabled; TYPE_5__* max_clks_by_state; TYPE_3__ base; } ;
typedef enum dm_pp_clocks_state { ____Placeholder_dm_pp_clocks_state } dm_pp_clocks_state ;
struct TYPE_14__ {int dentist_vco_freq; int gpu_cap_info; TYPE_6__* disp_clk_voltage; } ;
struct TYPE_13__ {int max_supported_clk; } ;
struct TYPE_12__ {int display_clk_khz; } ;
struct TYPE_9__ {struct dc_bios* dc_bios; TYPE_1__* dc; } ;
struct TYPE_8__ {struct dc_debug_options debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct clk_mgr_internal *VAR_7)
{
 struct dc_debug_options *VAR_8 = &VAR_7->base.ctx->dc->debug;
 struct dc_bios *VAR_9 = VAR_7->base.ctx->dc_bios;
 int VAR_10;

 if (VAR_9->integrated_info)
  VAR_7->dentist_vco_freq_khz = VAR_9->integrated_info->dentist_vco_freq;
 if (VAR_7->dentist_vco_freq_khz == 0) {
  VAR_7->dentist_vco_freq_khz = VAR_9->fw_info.smu_gpu_pll_output_freq;
  if (VAR_7->dentist_vco_freq_khz == 0)
   VAR_7->dentist_vco_freq_khz = 3600000;
 }


 for (VAR_10 = 0; VAR_10 < VAR_6; ++VAR_10) {
  enum dm_pp_clocks_state VAR_11 = VAR_1;

  switch (VAR_10) {
  case 0:
   VAR_11 = VAR_5;
   break;

  case 1:
   VAR_11 = VAR_2;
   break;

  case 2:
   VAR_11 = VAR_3;
   break;

  case 3:
   VAR_11 = VAR_4;
   break;

  default:
   VAR_11 = VAR_1;
   break;
  }



  if (VAR_9->integrated_info)
   if (VAR_9->integrated_info->disp_clk_voltage[VAR_10].max_supported_clk >= 100000)
    VAR_7->max_clks_by_state[VAR_11].display_clk_khz =
     VAR_9->integrated_info->disp_clk_voltage[VAR_10].max_supported_clk;
 }

 if (!VAR_8->disable_dfs_bypass && VAR_9->integrated_info)
  if (VAR_9->integrated_info->gpu_cap_info & VAR_0)
   VAR_7->dfs_bypass_enabled = 1;
}
