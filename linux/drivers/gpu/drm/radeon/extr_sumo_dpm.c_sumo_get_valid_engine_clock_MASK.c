
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {size_t num_max_dpm_entries; TYPE_3__* entries; } ;
struct TYPE_5__ {TYPE_1__ sclk_voltage_mapping_table; } ;
struct sumo_power_info {TYPE_2__ sys_info; } ;
struct radeon_device {int dummy; } ;
struct TYPE_6__ {size_t sclk_frequency; } ;


 struct sumo_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static u32 FUNC_1(struct radeon_device *VAR_0,
           u32 VAR_1)
{
 struct sumo_power_info *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->sys_info.sclk_voltage_mapping_table.num_max_dpm_entries; VAR_3++) {
  if (VAR_2->sys_info.sclk_voltage_mapping_table.entries[VAR_3].sclk_frequency >= VAR_1)
   return VAR_2->sys_info.sclk_voltage_mapping_table.entries[VAR_3].sclk_frequency;
 }

 return VAR_2->sys_info.sclk_voltage_mapping_table.entries[VAR_2->sys_info.sclk_voltage_mapping_table.num_max_dpm_entries - 1].sclk_frequency;
}
