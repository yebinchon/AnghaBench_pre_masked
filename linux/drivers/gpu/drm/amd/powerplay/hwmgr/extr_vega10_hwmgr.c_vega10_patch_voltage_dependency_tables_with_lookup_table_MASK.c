
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


typedef size_t uint8_t ;
struct pp_hwmgr {scalar_t__ pptable; } ;
struct phm_ppt_v2_information {TYPE_8__* vddmem_lookup_table; TYPE_5__* vddci_lookup_table; TYPE_3__* vddc_lookup_table; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_phyclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_dispclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_pixclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_dcefclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_sclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_socclk; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_mclk; struct phm_ppt_v1_mm_clock_voltage_dependency_table* mm_dep_table; } ;
struct phm_ppt_v1_mm_clock_voltage_dependency_table {size_t count; TYPE_1__* entries; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {size_t count; TYPE_6__* entries; } ;
struct TYPE_16__ {TYPE_7__* entries; } ;
struct TYPE_15__ {int us_vdd; } ;
struct TYPE_14__ {size_t vddInd; size_t vddciInd; size_t mvddInd; int mvdd; int vddci; int vddc; } ;
struct TYPE_13__ {TYPE_4__* entries; } ;
struct TYPE_12__ {int us_vdd; } ;
struct TYPE_11__ {TYPE_2__* entries; } ;
struct TYPE_10__ {int us_vdd; } ;
struct TYPE_9__ {size_t vddcInd; int vddc; } ;



__attribute__((used)) static int FUNC_0(
  struct pp_hwmgr *VAR_0)
{
 uint8_t VAR_1, VAR_2;
 unsigned VAR_3;
 struct phm_ppt_v2_information *VAR_4 =
   (struct phm_ppt_v2_information *)(VAR_0->pptable);
 struct phm_ppt_v1_mm_clock_voltage_dependency_table *VAR_5 =
   VAR_4->mm_dep_table;
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_6 =
   VAR_4->vdd_dep_on_mclk;

 for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
  struct phm_ppt_v1_clock_voltage_dependency_table *VAR_7;
  switch (VAR_3) {
   case 0: VAR_7 = VAR_4->vdd_dep_on_socclk; break;
   case 1: VAR_7 = VAR_4->vdd_dep_on_sclk; break;
   case 2: VAR_7 = VAR_4->vdd_dep_on_dcefclk; break;
   case 3: VAR_7 = VAR_4->vdd_dep_on_pixclk; break;
   case 4: VAR_7 = VAR_4->vdd_dep_on_dispclk; break;
   case 5: VAR_7 = VAR_4->vdd_dep_on_phyclk; break;
  }

  for (VAR_1 = 0; VAR_1 < VAR_7->count; VAR_1++) {
   VAR_2 = VAR_7->entries[VAR_1].vddInd;
   VAR_7->entries[VAR_1].vddc =
     VAR_4->vddc_lookup_table->entries[VAR_2].us_vdd;
  }
 }

 for (VAR_1 = 0; VAR_1 < VAR_5->count; ++VAR_1) {
  VAR_2 = VAR_5->entries[VAR_1].vddcInd;
  VAR_5->entries[VAR_1].vddc =
   VAR_4->vddc_lookup_table->entries[VAR_2].us_vdd;
 }

 for (VAR_1 = 0; VAR_1 < VAR_6->count; ++VAR_1) {
  VAR_2 = VAR_6->entries[VAR_1].vddInd;
  VAR_6->entries[VAR_1].vddc =
    VAR_4->vddc_lookup_table->entries[VAR_2].us_vdd;
  VAR_2 = VAR_6->entries[VAR_1].vddciInd;
  VAR_6->entries[VAR_1].vddci =
    VAR_4->vddci_lookup_table->entries[VAR_2].us_vdd;
  VAR_2 = VAR_6->entries[VAR_1].mvddInd;
  VAR_6->entries[VAR_1].mvdd =
    VAR_4->vddmem_lookup_table->entries[VAR_2].us_vdd;
 }


 return 0;

}
