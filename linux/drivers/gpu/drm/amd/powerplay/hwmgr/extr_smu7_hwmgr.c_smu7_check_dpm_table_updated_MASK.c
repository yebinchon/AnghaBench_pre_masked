
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef size_t uint32_t ;
struct TYPE_17__ {TYPE_5__* entries; } ;
struct TYPE_13__ {TYPE_1__* entries; } ;
struct smu7_odn_dpm_table {int vdd_dependency_on_sclk; int vdd_dependency_on_mclk; TYPE_6__ odn_memory_clock_dpm_levels; TYPE_2__ odn_core_clock_dpm_levels; } ;
struct TYPE_19__ {size_t count; TYPE_7__* dpm_levels; } ;
struct TYPE_15__ {size_t count; TYPE_3__* dpm_levels; } ;
struct TYPE_20__ {TYPE_8__ mclk_table; TYPE_4__ sclk_table; } ;
struct smu7_hwmgr {int need_update_smu7_dpm_table; TYPE_9__ dpm_table; struct smu7_odn_dpm_table odn_dpm_table; } ;
struct pp_hwmgr {scalar_t__ pptable; scalar_t__ backend; } ;
struct phm_ppt_v1_information {struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_sclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_mclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {size_t count; TYPE_10__* entries; } ;
struct TYPE_18__ {scalar_t__ value; } ;
struct TYPE_16__ {scalar_t__ clock; } ;
struct TYPE_14__ {scalar_t__ value; } ;
struct TYPE_12__ {scalar_t__ clock; } ;
struct TYPE_11__ {scalar_t__ vddc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct pp_hwmgr *VAR_3)
{
 struct smu7_hwmgr *VAR_4 = (struct smu7_hwmgr *)(VAR_3->backend);
 struct smu7_odn_dpm_table *VAR_5 = &(VAR_4->odn_dpm_table);
 struct phm_ppt_v1_information *VAR_6 =
   (struct phm_ppt_v1_information *)(VAR_3->pptable);
 uint32_t VAR_7;

 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_8;
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_9;

 if (VAR_6 == ((void*)0))
  return;

 for (VAR_7 = 0; VAR_7 < VAR_4->dpm_table.sclk_table.count; VAR_7++) {
  if (VAR_5->odn_core_clock_dpm_levels.entries[VAR_7].clock !=
     VAR_4->dpm_table.sclk_table.dpm_levels[VAR_7].value) {
   VAR_4->need_update_smu7_dpm_table |= VAR_1;
   break;
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->dpm_table.mclk_table.count; VAR_7++) {
  if (VAR_5->odn_memory_clock_dpm_levels.entries[VAR_7].clock !=
     VAR_4->dpm_table.mclk_table.dpm_levels[VAR_7].value) {
   VAR_4->need_update_smu7_dpm_table |= VAR_0;
   break;
  }
 }

 VAR_8 = VAR_6->vdd_dep_on_mclk;
 VAR_9 = (struct phm_ppt_v1_clock_voltage_dependency_table *)&(VAR_5->vdd_dependency_on_mclk);

 for (VAR_7 = 0; VAR_7 < VAR_8->count; VAR_7++) {
  if (VAR_8->entries[VAR_7].vddc != VAR_9->entries[VAR_7].vddc) {
   VAR_4->need_update_smu7_dpm_table |= VAR_2 | VAR_0;
   return;
  }
 }

 VAR_8 = VAR_6->vdd_dep_on_sclk;
 VAR_9 = (struct phm_ppt_v1_clock_voltage_dependency_table *)&(VAR_5->vdd_dependency_on_sclk);
 for (VAR_7 = 0; VAR_7 < VAR_8->count; VAR_7++) {
  if (VAR_8->entries[VAR_7].vddc != VAR_9->entries[VAR_7].vddc) {
   VAR_4->need_update_smu7_dpm_table |= VAR_2 | VAR_1;
   return;
  }
 }
 if (VAR_4->need_update_smu7_dpm_table & VAR_2) {
  VAR_4->need_update_smu7_dpm_table &= ~VAR_2;
  VAR_4->need_update_smu7_dpm_table |= VAR_1 | VAR_0;
 }
}
