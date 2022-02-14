
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


typedef size_t uint8_t ;
struct vega10_single_dpm_table {size_t count; TYPE_5__* dpm_levels; } ;
struct vega10_odn_vddc_lookup_table {size_t count; TYPE_3__* entries; } ;
struct vega10_odn_clock_voltage_dependency_table {size_t count; TYPE_7__* entries; } ;
struct TYPE_11__ {struct vega10_single_dpm_table soc_table; } ;
struct TYPE_9__ {struct vega10_odn_clock_voltage_dependency_table vdd_dep_on_mclk; struct vega10_odn_clock_voltage_dependency_table vdd_dep_on_sclk; struct vega10_odn_vddc_lookup_table vddc_lookup_table; struct vega10_odn_clock_voltage_dependency_table vdd_dep_on_socclk; } ;
struct TYPE_8__ {struct vega10_single_dpm_table mem_table; } ;
struct vega10_hwmgr {int need_update_dpm_table; TYPE_4__ dpm_table; TYPE_2__ odn_dpm_table; TYPE_1__ golden_dpm_table; } ;
struct pp_hwmgr {struct phm_ppt_v2_information* pptable; struct vega10_hwmgr* backend; } ;
struct phm_ppt_v2_information {struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_socclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {size_t count; TYPE_6__* entries; } ;
typedef enum PP_OD_DPM_TABLE_COMMAND { ____Placeholder_PP_OD_DPM_TABLE_COMMAND } PP_OD_DPM_TABLE_COMMAND ;
struct TYPE_14__ {scalar_t__ vddc; size_t vddInd; scalar_t__ clk; } ;
struct TYPE_13__ {size_t vddInd; scalar_t__ clk; scalar_t__ vddc; } ;
struct TYPE_12__ {scalar_t__ value; } ;
struct TYPE_10__ {scalar_t__ us_vdd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pp_hwmgr*) ;

__attribute__((used)) static void FUNC_1(struct pp_hwmgr *VAR_4,
      enum PP_OD_DPM_TABLE_COMMAND VAR_5)
{
 struct vega10_hwmgr *VAR_6 = VAR_4->backend;
 struct phm_ppt_v2_information *VAR_7 = VAR_4->pptable;
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_8 = VAR_7->vdd_dep_on_socclk;
 struct vega10_single_dpm_table *VAR_9 = &VAR_6->golden_dpm_table.mem_table;

 struct vega10_odn_clock_voltage_dependency_table *VAR_10 =
       &VAR_6->odn_dpm_table.vdd_dep_on_socclk;
 struct vega10_odn_vddc_lookup_table *VAR_11 = &VAR_6->odn_dpm_table.vddc_lookup_table;

 struct vega10_odn_clock_voltage_dependency_table *VAR_12;
 uint8_t VAR_13, VAR_14;

 if (VAR_5 == VAR_3) {
  VAR_12 = &VAR_6->odn_dpm_table.vdd_dep_on_sclk;
  for (VAR_13 = 0; VAR_13 < VAR_12->count; VAR_13++)
   VAR_11->entries[VAR_13].us_vdd = VAR_12->entries[VAR_13].vddc;
 } else if (VAR_5 == VAR_2) {
  VAR_12 = &VAR_6->odn_dpm_table.vdd_dep_on_mclk;
  for (VAR_13 = 0; VAR_13 < VAR_9->count; VAR_13++) {
   for (VAR_14 = 0; VAR_14 < VAR_11->count; VAR_14++) {
    if (VAR_11->entries[VAR_14].us_vdd >
     VAR_12->entries[VAR_13].vddc)
     break;
   }
   if (VAR_14 == VAR_11->count) {
    VAR_14 = VAR_11->count - 1;
    VAR_11->entries[VAR_14].us_vdd =
     VAR_12->entries[VAR_13].vddc;
    VAR_6->need_update_dpm_table |= VAR_0;
   }
   VAR_12->entries[VAR_13].vddInd = VAR_14;
  }
  VAR_9 = &VAR_6->dpm_table.soc_table;
  for (VAR_13 = 0; VAR_13 < VAR_8->count; VAR_13++) {
   if (VAR_8->entries[VAR_13].vddInd == VAR_12->entries[VAR_12->count-1].vddInd &&
     VAR_8->entries[VAR_13].clk < VAR_12->entries[VAR_12->count-1].clk) {
    VAR_6->need_update_dpm_table |= VAR_1;
    for (; (VAR_13 < VAR_8->count) &&
           (VAR_8->entries[VAR_13].clk < VAR_12->entries[VAR_12->count - 1].clk); VAR_13++) {
     VAR_10->entries[VAR_13].clk = VAR_12->entries[VAR_12->count-1].clk;
     VAR_9->dpm_levels[VAR_13].value = VAR_10->entries[VAR_13].clk;
    }
    break;
   } else {
    VAR_9->dpm_levels[VAR_13].value = VAR_8->entries[VAR_13].clk;
    VAR_10->entries[VAR_13].vddc = VAR_8->entries[VAR_13].vddc;
    VAR_10->entries[VAR_13].vddInd = VAR_8->entries[VAR_13].vddInd;
    VAR_10->entries[VAR_13].clk = VAR_8->entries[VAR_13].clk;
   }
  }
  if (VAR_10->entries[VAR_10->count - 1].clk <
     VAR_12->entries[VAR_12->count - 1].clk) {
   VAR_6->need_update_dpm_table |= VAR_1;
   VAR_10->entries[VAR_10->count - 1].clk =
    VAR_12->entries[VAR_12->count - 1].clk;
   VAR_9->dpm_levels[VAR_10->count - 1].value =
    VAR_12->entries[VAR_12->count - 1].clk;
  }
  if (VAR_10->entries[VAR_10->count - 1].vddInd <
     VAR_12->entries[VAR_12->count - 1].vddInd) {
   VAR_6->need_update_dpm_table |= VAR_1;
   VAR_10->entries[VAR_10->count - 1].vddInd =
    VAR_12->entries[VAR_12->count - 1].vddInd;
  }
 }
 FUNC_0(VAR_4);
}
