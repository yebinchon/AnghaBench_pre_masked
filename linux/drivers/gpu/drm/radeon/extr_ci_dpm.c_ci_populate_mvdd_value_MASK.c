
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_13__ {size_t count; TYPE_1__* entries; } ;
struct TYPE_14__ {TYPE_4__ mvdd_dependency_on_mclk; } ;
struct TYPE_15__ {TYPE_5__ dyn_state; } ;
struct TYPE_16__ {TYPE_6__ dpm; } ;
struct radeon_device {TYPE_7__ pm; } ;
struct TYPE_12__ {TYPE_2__* entries; } ;
struct ci_power_info {scalar_t__ mvdd_control; TYPE_3__ mvdd_voltage_table; } ;
struct TYPE_17__ {int Voltage; } ;
struct TYPE_11__ {int value; } ;
struct TYPE_10__ {size_t clk; } ;
typedef TYPE_8__ SMU7_Discrete_VoltageLevel ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_1(struct radeon_device *VAR_2, u32 VAR_3,
      SMU7_Discrete_VoltageLevel *VAR_4)
{
 struct ci_power_info *VAR_5 = FUNC_0(VAR_2);
 u32 VAR_6 = 0;

 if (VAR_5->mvdd_control != VAR_0) {
  for (VAR_6 = 0; VAR_6 < VAR_2->pm.dpm.dyn_state.mvdd_dependency_on_mclk.count; VAR_6++) {
   if (VAR_3 <= VAR_2->pm.dpm.dyn_state.mvdd_dependency_on_mclk.entries[VAR_6].clk) {
    VAR_4->Voltage = VAR_5->mvdd_voltage_table.entries[VAR_6].value;
    break;
   }
  }

  if (VAR_6 >= VAR_2->pm.dpm.dyn_state.mvdd_dependency_on_mclk.count)
   return -VAR_1;
 }

 return -VAR_1;
}
