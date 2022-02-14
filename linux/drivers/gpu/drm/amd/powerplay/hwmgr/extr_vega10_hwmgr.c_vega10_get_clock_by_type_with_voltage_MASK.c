
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct pp_hwmgr {scalar_t__ pptable; } ;
struct pp_clock_levels_with_voltage {int num_levels; TYPE_1__* data; } ;
struct phm_ppt_v2_information {TYPE_3__* vddc_lookup_table; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_phyclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_pixclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_dispclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_dcefclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_mclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {size_t count; TYPE_4__* entries; } ;
typedef enum amd_pp_clock_type { ____Placeholder_amd_pp_clock_type } amd_pp_clock_type ;
struct TYPE_8__ {int clk; size_t vddInd; } ;
struct TYPE_7__ {TYPE_2__* entries; } ;
struct TYPE_6__ {scalar_t__ us_vdd; } ;
struct TYPE_5__ {int clocks_in_khz; size_t voltage_in_mv; } ;
__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0,
  enum amd_pp_clock_type VAR_1,
  struct pp_clock_levels_with_voltage *VAR_2)
{
 struct phm_ppt_v2_information *VAR_3 =
   (struct phm_ppt_v2_information *)VAR_0->pptable;
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_4;
 uint32_t VAR_5;

 switch (VAR_1) {
 case 130:
  VAR_4 = VAR_3->vdd_dep_on_mclk;
  break;
 case 132:
  VAR_4 = VAR_3->vdd_dep_on_dcefclk;
  break;
 case 131:
  VAR_4 = VAR_3->vdd_dep_on_dispclk;
  break;
 case 128:
  VAR_4 = VAR_3->vdd_dep_on_pixclk;
  break;
 case 129:
  VAR_4 = VAR_3->vdd_dep_on_phyclk;
  break;
 default:
  return -1;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->count; VAR_5++) {
  VAR_2->data[VAR_5].clocks_in_khz = VAR_4->entries[VAR_5].clk * 10;
  VAR_2->data[VAR_5].voltage_in_mv = (uint32_t)(VAR_3->vddc_lookup_table->
    entries[VAR_4->entries[VAR_5].vddInd].us_vdd);
  VAR_2->num_levels++;
 }

 if (VAR_5 < VAR_4->count)
  return -1;

 return 0;
}
