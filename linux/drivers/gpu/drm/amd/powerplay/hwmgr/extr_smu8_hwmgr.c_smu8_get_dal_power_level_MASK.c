
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct phm_clock_and_voltage_limits {scalar_t__ vddc; int mclk; int sclk; } ;
struct TYPE_4__ {struct phm_clock_and_voltage_limits max_clock_voltage_on_ac; struct phm_clock_voltage_dependency_table* vddc_dep_on_dal_pwrl; } ;
struct pp_hwmgr {TYPE_2__ dyn_state; } ;
struct phm_clock_voltage_dependency_table {size_t count; TYPE_1__* entries; } ;
struct amd_pp_simple_clock_info {int level; int memory_max_clock; int engine_max_clock; } ;
struct TYPE_3__ {scalar_t__ v; int clk; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_1,
  struct amd_pp_simple_clock_info *VAR_2)
{
 uint32_t VAR_3;
 const struct phm_clock_voltage_dependency_table *VAR_4 =
   VAR_1->dyn_state.vddc_dep_on_dal_pwrl;
 const struct phm_clock_and_voltage_limits *VAR_5 =
   &VAR_1->dyn_state.max_clock_voltage_on_ac;

 VAR_2->engine_max_clock = VAR_5->sclk;
 VAR_2->memory_max_clock = VAR_5->mclk;

 for (VAR_3 = VAR_4->count - 1; VAR_3 > 0; VAR_3--) {
  if (VAR_5->vddc >= VAR_4->entries[VAR_3].v) {
   VAR_2->level = VAR_4->entries[VAR_3].clk;
   return 0;
  }
 }
 return -VAR_0;
}
