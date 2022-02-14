
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int uint32_t ;
struct TYPE_12__ {int count; } ;
struct TYPE_13__ {TYPE_10__ pcie_speed_table; } ;
struct TYPE_22__ {int count; TYPE_3__* dpm_levels; } ;
struct TYPE_15__ {int count; TYPE_1__* dpm_levels; } ;
struct smu7_dpm_table {TYPE_9__ mclk_table; TYPE_2__ sclk_table; } ;
struct smu7_hwmgr {TYPE_11__ dpm_table; struct smu7_dpm_table golden_dpm_table; } ;
struct TYPE_19__ {TYPE_5__* vddc_dependency_on_sclk; } ;
struct pp_hwmgr {scalar_t__ pp_table_version; int pstate_sclk; int pstate_mclk; scalar_t__ pptable; TYPE_6__ dyn_state; scalar_t__ backend; } ;
struct phm_ppt_v1_information {TYPE_8__* vdd_dep_on_sclk; } ;
typedef int int32_t ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;
struct TYPE_21__ {int count; TYPE_7__* entries; } ;
struct TYPE_20__ {int clk; } ;
struct TYPE_18__ {int count; TYPE_4__* entries; } ;
struct TYPE_17__ {int clk; } ;
struct TYPE_16__ {int value; } ;
struct TYPE_14__ {int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_6, enum amd_dpm_forced_level VAR_7,
    uint32_t *VAR_8, uint32_t *VAR_9, uint32_t *VAR_10)
{
 uint32_t VAR_11;
 struct smu7_hwmgr *VAR_12 = (struct smu7_hwmgr *)(VAR_6->backend);
 struct smu7_dpm_table *VAR_13 = &VAR_12->golden_dpm_table;
 int32_t VAR_14;
 int32_t VAR_15;
 int32_t VAR_16;

 if (VAR_13->mclk_table.count < 1)
  return -VAR_3;

 VAR_11 = 100 * VAR_13->sclk_table.dpm_levels[VAR_13->sclk_table.count - 1].value /
   VAR_13->mclk_table.dpm_levels[VAR_13->mclk_table.count - 1].value;

 if (VAR_13->mclk_table.count == 1) {
  VAR_11 = 70;
  VAR_14 = VAR_13->mclk_table.dpm_levels[VAR_13->mclk_table.count - 1].value;
  *VAR_9 = VAR_13->mclk_table.count - 1;
 } else {
  VAR_14 = VAR_13->mclk_table.dpm_levels[VAR_13->mclk_table.count - 2].value;
  *VAR_9 = VAR_13->mclk_table.count - 2;
 }

 VAR_15 = VAR_14 * VAR_11 / 100;

 if (VAR_6->pp_table_version == VAR_4) {
  for (VAR_16 = VAR_6->dyn_state.vddc_dependency_on_sclk->count-1;
   VAR_16 >= 0; VAR_16--) {
   if (VAR_15 >= VAR_6->dyn_state.vddc_dependency_on_sclk->entries[VAR_16].clk) {
    VAR_15 = VAR_6->dyn_state.vddc_dependency_on_sclk->entries[VAR_16].clk;
    *VAR_8 = VAR_16;
    break;
   }
  }
  if (VAR_16 < 0 || VAR_7 == VAR_1) {
   *VAR_8 = 0;
   VAR_15 = VAR_6->dyn_state.vddc_dependency_on_sclk->entries[0].clk;
  }

  if (VAR_7 == VAR_2)
   *VAR_8 = VAR_6->dyn_state.vddc_dependency_on_sclk->count-1;
 } else if (VAR_6->pp_table_version == VAR_5) {
  struct phm_ppt_v1_information *VAR_17 =
    (struct phm_ppt_v1_information *)(VAR_6->pptable);

  for (VAR_16 = VAR_17->vdd_dep_on_sclk->count-1; VAR_16 >= 0; VAR_16--) {
   if (VAR_15 >= VAR_17->vdd_dep_on_sclk->entries[VAR_16].clk) {
    VAR_15 = VAR_17->vdd_dep_on_sclk->entries[VAR_16].clk;
    *VAR_8 = VAR_16;
    break;
   }
  }
  if (VAR_16 < 0 || VAR_7 == VAR_1) {
   *VAR_8 = 0;
   VAR_15 = VAR_17->vdd_dep_on_sclk->entries[0].clk;
  }

  if (VAR_7 == VAR_2)
   *VAR_8 = VAR_17->vdd_dep_on_sclk->count - 1;
 }

 if (VAR_7 == VAR_0)
  *VAR_9 = 0;
 else if (VAR_7 == VAR_2)
  *VAR_9 = VAR_13->mclk_table.count - 1;

 *VAR_10 = VAR_12->dpm_table.pcie_speed_table.count - 1;
 VAR_6->pstate_sclk = VAR_15;
 VAR_6->pstate_mclk = VAR_14;

 return 0;
}
