
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sumo_ps {int flags; int num_levels; TYPE_2__* levels; } ;
struct TYPE_3__ {int sclk_dpm_tdp_limit_boost; int boost_vid_2bit; int boost_sclk; } ;
struct TYPE_4__ {int sclk_dpm_tdp_limit; int vddc_index; int sclk; } ;
struct sumo_power_info {TYPE_1__ sys_info; TYPE_2__ boost_pl; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 struct sumo_power_info* FUNC_0 (struct radeon_device*) ;
 struct sumo_ps* FUNC_1 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_1,
       struct radeon_ps *VAR_2)
{
 struct sumo_power_info *VAR_3 = FUNC_0(VAR_1);
 struct sumo_ps *VAR_4 = FUNC_1(VAR_2);

 if (VAR_4->flags & VAR_0) {
  VAR_3->boost_pl = VAR_4->levels[VAR_4->num_levels - 1];
  VAR_3->boost_pl.sclk = VAR_3->sys_info.boost_sclk;
  VAR_3->boost_pl.vddc_index = VAR_3->sys_info.boost_vid_2bit;
  VAR_3->boost_pl.sclk_dpm_tdp_limit = VAR_3->sys_info.sclk_dpm_tdp_limit_boost;
 }
}
