
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_device {int dummy; } ;
struct radeon_clock_and_voltage_limits {int mclk; int vddc; int sclk; } ;
struct TYPE_6__ {int num_max_dpm_entries; TYPE_1__* entries; } ;
struct TYPE_5__ {int * nbp_memory_clock; TYPE_3__ sclk_voltage_mapping_table; } ;
struct kv_power_info {TYPE_2__ sys_info; } ;
struct TYPE_4__ {int vid_2bit; int sclk_frequency; } ;


 int FUNC_0 (struct radeon_device*,int ) ;
 struct kv_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0,
      struct radeon_clock_and_voltage_limits *VAR_1)
{
 struct kv_power_info *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->sys_info.sclk_voltage_mapping_table.num_max_dpm_entries > 0) {
  int VAR_3 = VAR_2->sys_info.sclk_voltage_mapping_table.num_max_dpm_entries - 1;
  VAR_1->sclk =
   VAR_2->sys_info.sclk_voltage_mapping_table.entries[VAR_3].sclk_frequency;
  VAR_1->vddc =
   FUNC_0(VAR_0,
        VAR_2->sys_info.sclk_voltage_mapping_table.entries[VAR_3].vid_2bit);
 }

 VAR_1->mclk = VAR_2->sys_info.nbp_memory_clock[0];
}
