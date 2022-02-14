
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct amdgpu_vce_clock_voltage_dependency_table {scalar_t__ count; TYPE_4__* entries; } ;
struct TYPE_5__ {struct amdgpu_vce_clock_voltage_dependency_table vce_clock_voltage_dependency_table; } ;
struct TYPE_6__ {TYPE_1__ dyn_state; } ;
struct TYPE_7__ {TYPE_2__ dpm; } ;
struct amdgpu_device {TYPE_3__ pm; } ;
struct TYPE_8__ {scalar_t__ evclk; scalar_t__ ecclk; int v; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_1,
        u32 VAR_2, u32 VAR_3, u16 *VAR_4)
{
 u32 VAR_5;
 int VAR_6 = -VAR_0;
 struct amdgpu_vce_clock_voltage_dependency_table *VAR_7 =
  &VAR_1->pm.dpm.dyn_state.vce_clock_voltage_dependency_table;

 if (((VAR_2 == 0) && (VAR_3 == 0)) ||
     (VAR_7 && (VAR_7->count == 0))) {
  *VAR_4 = 0;
  return 0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_7->count; VAR_5++) {
  if ((VAR_2 <= VAR_7->entries[VAR_5].evclk) &&
      (VAR_3 <= VAR_7->entries[VAR_5].ecclk)) {
   *VAR_4 = VAR_7->entries[VAR_5].v;
   VAR_6 = 0;
   break;
  }
 }


 if (VAR_6)
  *VAR_4 = VAR_7->entries[VAR_7->count - 1].v;

 *VAR_4 = FUNC_0(VAR_1, *VAR_4);

 return VAR_6;
}
