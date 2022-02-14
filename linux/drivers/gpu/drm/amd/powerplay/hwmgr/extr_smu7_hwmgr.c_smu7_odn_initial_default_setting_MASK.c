
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_12__ {size_t num_of_pl; struct phm_odn_performance_level* entries; } ;
struct TYPE_9__ {size_t num_of_pl; struct phm_odn_performance_level* entries; } ;
struct smu7_odn_dpm_table {int vdd_dependency_on_mclk; TYPE_4__ odn_memory_clock_dpm_levels; int vdd_dependency_on_sclk; TYPE_1__ odn_core_clock_dpm_levels; } ;
struct TYPE_14__ {size_t count; TYPE_5__* dpm_levels; } ;
struct TYPE_11__ {size_t count; TYPE_2__* dpm_levels; } ;
struct TYPE_15__ {TYPE_6__ mclk_table; TYPE_3__ sclk_table; } ;
struct smu7_hwmgr {TYPE_7__ golden_dpm_table; struct smu7_odn_dpm_table odn_dpm_table; } ;
struct pp_hwmgr {scalar_t__ pptable; scalar_t__ backend; } ;
struct phm_ppt_v1_information {struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_mclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_sclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {TYPE_8__* entries; } ;
struct phm_odn_performance_level {int enabled; int vddc; int clock; } ;
struct TYPE_16__ {int vddc; } ;
struct TYPE_13__ {int value; } ;
struct TYPE_10__ {int value; } ;


 int VAR_0 ;
 int FUNC_0 (struct phm_ppt_v1_clock_voltage_dependency_table*,struct phm_ppt_v1_clock_voltage_dependency_table*) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_1)
{
 struct smu7_hwmgr *VAR_2 = (struct smu7_hwmgr *)(VAR_1->backend);
 struct smu7_odn_dpm_table *VAR_3 = &(VAR_2->odn_dpm_table);
 struct phm_ppt_v1_information *VAR_4 =
   (struct phm_ppt_v1_information *)(VAR_1->pptable);
 uint32_t VAR_5;

 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_6;
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_7;
 struct phm_odn_performance_level *VAR_8;

 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_6 = VAR_4->vdd_dep_on_sclk;
 VAR_7 = VAR_4->vdd_dep_on_mclk;

 VAR_3->odn_core_clock_dpm_levels.num_of_pl =
      VAR_2->golden_dpm_table.sclk_table.count;
 VAR_8 = VAR_3->odn_core_clock_dpm_levels.entries;
 for (VAR_5=0; VAR_5<VAR_2->golden_dpm_table.sclk_table.count; VAR_5++) {
  VAR_8[VAR_5].clock = VAR_2->golden_dpm_table.sclk_table.dpm_levels[VAR_5].value;
  VAR_8[VAR_5].enabled = 1;
  VAR_8[VAR_5].vddc = VAR_6->entries[VAR_5].vddc;
 }

 FUNC_0(VAR_6,
  (struct phm_ppt_v1_clock_voltage_dependency_table *)&(VAR_3->vdd_dependency_on_sclk));

 VAR_3->odn_memory_clock_dpm_levels.num_of_pl =
      VAR_2->golden_dpm_table.mclk_table.count;
 VAR_8 = VAR_3->odn_memory_clock_dpm_levels.entries;
 for (VAR_5=0; VAR_5<VAR_2->golden_dpm_table.mclk_table.count; VAR_5++) {
  VAR_8[VAR_5].clock = VAR_2->golden_dpm_table.mclk_table.dpm_levels[VAR_5].value;
  VAR_8[VAR_5].enabled = 1;
  VAR_8[VAR_5].vddc = VAR_7->entries[VAR_5].vddc;
 }

 FUNC_0(VAR_7,
  (struct phm_ppt_v1_clock_voltage_dependency_table *)&(VAR_3->vdd_dependency_on_mclk));

 return 0;
}
