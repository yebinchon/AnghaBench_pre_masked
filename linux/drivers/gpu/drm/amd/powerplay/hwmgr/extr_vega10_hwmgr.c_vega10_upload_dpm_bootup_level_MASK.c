
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_18__ {scalar_t__ gfx_boot_level; scalar_t__ mem_boot_level; scalar_t__ soc_boot_level; } ;
struct TYPE_15__ {scalar_t__ soft_min_level; } ;
struct TYPE_16__ {TYPE_6__ dpm_state; } ;
struct TYPE_12__ {scalar_t__ soft_min_level; } ;
struct TYPE_13__ {TYPE_3__ dpm_state; } ;
struct TYPE_10__ {scalar_t__ soft_min_level; } ;
struct TYPE_11__ {TYPE_1__ dpm_state; } ;
struct TYPE_17__ {TYPE_7__ soc_table; TYPE_4__ mem_table; TYPE_2__ gfx_table; } ;
struct TYPE_14__ {int socclk_dpm_key_disabled; int mclk_dpm_key_disabled; int sclk_dpm_key_disabled; } ;
struct vega10_hwmgr {TYPE_9__ smc_state_table; TYPE_8__ dpm_table; TYPE_5__ registry_data; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pp_hwmgr*,int ,scalar_t__) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 scalar_t__ FUNC_2 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_4)
{
 struct vega10_hwmgr *VAR_5 = VAR_4->backend;
 uint32_t VAR_6;

 FUNC_1(VAR_4);

 if (!VAR_5->registry_data.sclk_dpm_key_disabled) {
  if (VAR_5->smc_state_table.gfx_boot_level !=
    VAR_5->dpm_table.gfx_table.dpm_state.soft_min_level) {
   FUNC_0(VAR_4,
    VAR_1,
    VAR_5->smc_state_table.gfx_boot_level);
   VAR_5->dpm_table.gfx_table.dpm_state.soft_min_level =
     VAR_5->smc_state_table.gfx_boot_level;
  }
 }

 if (!VAR_5->registry_data.mclk_dpm_key_disabled) {
  if (VAR_5->smc_state_table.mem_boot_level !=
    VAR_5->dpm_table.mem_table.dpm_state.soft_min_level) {
   if (VAR_5->smc_state_table.mem_boot_level == VAR_0 - 1) {
    VAR_6 = FUNC_2(VAR_4);
    FUNC_0(VAR_4,
      VAR_2,
      VAR_6);
   } else {
    FUNC_0(VAR_4,
      VAR_3,
      VAR_5->smc_state_table.mem_boot_level);
   }
   VAR_5->dpm_table.mem_table.dpm_state.soft_min_level =
     VAR_5->smc_state_table.mem_boot_level;
  }
 }

 if (!VAR_5->registry_data.socclk_dpm_key_disabled) {
  if (VAR_5->smc_state_table.soc_boot_level !=
    VAR_5->dpm_table.soc_table.dpm_state.soft_min_level) {
   FUNC_0(VAR_4,
    VAR_2,
    VAR_5->smc_state_table.soc_boot_level);
   VAR_5->dpm_table.soc_table.dpm_state.soft_min_level =
     VAR_5->smc_state_table.soc_boot_level;
  }
 }

 return 0;
}
