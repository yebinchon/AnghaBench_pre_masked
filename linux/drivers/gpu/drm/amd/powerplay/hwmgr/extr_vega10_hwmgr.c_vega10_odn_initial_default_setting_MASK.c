
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
struct vega10_odn_vddc_lookup_table {size_t count; TYPE_1__* entries; } ;
struct vega10_odn_dpm_table {int max_vddc; int min_vddc; int vdd_dep_on_socclk; int vdd_dep_on_mclk; int vdd_dep_on_sclk; struct vega10_odn_vddc_lookup_table vddc_lookup_table; } ;
struct vega10_hwmgr {struct vega10_odn_dpm_table odn_dpm_table; } ;
struct TYPE_8__ {scalar_t__ memoryClock; } ;
struct TYPE_9__ {TYPE_3__ overdriveLimit; } ;
struct pp_hwmgr {TYPE_4__ platform_descriptor; scalar_t__ pptable; struct vega10_hwmgr* backend; } ;
struct pp_atomfwctrl_avfs_parameters {int ulMaxVddc; int ulMinVddc; int member_0; } ;
struct phm_ppt_v2_information {struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_socclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_mclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_sclk; struct phm_ppt_v1_voltage_lookup_table* vddc_lookup_table; } ;
struct phm_ppt_v1_voltage_lookup_table {size_t count; TYPE_2__* entries; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {int count; TYPE_5__* entries; } ;
struct TYPE_10__ {int vddc; scalar_t__ clk; } ;
struct TYPE_7__ {int us_vdd; } ;
struct TYPE_6__ {int us_vdd; } ;


 int FUNC_0 (struct pp_hwmgr*,struct pp_atomfwctrl_avfs_parameters*) ;
 int FUNC_1 (struct phm_ppt_v1_clock_voltage_dependency_table*,struct phm_ppt_v1_clock_voltage_dependency_table*) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_0)
{
 struct vega10_hwmgr *VAR_1 = VAR_0->backend;
 struct phm_ppt_v2_information *VAR_2 =
   (struct phm_ppt_v2_information *)(VAR_0->pptable);
 struct vega10_odn_dpm_table *VAR_3 = &(VAR_1->odn_dpm_table);
 struct vega10_odn_vddc_lookup_table *VAR_4;
 struct phm_ppt_v1_voltage_lookup_table *VAR_5;
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_6[3];
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_7[3];
 struct pp_atomfwctrl_avfs_parameters VAR_8 = {0};
 uint32_t VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_0, &VAR_8);
 if (!VAR_10) {
  VAR_1->odn_dpm_table.max_vddc = VAR_8.ulMaxVddc;
  VAR_1->odn_dpm_table.min_vddc = VAR_8.ulMinVddc;
 }

 VAR_4 = &VAR_3->vddc_lookup_table;
 VAR_5 = VAR_2->vddc_lookup_table;

 for (VAR_9 = 0; VAR_9 < VAR_5->count; VAR_9++)
  VAR_4->entries[VAR_9].us_vdd = VAR_5->entries[VAR_9].us_vdd;

 VAR_4->count = VAR_5->count;

 VAR_6[0] = VAR_2->vdd_dep_on_sclk;
 VAR_6[1] = VAR_2->vdd_dep_on_mclk;
 VAR_6[2] = VAR_2->vdd_dep_on_socclk;
 VAR_7[0] = (struct phm_ppt_v1_clock_voltage_dependency_table *)&VAR_3->vdd_dep_on_sclk;
 VAR_7[1] = (struct phm_ppt_v1_clock_voltage_dependency_table *)&VAR_3->vdd_dep_on_mclk;
 VAR_7[2] = (struct phm_ppt_v1_clock_voltage_dependency_table *)&VAR_3->vdd_dep_on_socclk;

 for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
  FUNC_1(VAR_6[VAR_9], VAR_7[VAR_9]);

 if (VAR_3->max_vddc == 0 || VAR_3->max_vddc > 2000)
  VAR_3->max_vddc = VAR_6[0]->entries[VAR_6[0]->count - 1].vddc;
 if (VAR_3->min_vddc == 0 || VAR_3->min_vddc > 2000)
  VAR_3->min_vddc = VAR_6[0]->entries[0].vddc;

 VAR_9 = VAR_7[2]->count - 1;
 VAR_7[2]->entries[VAR_9].clk = VAR_0->platform_descriptor.overdriveLimit.memoryClock > VAR_7[2]->entries[VAR_9].clk ?
     VAR_0->platform_descriptor.overdriveLimit.memoryClock :
     VAR_7[2]->entries[VAR_9].clk;
 VAR_7[2]->entries[VAR_9].vddc = VAR_3->max_vddc > VAR_7[2]->entries[VAR_9].vddc ?
     VAR_3->max_vddc :
     VAR_7[2]->entries[VAR_9].vddc;

 return 0;
}
