
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sumo_power_info {scalar_t__ enable_boost; } ;
struct sumo_pl {scalar_t__ ss_divider_index; scalar_t__ ds_divider_index; int sclk_dpm_tdp_limit; int allow_gnb_slow; int vddc_index; int sclk; } ;
struct radeon_device {int dummy; } ;
struct atom_clock_dividers {int post_div; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct radeon_device*,int ,int ,int,struct atom_clock_dividers*) ;
 struct sumo_power_info* FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,int,int ) ;
 int FUNC_5 (struct radeon_device*,int,int ) ;
 int FUNC_6 (struct radeon_device*,int,scalar_t__) ;
 int FUNC_7 (struct radeon_device*,int,scalar_t__) ;
 int FUNC_8 (struct radeon_device*,int,int ) ;
 int FUNC_9 (struct radeon_device*,int,int ) ;

__attribute__((used)) static void FUNC_10(struct radeon_device *VAR_3,
         struct sumo_pl *VAR_4, u32 VAR_5)
{
 struct sumo_power_info *VAR_6 = FUNC_3(VAR_3);
 int VAR_7;
 struct atom_clock_dividers VAR_8;
 u32 VAR_9 = FUNC_0(VAR_1) & VAR_2;

 VAR_7 = FUNC_2(VAR_3, VAR_0,
          VAR_4->sclk, 0, &VAR_8);
 if (VAR_7)
  return;

 FUNC_5(VAR_3, VAR_5, VAR_8.post_div);

 FUNC_9(VAR_3, VAR_5, VAR_4->vddc_index);

 if (VAR_4->ss_divider_index == 0 || VAR_4->ds_divider_index == 0) {
  if (VAR_9)
   FUNC_1(VAR_1, 0, ~VAR_2);
 } else {
  FUNC_7(VAR_3, VAR_5, VAR_4->ss_divider_index);
  FUNC_6(VAR_3, VAR_5, VAR_4->ds_divider_index);

  if (!VAR_9)
   FUNC_1(VAR_1, VAR_2, ~VAR_2);
 }

 FUNC_4(VAR_3, VAR_5, VAR_4->allow_gnb_slow);

 if (VAR_6->enable_boost)
  FUNC_8(VAR_3, VAR_5, VAR_4->sclk_dpm_tdp_limit);
}
