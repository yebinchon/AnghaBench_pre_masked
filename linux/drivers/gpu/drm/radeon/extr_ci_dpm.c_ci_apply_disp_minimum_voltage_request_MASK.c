
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_9__ {scalar_t__ current_dispclk; } ;
struct radeon_clock_voltage_dependency_table {size_t count; TYPE_5__* entries; } ;
struct TYPE_6__ {struct radeon_clock_voltage_dependency_table vddc_dependency_on_sclk; struct radeon_clock_voltage_dependency_table vddc_dependency_on_dispclk; } ;
struct TYPE_7__ {TYPE_1__ dyn_state; } ;
struct TYPE_8__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_4__ clock; TYPE_3__ pm; } ;
struct TYPE_10__ {scalar_t__ clk; size_t v; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (struct radeon_device*,int ,size_t) ;

__attribute__((used)) static int FUNC_1(struct radeon_device *VAR_4)
{
 struct radeon_clock_voltage_dependency_table *VAR_5 =
  &VAR_4->pm.dpm.dyn_state.vddc_dependency_on_dispclk;
 struct radeon_clock_voltage_dependency_table *VAR_6 =
  &VAR_4->pm.dpm.dyn_state.vddc_dependency_on_sclk;
 u32 VAR_7 = 0;
 u32 VAR_8;

 if (VAR_5 == ((void*)0))
  return -VAR_0;
 if (!VAR_5->count)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_5->count; VAR_8++) {
  if (VAR_4->clock.current_dispclk == VAR_5->entries[VAR_8].clk)
   VAR_7 = VAR_5->entries[VAR_8].v;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6->count; VAR_8++) {
  if (VAR_7 <= VAR_6->entries[VAR_8].v) {
   VAR_7 = VAR_6->entries[VAR_8].v;
   return (FUNC_0(VAR_4,
          VAR_1,
          VAR_7 * VAR_3) == VAR_2) ?
    0 : -VAR_0;
  }
 }

 return -VAR_0;
}
