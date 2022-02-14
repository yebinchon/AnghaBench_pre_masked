
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct vega10_single_dpm_table {size_t count; TYPE_3__* dpm_levels; } ;
struct TYPE_7__ {struct vega10_single_dpm_table dclk_table; struct vega10_single_dpm_table vclk_table; } ;
struct TYPE_10__ {int * UvdDpmVoltageIndex; int * DclkDid; int * VclkDid; } ;
struct TYPE_6__ {TYPE_5__ pp_table; } ;
struct vega10_hwmgr {TYPE_2__ dpm_table; TYPE_1__ smc_state_table; } ;
struct pp_hwmgr {scalar_t__ pptable; struct vega10_hwmgr* backend; } ;
struct phm_ppt_v2_information {struct phm_ppt_v1_mm_clock_voltage_dependency_table* mm_dep_table; } ;
struct phm_ppt_v1_mm_clock_voltage_dependency_table {size_t count; TYPE_4__* entries; } ;
struct TYPE_9__ {scalar_t__ vclk; scalar_t__ dclk; int vddcInd; } ;
struct TYPE_8__ {scalar_t__ value; } ;
typedef TYPE_5__ PPTable_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,scalar_t__,int *) ;
 int FUNC_1 (struct pp_hwmgr*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2)
{
 struct vega10_hwmgr *VAR_3 = VAR_2->backend;
 PPTable_t *VAR_4 = &(VAR_3->smc_state_table.pp_table);
 struct vega10_single_dpm_table *VAR_5 =
   &(VAR_3->dpm_table.vclk_table);
 struct vega10_single_dpm_table *VAR_6 =
   &(VAR_3->dpm_table.dclk_table);
 struct phm_ppt_v2_information *VAR_7 =
   (struct phm_ppt_v2_information *)(VAR_2->pptable);
 struct phm_ppt_v1_mm_clock_voltage_dependency_table *VAR_8 =
   VAR_7->mm_dep_table;
 int VAR_9 = -VAR_0;
 uint32_t VAR_10, VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_5->count; VAR_10++) {
  VAR_9 = FUNC_1(VAR_2,
    VAR_5->dpm_levels[VAR_10].value,
    &(VAR_4->VclkDid[VAR_10]));
  if (VAR_9)
   return VAR_9;
 }

 VAR_11 = VAR_10 - 1;
 while (VAR_10 < VAR_1) {
  VAR_9 = FUNC_1(VAR_2,
    VAR_5->dpm_levels[VAR_11].value,
    &(VAR_4->VclkDid[VAR_10]));
  if (VAR_9)
   return VAR_9;
  VAR_10++;
 }

 for (VAR_10 = 0; VAR_10 < VAR_6->count; VAR_10++) {
  VAR_9 = FUNC_0(VAR_2,
    VAR_6->dpm_levels[VAR_10].value,
    &(VAR_4->DclkDid[VAR_10]));
  if (VAR_9)
   return VAR_9;
 }

 VAR_11 = VAR_10 - 1;
 while (VAR_10 < VAR_1) {
  VAR_9 = FUNC_0(VAR_2,
    VAR_6->dpm_levels[VAR_11].value,
    &(VAR_4->DclkDid[VAR_10]));
  if (VAR_9)
   return VAR_9;
  VAR_10++;
 }

 for (VAR_10 = 0; VAR_10 < VAR_8->count; VAR_10++) {
  if (VAR_8->entries[VAR_10].vclk ==
    VAR_5->dpm_levels[VAR_10].value &&
   VAR_8->entries[VAR_10].dclk ==
    VAR_6->dpm_levels[VAR_10].value)
   VAR_4->UvdDpmVoltageIndex[VAR_10] =
     VAR_8->entries[VAR_10].vddcInd;
  else
   return -1;
 }

 VAR_11 = VAR_10 - 1;
 while (VAR_10 < VAR_1) {
  VAR_4->UvdDpmVoltageIndex[VAR_10] = VAR_8->entries[VAR_11].vddcInd;
  VAR_10++;
 }

 return 0;
}
