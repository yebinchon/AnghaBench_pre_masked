
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {struct dc_context* dm; } ;
struct TYPE_10__ {int set_pstate_handshake_support; int get_uclk_dpm_states; int get_maximum_sustainable_clocks; int set_hard_min_uclk_by_freq; int * set_pme_wa_enable; int set_wm_ranges; int set_voltage_by_freq; int set_min_deep_sleep_dcfclk; int set_hard_min_dcfclk_by_freq; int set_display_count; TYPE_4__ pp_smu; } ;
struct TYPE_8__ {int ver; } ;
struct TYPE_6__ {struct dc_context* dm; } ;
struct TYPE_7__ {int set_hard_min_fclk_by_freq; int set_hard_min_dcfclk_by_freq; int set_min_deep_sleep_dcfclk; int set_display_count; int set_pme_wa_enable; int set_wm_ranges; TYPE_1__ pp_smu; } ;
struct pp_smu_funcs {TYPE_5__ nv_funcs; TYPE_3__ ctx; TYPE_2__ rv_funcs; } ;
struct dc_context {int dce_version; } ;





 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

void FUNC_1(
  struct dc_context *VAR_17,
  struct pp_smu_funcs *VAR_18)
{
 switch (VAR_17->dce_version) {
 case 130:
 case 129:
  VAR_18->ctx.ver = VAR_1;
  VAR_18->rv_funcs.pp_smu.dm = VAR_17;
  VAR_18->rv_funcs.set_wm_ranges = VAR_16;
  VAR_18->rv_funcs.set_pme_wa_enable = VAR_15;
  VAR_18->rv_funcs.set_display_count =
    VAR_11;
  VAR_18->rv_funcs.set_min_deep_sleep_dcfclk =
    VAR_14;
  VAR_18->rv_funcs.set_hard_min_dcfclk_by_freq =
    VAR_12;
  VAR_18->rv_funcs.set_hard_min_fclk_by_freq =
    VAR_13;
  break;
 default:
  FUNC_0("smu version is not supported !\n");
  break;
 }
}
