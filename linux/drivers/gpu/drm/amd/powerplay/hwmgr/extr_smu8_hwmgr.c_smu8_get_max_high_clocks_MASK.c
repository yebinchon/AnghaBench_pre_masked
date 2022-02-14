
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phm_clock_and_voltage_limits {int mclk; } ;
struct TYPE_3__ {struct phm_clock_and_voltage_limits max_clock_voltage_on_ac; struct phm_clock_voltage_dependency_table* vddc_dependency_on_sclk; } ;
struct pp_hwmgr {TYPE_1__ dyn_state; } ;
struct phm_clock_voltage_dependency_table {unsigned long count; TYPE_2__* entries; } ;
struct amd_pp_simple_clock_info {int memory_max_clock; int engine_max_clock; } ;
struct TYPE_4__ {int clk; } ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_1, struct amd_pp_simple_clock_info *VAR_2)
{
 struct phm_clock_voltage_dependency_table *VAR_3 =
     VAR_1->dyn_state.vddc_dependency_on_sclk;
 unsigned long VAR_4;
 const struct phm_clock_and_voltage_limits *VAR_5 =
   &VAR_1->dyn_state.max_clock_voltage_on_ac;

 if ((((void*)0) == VAR_3) || (VAR_3->count <= 0) || (VAR_2 == ((void*)0)))
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1) - 1;

 if (VAR_4 < VAR_3->count)
  VAR_2->engine_max_clock = VAR_3->entries[VAR_4].clk;
 else
  VAR_2->engine_max_clock = VAR_3->entries[VAR_3->count - 1].clk;

 VAR_2->memory_max_clock = VAR_5->mclk;

 return 0;
}
