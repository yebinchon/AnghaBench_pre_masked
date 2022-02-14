
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct phm_clock_voltage_dependency_table* vddc_dependency_on_mclk; } ;
struct pp_hwmgr {scalar_t__ pp_table_version; TYPE_2__ dyn_state; scalar_t__ pptable; } ;
struct phm_ppt_v1_information {struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_mclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {int count; TYPE_1__* entries; } ;
struct phm_clock_voltage_dependency_table {int count; TYPE_3__* entries; } ;
struct amd_pp_clocks {int* clock; int count; int * latency; } ;
struct TYPE_6__ {int clk; } ;
struct TYPE_4__ {int clk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pp_hwmgr*,int) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_3, struct amd_pp_clocks *VAR_4)
{
 struct phm_ppt_v1_information *VAR_5 =
   (struct phm_ppt_v1_information *)VAR_3->pptable;
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_6;
 int VAR_7;
 struct phm_clock_voltage_dependency_table *VAR_8;

 if (VAR_3->pp_table_version == VAR_2) {
  if (VAR_5 == ((void*)0))
   return -VAR_0;
  VAR_6 = VAR_5->vdd_dep_on_mclk;
  for (VAR_7 = 0; VAR_7 < VAR_6->count; VAR_7++) {
   VAR_4->clock[VAR_7] = VAR_6->entries[VAR_7].clk * 10;
   VAR_4->latency[VAR_7] = FUNC_0(VAR_3,
      VAR_6->entries[VAR_7].clk);
  }
  VAR_4->count = VAR_6->count;
 } else if (VAR_3->pp_table_version == VAR_1) {
  VAR_8 = VAR_3->dyn_state.vddc_dependency_on_mclk;
  for (VAR_7 = 0; VAR_7 < VAR_8->count; VAR_7++)
   VAR_4->clock[VAR_7] = VAR_8->entries[VAR_7].clk * 10;
  VAR_4->count = VAR_8->count;
 }
 return 0;
}
