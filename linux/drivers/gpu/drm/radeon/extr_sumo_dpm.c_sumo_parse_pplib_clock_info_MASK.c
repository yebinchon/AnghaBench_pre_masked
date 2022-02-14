
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ucEngineClockHigh; int tdpLimit; int vddcIndex; int usEngineClockLow; } ;
union pplib_clock_info {TYPE_1__ sumo; } ;
typedef int u32 ;
struct sumo_ps {int num_levels; struct sumo_pl* levels; } ;
struct sumo_power_info {scalar_t__ enable_sclk_ds; } ;
struct sumo_pl {int sclk; int ds_divider_index; int ss_divider_index; int sclk_dpm_tdp_limit; int vddc_index; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sumo_power_info* FUNC_1 (struct radeon_device*) ;
 struct sumo_ps* FUNC_2 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_0,
     struct radeon_ps *VAR_1, int VAR_2,
     union pplib_clock_info *VAR_3)
{
 struct sumo_power_info *VAR_4 = FUNC_1(VAR_0);
 struct sumo_ps *VAR_5 = FUNC_2(VAR_1);
 struct sumo_pl *VAR_6 = &VAR_5->levels[VAR_2];
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_3->sumo.usEngineClockLow);
 VAR_7 |= VAR_3->sumo.ucEngineClockHigh << 16;
 VAR_6->sclk = VAR_7;
 VAR_6->vddc_index = VAR_3->sumo.vddcIndex;
 VAR_6->sclk_dpm_tdp_limit = VAR_3->sumo.tdpLimit;

 VAR_5->num_levels = VAR_2 + 1;

 if (VAR_4->enable_sclk_ds) {
  VAR_6->ds_divider_index = 5;
  VAR_6->ss_divider_index = 4;
 }
}
