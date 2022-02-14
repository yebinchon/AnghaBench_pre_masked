
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct vega10_odn_dpm_table {int vdd_dep_on_sclk; int vdd_dep_on_mclk; } ;
struct vega10_hwmgr {int need_update_dpm_table; struct vega10_odn_dpm_table odn_dpm_table; } ;
struct pp_hwmgr {struct phm_ppt_v2_information* pptable; struct vega10_hwmgr* backend; } ;
struct phm_ppt_v2_information {struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_sclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_mclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {size_t count; TYPE_1__* entries; } ;
struct TYPE_2__ {scalar_t__ vddc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct pp_hwmgr *VAR_3)
{
 struct vega10_hwmgr *VAR_4 = VAR_3->backend;
 struct vega10_odn_dpm_table *VAR_5 = &(VAR_4->odn_dpm_table);
 struct phm_ppt_v2_information *VAR_6 = VAR_3->pptable;
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_7;
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_8;
 uint32_t VAR_9;

 VAR_7 = VAR_6->vdd_dep_on_mclk;
 VAR_8 = (struct phm_ppt_v1_clock_voltage_dependency_table *)&(VAR_5->vdd_dep_on_mclk);

 for (VAR_9 = 0; VAR_9 < VAR_7->count; VAR_9++) {
  if (VAR_7->entries[VAR_9].vddc != VAR_8->entries[VAR_9].vddc) {
   VAR_4->need_update_dpm_table |= VAR_2 | VAR_0;
   return;
  }
 }

 VAR_7 = VAR_6->vdd_dep_on_sclk;
 VAR_8 = (struct phm_ppt_v1_clock_voltage_dependency_table *)&(VAR_5->vdd_dep_on_sclk);
 for (VAR_9 = 0; VAR_9 < VAR_7->count; VAR_9++) {
  if (VAR_7->entries[VAR_9].vddc != VAR_8->entries[VAR_9].vddc) {
   VAR_4->need_update_dpm_table |= VAR_2 | VAR_1;
   return;
  }
 }
}
