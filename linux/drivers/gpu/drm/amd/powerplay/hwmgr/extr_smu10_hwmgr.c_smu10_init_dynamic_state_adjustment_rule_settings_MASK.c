
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct phm_clock_voltage_dependency_table* vddc_dep_on_dal_pwrl; } ;
struct pp_hwmgr {TYPE_2__ dyn_state; } ;
struct phm_clock_voltage_dependency_table {int count; TYPE_1__* entries; } ;
struct TYPE_3__ {int v; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct phm_clock_voltage_dependency_table* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct phm_clock_voltage_dependency_table*,int ,int) ;

__attribute__((used)) static int FUNC_3(
       struct pp_hwmgr *VAR_11)
{
 struct phm_clock_voltage_dependency_table *VAR_12;

 VAR_12 = FUNC_0(FUNC_2(VAR_12, VAR_10, 7),
    VAR_1);

 if (((void*)0) == VAR_12) {
  FUNC_1("Can not allocate memory!\n");
  return -VAR_0;
 }

 VAR_12->count = 8;
 VAR_12->entries[0].clk = VAR_2;
 VAR_12->entries[0].v = 0;
 VAR_12->entries[1].clk = VAR_3;
 VAR_12->entries[1].v = 1;
 VAR_12->entries[2].clk = VAR_4;
 VAR_12->entries[2].v = 2;
 VAR_12->entries[3].clk = VAR_5;
 VAR_12->entries[3].v = 3;
 VAR_12->entries[4].clk = VAR_6;
 VAR_12->entries[4].v = 4;
 VAR_12->entries[5].clk = VAR_7;
 VAR_12->entries[5].v = 5;
 VAR_12->entries[6].clk = VAR_8;
 VAR_12->entries[6].v = 6;
 VAR_12->entries[7].clk = VAR_9;
 VAR_12->entries[7].v = 7;
 VAR_11->dyn_state.vddc_dep_on_dal_pwrl = VAR_12;

 return 0;
}
