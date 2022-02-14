
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
struct radeon_ps {int dummy; } ;
struct radeon_clock_voltage_dependency_table {TYPE_4__* entries; scalar_t__ count; } ;
struct TYPE_8__ {struct radeon_clock_voltage_dependency_table vddc_dependency_on_sclk; } ;
struct TYPE_9__ {TYPE_1__ dyn_state; } ;
struct TYPE_10__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct kv_ps {int num_levels; TYPE_7__* levels; } ;
struct TYPE_12__ {struct sumo_sclk_voltage_mapping_table sclk_voltage_mapping_table; } ;
struct kv_power_info {size_t graphics_dpm_level_count; size_t lowest_valid; size_t highest_valid; TYPE_5__ sys_info; } ;
struct TYPE_14__ {scalar_t__ sclk; } ;
struct TYPE_13__ {scalar_t__ sclk_frequency; } ;
struct TYPE_11__ {scalar_t__ clk; } ;


 struct kv_power_info* FUNC_0 (struct radeon_device*) ;
 struct kv_ps* FUNC_1 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0,
         struct radeon_ps *VAR_1)
{
 struct kv_ps *VAR_2 = FUNC_1(VAR_1);
 struct kv_power_info *VAR_3 = FUNC_0(VAR_0);
 u32 VAR_4;
 struct radeon_clock_voltage_dependency_table *VAR_5 =
  &VAR_0->pm.dpm.dyn_state.vddc_dependency_on_sclk;

 if (VAR_5 && VAR_5->count) {
  for (VAR_4 = 0; VAR_4 < VAR_3->graphics_dpm_level_count; VAR_4++) {
   if ((VAR_5->entries[VAR_4].clk >= VAR_2->levels[0].sclk) ||
       (VAR_4 == (VAR_3->graphics_dpm_level_count - 1))) {
    VAR_3->lowest_valid = VAR_4;
    break;
   }
  }

  for (VAR_4 = VAR_3->graphics_dpm_level_count - 1; VAR_4 > 0; VAR_4--) {
   if (VAR_5->entries[VAR_4].clk <= VAR_2->levels[VAR_2->num_levels - 1].sclk)
    break;
  }
  VAR_3->highest_valid = VAR_4;

  if (VAR_3->lowest_valid > VAR_3->highest_valid) {
   if ((VAR_2->levels[0].sclk - VAR_5->entries[VAR_3->highest_valid].clk) >
       (VAR_5->entries[VAR_3->lowest_valid].clk - VAR_2->levels[VAR_2->num_levels - 1].sclk))
    VAR_3->highest_valid = VAR_3->lowest_valid;
   else
    VAR_3->lowest_valid = VAR_3->highest_valid;
  }
 } else {
  struct sumo_sclk_voltage_mapping_table *VAR_6 =
   &VAR_3->sys_info.sclk_voltage_mapping_table;

  for (VAR_4 = 0; VAR_4 < (int)VAR_3->graphics_dpm_level_count; VAR_4++) {
   if (VAR_6->entries[VAR_4].sclk_frequency >= VAR_2->levels[0].sclk ||
       VAR_4 == (int)(VAR_3->graphics_dpm_level_count - 1)) {
    VAR_3->lowest_valid = VAR_4;
    break;
   }
  }

  for (VAR_4 = VAR_3->graphics_dpm_level_count - 1; VAR_4 > 0; VAR_4--) {
   if (VAR_6->entries[VAR_4].sclk_frequency <=
       VAR_2->levels[VAR_2->num_levels - 1].sclk)
    break;
  }
  VAR_3->highest_valid = VAR_4;

  if (VAR_3->lowest_valid > VAR_3->highest_valid) {
   if ((VAR_2->levels[0].sclk -
        VAR_6->entries[VAR_3->highest_valid].sclk_frequency) >
       (VAR_6->entries[VAR_3->lowest_valid].sclk_frequency -
        VAR_2->levels[VAR_2->num_levels -1].sclk))
    VAR_3->highest_valid = VAR_3->lowest_valid;
   else
    VAR_3->lowest_valid = VAR_3->highest_valid;
  }
 }
}
