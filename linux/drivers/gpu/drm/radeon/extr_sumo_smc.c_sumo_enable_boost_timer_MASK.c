
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int sclk_dpm_boost_margin; int sclk_dpm_throttle_margin; int gnb_tdp_limit; int sclk_dpm_tdp_limit_pg; } ;
struct sumo_power_info {TYPE_1__ sys_info; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct radeon_device*) ;
 struct sumo_power_info* FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct radeon_device*,int ) ;

void FUNC_6(struct radeon_device *VAR_9)
{
 struct sumo_power_info *VAR_10 = FUNC_3(VAR_9);
 u32 VAR_11, VAR_12, VAR_13;
 u32 VAR_14 = FUNC_2(VAR_9);

 VAR_12 = (FUNC_0(VAR_5) & VAR_1)
  >> VAR_2;

 VAR_11 = 100 * (VAR_14 / 100 / FUNC_4(VAR_12));

 VAR_13 = (VAR_11 << 16) | (VAR_12 << 4);

 FUNC_1(VAR_4, VAR_13);
 FUNC_1(VAR_3, VAR_10->sys_info.sclk_dpm_boost_margin);
 FUNC_1(VAR_7, VAR_10->sys_info.sclk_dpm_throttle_margin);
 FUNC_1(VAR_0, VAR_10->sys_info.gnb_tdp_limit);
 FUNC_1(VAR_6, VAR_10->sys_info.sclk_dpm_tdp_limit_pg);

 FUNC_5(VAR_9, VAR_8);
}
