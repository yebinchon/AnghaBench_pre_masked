
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


typedef size_t u32 ;
struct sumo_sclk_voltage_mapping_table {size_t num_max_dpm_entries; TYPE_6__* entries; } ;
struct radeon_clock_voltage_dependency_table {size_t count; TYPE_4__* entries; } ;
struct TYPE_7__ {struct radeon_clock_voltage_dependency_table vddc_dependency_on_sclk; } ;
struct TYPE_8__ {TYPE_1__ dyn_state; } ;
struct TYPE_9__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct TYPE_11__ {struct sumo_sclk_voltage_mapping_table sclk_voltage_mapping_table; int vid_mapping_table; } ;
struct kv_power_info {scalar_t__ high_voltage_t; scalar_t__ graphics_dpm_level_count; int * at; TYPE_5__ sys_info; } ;
struct TYPE_12__ {size_t vid_2bit; int sclk_frequency; } ;
struct TYPE_10__ {int v; int clk; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct radeon_device*,size_t) ;
 scalar_t__ FUNC_1 (struct radeon_device*,int ) ;
 size_t FUNC_2 (struct radeon_device*,int *,int ) ;
 int FUNC_3 (struct radeon_device*,size_t,int) ;
 int FUNC_4 (struct radeon_device*,size_t,int) ;
 struct kv_power_info* FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,size_t,int ) ;
 int FUNC_7 (struct radeon_device*,size_t,int ) ;
 int FUNC_8 (struct radeon_device*,size_t,size_t) ;

__attribute__((used)) static void FUNC_9(struct radeon_device *VAR_1)
{
 struct kv_power_info *VAR_2 = FUNC_5(VAR_1);
 u32 VAR_3;
 struct radeon_clock_voltage_dependency_table *VAR_4 =
  &VAR_1->pm.dpm.dyn_state.vddc_dependency_on_sclk;

 if (VAR_4 && VAR_4->count) {
  u32 VAR_5;

  VAR_2->graphics_dpm_level_count = 0;
  for (VAR_3 = 0; VAR_3 < VAR_4->count; VAR_3++) {
   if (VAR_2->high_voltage_t &&
       (VAR_2->high_voltage_t <
        FUNC_1(VAR_1, VAR_4->entries[VAR_3].v)))
    break;

   FUNC_7(VAR_1, VAR_3, VAR_4->entries[VAR_3].clk);
   VAR_5 = FUNC_2(VAR_1,
          &VAR_2->sys_info.vid_mapping_table,
          VAR_4->entries[VAR_3].v);
   FUNC_8(VAR_1, VAR_3, VAR_5);
   FUNC_6(VAR_1, VAR_3, VAR_2->at[VAR_3]);
   FUNC_4(VAR_1, VAR_3, 1);
   VAR_2->graphics_dpm_level_count++;
  }
 } else {
  struct sumo_sclk_voltage_mapping_table *VAR_6 =
   &VAR_2->sys_info.sclk_voltage_mapping_table;

  VAR_2->graphics_dpm_level_count = 0;
  for (VAR_3 = 0; VAR_3 < VAR_6->num_max_dpm_entries; VAR_3++) {
   if (VAR_2->high_voltage_t &&
       VAR_2->high_voltage_t <
       FUNC_0(VAR_1, VAR_6->entries[VAR_3].vid_2bit))
    break;

   FUNC_7(VAR_1, VAR_3, VAR_6->entries[VAR_3].sclk_frequency);
   FUNC_8(VAR_1, VAR_3, VAR_6->entries[VAR_3].vid_2bit);
   FUNC_6(VAR_1, VAR_3, VAR_2->at[VAR_3]);
   FUNC_4(VAR_1, VAR_3, 1);
   VAR_2->graphics_dpm_level_count++;
  }
 }

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_3(VAR_1, VAR_3, 0);
}
