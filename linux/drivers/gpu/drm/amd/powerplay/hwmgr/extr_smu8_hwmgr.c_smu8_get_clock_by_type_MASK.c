
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int* display_clock; int* nbp_memory_clock; } ;
struct smu8_hwmgr {TYPE_3__ sys_info; } ;
struct TYPE_4__ {struct phm_clock_voltage_dependency_table* vddc_dependency_on_sclk; } ;
struct pp_hwmgr {TYPE_1__ dyn_state; struct smu8_hwmgr* backend; } ;
struct phm_clock_voltage_dependency_table {TYPE_2__* entries; } ;
struct amd_pp_clocks {int count; int* clock; } ;
typedef enum amd_pp_clock_type { ____Placeholder_amd_pp_clock_type } amd_pp_clock_type ;
struct TYPE_5__ {int clk; } ;


 int VAR_0 ;



 int FUNC_0 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_1, enum amd_pp_clock_type VAR_2,
      struct amd_pp_clocks *VAR_3)
{
 struct smu8_hwmgr *VAR_4 = VAR_1->backend;
 int VAR_5;
 struct phm_clock_voltage_dependency_table *VAR_6;

 VAR_3->count = FUNC_0(VAR_1);
 switch (VAR_2) {
 case 130:
  for (VAR_5 = 0; VAR_5 < VAR_3->count; VAR_5++)
   VAR_3->clock[VAR_5] = VAR_4->sys_info.display_clock[VAR_5] * 10;
  break;
 case 128:
  VAR_6 = VAR_1->dyn_state.vddc_dependency_on_sclk;
  for (VAR_5 = 0; VAR_5 < VAR_3->count; VAR_5++)
   VAR_3->clock[VAR_5] = VAR_6->entries[VAR_5].clk * 10;
  break;
 case 129:
  VAR_3->count = VAR_0;
  for (VAR_5 = 0; VAR_5 < VAR_3->count; VAR_5++)
   VAR_3->clock[VAR_5] = VAR_4->sys_info.nbp_memory_clock[VAR_3->count - 1 - VAR_5] * 10;
  break;
 default:
  return -1;
 }

 return 0;
}
