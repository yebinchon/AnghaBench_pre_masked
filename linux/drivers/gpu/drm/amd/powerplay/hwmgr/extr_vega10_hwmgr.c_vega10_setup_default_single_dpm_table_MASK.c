
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vega10_single_dpm_table {int count; TYPE_2__* dpm_levels; } ;
struct pp_hwmgr {int dummy; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {int count; TYPE_1__* entries; } ;
struct TYPE_4__ {scalar_t__ value; int enabled; } ;
struct TYPE_3__ {scalar_t__ clk; } ;



__attribute__((used)) static void FUNC_0(struct pp_hwmgr *VAR_0,
  struct vega10_single_dpm_table *VAR_1,
  struct phm_ppt_v1_clock_voltage_dependency_table *VAR_2)
{
 int VAR_3;

 VAR_1->count = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->count; VAR_3++) {
  if (VAR_3 == 0 || VAR_1->dpm_levels[VAR_1->count - 1].value <=
    VAR_2->entries[VAR_3].clk) {
   VAR_1->dpm_levels[VAR_1->count].value =
     VAR_2->entries[VAR_3].clk;
   VAR_1->dpm_levels[VAR_1->count].enabled = 1;
   VAR_1->count++;
  }
 }
}
