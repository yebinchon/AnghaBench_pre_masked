
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


typedef size_t u32 ;
struct sumo_sclk_voltage_mapping_table {TYPE_6__* entries; } ;
struct TYPE_12__ {struct sumo_sclk_voltage_mapping_table sclk_voltage_mapping_table; } ;
struct kv_power_info {size_t graphics_dpm_level_count; TYPE_7__* graphics_level; scalar_t__ caps_enable_dfs_bypass; TYPE_5__ sys_info; } ;
struct amdgpu_clock_voltage_dependency_table {TYPE_4__* entries; scalar_t__ count; } ;
struct TYPE_8__ {struct amdgpu_clock_voltage_dependency_table vddc_dependency_on_sclk; } ;
struct TYPE_9__ {TYPE_1__ dyn_state; } ;
struct TYPE_10__ {TYPE_2__ dpm; } ;
struct amdgpu_device {TYPE_3__ pm; } ;
struct TYPE_14__ {int ClkBypassCntl; } ;
struct TYPE_13__ {int sclk_frequency; } ;
struct TYPE_11__ {int clk; } ;


 int FUNC_0 (int ,int) ;
 struct kv_power_info* FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_0)
{
 struct kv_power_info *VAR_1 = FUNC_1(VAR_0);
 u32 VAR_2;
 struct amdgpu_clock_voltage_dependency_table *VAR_3 =
  &VAR_0->pm.dpm.dyn_state.vddc_dependency_on_sclk;

 if (VAR_3 && VAR_3->count) {
  for (VAR_2 = 0; VAR_2 < VAR_1->graphics_dpm_level_count; VAR_2++) {
   if (VAR_1->caps_enable_dfs_bypass) {
    if (FUNC_0(VAR_3->entries[VAR_2].clk, 40000) < 200)
     VAR_1->graphics_level[VAR_2].ClkBypassCntl = 3;
    else if (FUNC_0(VAR_3->entries[VAR_2].clk, 30000) < 200)
     VAR_1->graphics_level[VAR_2].ClkBypassCntl = 2;
    else if (FUNC_0(VAR_3->entries[VAR_2].clk, 26600) < 200)
     VAR_1->graphics_level[VAR_2].ClkBypassCntl = 7;
    else if (FUNC_0(VAR_3->entries[VAR_2].clk , 20000) < 200)
     VAR_1->graphics_level[VAR_2].ClkBypassCntl = 6;
    else if (FUNC_0(VAR_3->entries[VAR_2].clk , 10000) < 200)
     VAR_1->graphics_level[VAR_2].ClkBypassCntl = 8;
    else
     VAR_1->graphics_level[VAR_2].ClkBypassCntl = 0;
   } else {
    VAR_1->graphics_level[VAR_2].ClkBypassCntl = 0;
   }
  }
 } else {
  struct sumo_sclk_voltage_mapping_table *VAR_4 =
   &VAR_1->sys_info.sclk_voltage_mapping_table;
  for (VAR_2 = 0; VAR_2 < VAR_1->graphics_dpm_level_count; VAR_2++) {
   if (VAR_1->caps_enable_dfs_bypass) {
    if (FUNC_0(VAR_4->entries[VAR_2].sclk_frequency, 40000) < 200)
     VAR_1->graphics_level[VAR_2].ClkBypassCntl = 3;
    else if (FUNC_0(VAR_4->entries[VAR_2].sclk_frequency, 30000) < 200)
     VAR_1->graphics_level[VAR_2].ClkBypassCntl = 2;
    else if (FUNC_0(VAR_4->entries[VAR_2].sclk_frequency, 26600) < 200)
     VAR_1->graphics_level[VAR_2].ClkBypassCntl = 7;
    else if (FUNC_0(VAR_4->entries[VAR_2].sclk_frequency, 20000) < 200)
     VAR_1->graphics_level[VAR_2].ClkBypassCntl = 6;
    else if (FUNC_0(VAR_4->entries[VAR_2].sclk_frequency, 10000) < 200)
     VAR_1->graphics_level[VAR_2].ClkBypassCntl = 8;
    else
     VAR_1->graphics_level[VAR_2].ClkBypassCntl = 0;
   } else {
    VAR_1->graphics_level[VAR_2].ClkBypassCntl = 0;
   }
  }
 }
}
