
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
struct smu7_hwmgr {scalar_t__ vdd_gfx_control; } ;
struct pp_hwmgr {scalar_t__ pptable; scalar_t__ backend; } ;
struct phm_ppt_v1_mm_clock_voltage_dependency_table {size_t count; TYPE_4__* entries; } ;
struct phm_ppt_v1_information {TYPE_6__* vddc_lookup_table; TYPE_2__* vddgfx_lookup_table; struct phm_ppt_v1_mm_clock_voltage_dependency_table* mm_dep_table; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_mclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_sclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {size_t count; TYPE_3__* entries; } ;
struct TYPE_12__ {TYPE_5__* entries; } ;
struct TYPE_11__ {int us_vdd; } ;
struct TYPE_10__ {size_t vddcInd; int vddc; } ;
struct TYPE_9__ {size_t vddInd; int vddc; int vddgfx; } ;
struct TYPE_8__ {TYPE_1__* entries; } ;
struct TYPE_7__ {int us_vdd; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(
  struct pp_hwmgr *VAR_1)
{
 uint8_t VAR_2;
 uint8_t VAR_3;
 struct smu7_hwmgr *VAR_4 = (struct smu7_hwmgr *)(VAR_1->backend);
 struct phm_ppt_v1_information *VAR_5 =
   (struct phm_ppt_v1_information *)(VAR_1->pptable);

 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_6 =
   VAR_5->vdd_dep_on_sclk;
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_7 =
   VAR_5->vdd_dep_on_mclk;
 struct phm_ppt_v1_mm_clock_voltage_dependency_table *VAR_8 =
   VAR_5->mm_dep_table;

 if (VAR_4->vdd_gfx_control == VAR_0) {
  for (VAR_2 = 0; VAR_2 < VAR_6->count; ++VAR_2) {
   VAR_3 = VAR_6->entries[VAR_2].vddInd;
   VAR_6->entries[VAR_2].vddgfx =
    VAR_5->vddgfx_lookup_table->entries[VAR_3].us_vdd;
  }
 } else {
  for (VAR_2 = 0; VAR_2 < VAR_6->count; ++VAR_2) {
   VAR_3 = VAR_6->entries[VAR_2].vddInd;
   VAR_6->entries[VAR_2].vddc =
    VAR_5->vddc_lookup_table->entries[VAR_3].us_vdd;
  }
 }

 for (VAR_2 = 0; VAR_2 < VAR_7->count; ++VAR_2) {
  VAR_3 = VAR_7->entries[VAR_2].vddInd;
  VAR_7->entries[VAR_2].vddc =
   VAR_5->vddc_lookup_table->entries[VAR_3].us_vdd;
 }

 for (VAR_2 = 0; VAR_2 < VAR_8->count; ++VAR_2) {
  VAR_3 = VAR_8->entries[VAR_2].vddcInd;
  VAR_8->entries[VAR_2].vddc =
   VAR_5->vddc_lookup_table->entries[VAR_3].us_vdd;
 }

 return 0;

}
