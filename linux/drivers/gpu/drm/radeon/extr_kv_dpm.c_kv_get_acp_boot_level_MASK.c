
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct radeon_clock_voltage_dependency_table {size_t count; TYPE_4__* entries; } ;
struct TYPE_5__ {struct radeon_clock_voltage_dependency_table acp_clock_voltage_dependency_table; } ;
struct TYPE_6__ {TYPE_1__ dyn_state; } ;
struct TYPE_7__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct TYPE_8__ {scalar_t__ clk; } ;



__attribute__((used)) static u8 FUNC_0(struct radeon_device *VAR_0)
{
 u8 VAR_1;
 struct radeon_clock_voltage_dependency_table *VAR_2 =
  &VAR_0->pm.dpm.dyn_state.acp_clock_voltage_dependency_table;

 for (VAR_1 = 0; VAR_1 < VAR_2->count; VAR_1++) {
  if (VAR_2->entries[VAR_1].clk >= 0)
   break;
 }

 if (VAR_1 >= VAR_2->count)
  VAR_1 = VAR_2->count - 1;

 return VAR_1;
}
