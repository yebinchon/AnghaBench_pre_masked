
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {struct phm_clock_voltage_dependency_table* vddc_dep_on_dal_pwrl; } ;
struct pp_hwmgr {TYPE_2__ dyn_state; scalar_t__ pptable; } ;
struct phm_ppt_v1_information {struct phm_clock_voltage_dependency_table* vddc_dep_on_dal_pwrl; } ;
struct phm_clock_voltage_dependency_table {int count; TYPE_1__* entries; } ;
struct phm_clock_voltage_dependency_record {int dummy; } ;
struct TYPE_3__ {int v; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct phm_clock_voltage_dependency_table* FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct pp_hwmgr *VAR_6)
{
 uint32_t VAR_7;
 struct phm_clock_voltage_dependency_table *VAR_8;
 struct phm_ppt_v1_information *VAR_9 = (struct phm_ppt_v1_information *)(VAR_6->pptable);


 VAR_7 = sizeof(uint32_t) + 4 * sizeof(struct phm_clock_voltage_dependency_record);
 VAR_8 = FUNC_0(VAR_7, VAR_1);

 if (((void*)0) == VAR_8) {
  FUNC_1("Can not allocate space for vddc_dep_on_dal_pwrl! \n");
  return -VAR_0;
 } else {
  VAR_8->count = 4;
  VAR_8->entries[0].clk = VAR_5;
  VAR_8->entries[0].v = 0;
  VAR_8->entries[1].clk = VAR_2;
  VAR_8->entries[1].v = 720;
  VAR_8->entries[2].clk = VAR_3;
  VAR_8->entries[2].v = 810;
  VAR_8->entries[3].clk = VAR_4;
  VAR_8->entries[3].v = 900;
  if (VAR_9 != ((void*)0))
   VAR_9->vddc_dep_on_dal_pwrl = VAR_8;
  VAR_6->dyn_state.vddc_dep_on_dal_pwrl = VAR_8;
 }

 return 0;
}
