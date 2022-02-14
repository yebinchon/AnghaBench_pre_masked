
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct radeon_vce_clock_voltage_dependency_table {size_t count; TYPE_4__* entries; } ;
struct TYPE_5__ {struct radeon_vce_clock_voltage_dependency_table vce_clock_voltage_dependency_table; } ;
struct TYPE_6__ {TYPE_1__ dyn_state; } ;
struct TYPE_7__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct TYPE_8__ {scalar_t__ evclk; } ;



__attribute__((used)) static u8 FUNC_0(struct radeon_device *VAR_0, u32 VAR_1)
{
 u8 VAR_2;
 struct radeon_vce_clock_voltage_dependency_table *VAR_3 =
  &VAR_0->pm.dpm.dyn_state.vce_clock_voltage_dependency_table;

 for (VAR_2 = 0; VAR_2 < VAR_3->count; VAR_2++) {
  if (VAR_3->entries[VAR_2].evclk >= VAR_1)
   break;
 }

 return VAR_2;
}
