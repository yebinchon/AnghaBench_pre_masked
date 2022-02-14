
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* u8 ;
typedef size_t u32 ;
struct sumo_sclk_voltage_mapping_table {scalar_t__ num_max_dpm_entries; TYPE_6__* entries; } ;
struct TYPE_14__ {scalar_t__ sclk; } ;
struct TYPE_12__ {struct sumo_sclk_voltage_mapping_table sclk_voltage_mapping_table; } ;
struct kv_power_info {int graphics_dpm_level_count; void* graphics_boot_level; TYPE_7__ boot_pl; TYPE_5__ sys_info; } ;
struct amdgpu_clock_voltage_dependency_table {TYPE_4__* entries; scalar_t__ count; } ;
struct TYPE_8__ {struct amdgpu_clock_voltage_dependency_table vddc_dependency_on_sclk; } ;
struct TYPE_9__ {TYPE_1__ dyn_state; } ;
struct TYPE_10__ {TYPE_2__ dpm; } ;
struct amdgpu_device {TYPE_3__ pm; } ;
struct TYPE_13__ {scalar_t__ sclk_frequency; } ;
struct TYPE_11__ {scalar_t__ clk; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,size_t,int) ;
 struct kv_power_info* FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_1)
{
 struct kv_power_info *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3;
 struct amdgpu_clock_voltage_dependency_table *VAR_4 =
  &VAR_1->pm.dpm.dyn_state.vddc_dependency_on_sclk;

 if (VAR_4 && VAR_4->count) {
  for (VAR_3 = VAR_2->graphics_dpm_level_count - 1; VAR_3 > 0; VAR_3--) {
   if (VAR_4->entries[VAR_3].clk == VAR_2->boot_pl.sclk)
    break;
  }

  VAR_2->graphics_boot_level = (u8)VAR_3;
  FUNC_0(VAR_1, VAR_3, 1);
 } else {
  struct sumo_sclk_voltage_mapping_table *VAR_5 =
   &VAR_2->sys_info.sclk_voltage_mapping_table;

  if (VAR_5->num_max_dpm_entries == 0)
   return -VAR_0;

  for (VAR_3 = VAR_2->graphics_dpm_level_count - 1; VAR_3 > 0; VAR_3--) {
   if (VAR_5->entries[VAR_3].sclk_frequency == VAR_2->boot_pl.sclk)
    break;
  }

  VAR_2->graphics_boot_level = (u8)VAR_3;
  FUNC_0(VAR_1, VAR_3, 1);
 }
 return 0;
}
