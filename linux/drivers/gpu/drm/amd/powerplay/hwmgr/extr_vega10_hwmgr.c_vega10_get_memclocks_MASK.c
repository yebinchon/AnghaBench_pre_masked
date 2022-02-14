
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_8__ {size_t count; TYPE_3__* entries; } ;
struct vega10_hwmgr {TYPE_4__ mclk_latency_table; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; scalar_t__ pptable; } ;
struct pp_clock_levels_with_latency {size_t num_levels; TYPE_2__* data; } ;
struct phm_ppt_v2_information {struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_mclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {size_t count; TYPE_1__* entries; } ;
struct TYPE_7__ {int frequency; int latency; } ;
struct TYPE_6__ {int clocks_in_khz; int latency_in_us; } ;
struct TYPE_5__ {int clk; } ;



__attribute__((used)) static void FUNC_0(struct pp_hwmgr *VAR_0,
  struct pp_clock_levels_with_latency *VAR_1)
{
 struct phm_ppt_v2_information *VAR_2 =
   (struct phm_ppt_v2_information *)VAR_0->pptable;
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_3 =
   VAR_2->vdd_dep_on_mclk;
 struct vega10_hwmgr *VAR_4 = VAR_0->backend;
 uint32_t VAR_5 = 0;
 uint32_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->count; VAR_6++) {
  if (VAR_3->entries[VAR_6].clk) {

   VAR_1->data[VAR_5].clocks_in_khz =
      VAR_3->entries[VAR_6].clk * 10;
   VAR_4->mclk_latency_table.entries[VAR_5].frequency =
       VAR_3->entries[VAR_6].clk;
   VAR_1->data[VAR_5].latency_in_us =
    VAR_4->mclk_latency_table.entries[VAR_5].latency = 25;
   VAR_5++;
  }
 }
 VAR_1->num_levels = VAR_4->mclk_latency_table.count = VAR_5;
}
