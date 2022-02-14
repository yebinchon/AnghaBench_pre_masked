
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sumo_sclk_voltage_mapping_table {int num_max_dpm_entries; TYPE_6__* entries; } ;
struct TYPE_11__ {struct sumo_sclk_voltage_mapping_table sclk_voltage_mapping_table; } ;
struct kv_power_info {scalar_t__ high_voltage_t; TYPE_5__ sys_info; } ;
struct amdgpu_clock_voltage_dependency_table {int count; TYPE_4__* entries; } ;
struct TYPE_7__ {struct amdgpu_clock_voltage_dependency_table vddc_dependency_on_sclk; } ;
struct TYPE_8__ {TYPE_1__ dyn_state; } ;
struct TYPE_9__ {TYPE_2__ dpm; } ;
struct amdgpu_device {TYPE_3__ pm; } ;
struct TYPE_12__ {int vid_2bit; } ;
struct TYPE_10__ {int v; } ;


 scalar_t__ FUNC_0 (struct amdgpu_device*,int ) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*,int ) ;
 struct kv_power_info* FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_0, int *VAR_1)
{
 struct kv_power_info *VAR_2 = FUNC_2(VAR_0);
 struct amdgpu_clock_voltage_dependency_table *VAR_3 =
  &VAR_0->pm.dpm.dyn_state.vddc_dependency_on_sclk;
 int VAR_4;

 if (VAR_3 && VAR_3->count) {
  for (VAR_4 = VAR_3->count - 1; VAR_4 >= 0; VAR_4--) {
   if (VAR_2->high_voltage_t &&
       (FUNC_1(VAR_0, VAR_3->entries[VAR_4].v) <=
        VAR_2->high_voltage_t)) {
    *VAR_1 = VAR_4;
    return 0;
   }
  }
 } else {
  struct sumo_sclk_voltage_mapping_table *VAR_5 =
   &VAR_2->sys_info.sclk_voltage_mapping_table;

  for (VAR_4 = VAR_5->num_max_dpm_entries - 1; VAR_4 >= 0; VAR_4--) {
   if (VAR_2->high_voltage_t &&
       (FUNC_0(VAR_0, VAR_5->entries[VAR_4].vid_2bit) <=
        VAR_2->high_voltage_t)) {
    *VAR_1 = VAR_4;
    return 0;
   }
  }
 }

 *VAR_1 = 0;
 return 0;
}
