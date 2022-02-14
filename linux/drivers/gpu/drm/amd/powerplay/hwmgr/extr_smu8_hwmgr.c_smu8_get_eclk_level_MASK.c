
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {struct phm_vce_clock_voltage_dependency_table* vce_clock_voltage_dependency_table; } ;
struct pp_hwmgr {TYPE_1__ dyn_state; } ;
struct phm_vce_clock_voltage_dependency_table {TYPE_2__* entries; scalar_t__ count; } ;
struct TYPE_4__ {int ecclk; } ;







__attribute__((used)) static uint32_t FUNC_0(struct pp_hwmgr *VAR_0,
     uint32_t VAR_1, uint32_t VAR_2)
{
 int VAR_3 = 0;
 struct phm_vce_clock_voltage_dependency_table *VAR_4 =
  VAR_0->dyn_state.vce_clock_voltage_dependency_table;

 switch (VAR_2) {
 case 128:
 case 130:
  for (VAR_3 = 0; VAR_3 < (int)VAR_4->count; VAR_3++) {
   if (VAR_1 <= VAR_4->entries[VAR_3].ecclk)
    break;
  }
  break;

 case 129:
 case 131:
  for (VAR_3 = VAR_4->count - 1; VAR_3 >= 0; VAR_3--) {
   if (VAR_1 >= VAR_4->entries[VAR_3].ecclk)
    break;
  }
  break;

 default:
  break;
 }

 return VAR_3;
}
