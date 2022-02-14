
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct pp_hwmgr {scalar_t__ pptable; } ;
struct pp_clock_levels_with_latency {size_t num_levels; TYPE_1__* data; } ;
struct phm_ppt_v2_information {struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_sclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {size_t count; TYPE_2__* entries; } ;
struct TYPE_4__ {int clk; } ;
struct TYPE_3__ {int clocks_in_khz; } ;



__attribute__((used)) static void FUNC_0(struct pp_hwmgr *VAR_0,
  struct pp_clock_levels_with_latency *VAR_1)
{
 struct phm_ppt_v2_information *VAR_2 =
   (struct phm_ppt_v2_information *)VAR_0->pptable;
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_3 =
   VAR_2->vdd_dep_on_sclk;
 uint32_t VAR_4;

 VAR_1->num_levels = 0;
 for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++) {
  if (VAR_3->entries[VAR_4].clk) {
   VAR_1->data[VAR_1->num_levels].clocks_in_khz =
     VAR_3->entries[VAR_4].clk * 10;
   VAR_1->num_levels++;
  }
 }

}
