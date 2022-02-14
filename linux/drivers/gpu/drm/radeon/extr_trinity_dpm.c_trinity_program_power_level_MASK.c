
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct trinity_power_info {int * at; } ;
struct trinity_pl {int vce_wm; int display_wm; int force_nbp_state; int allow_gnb_slow; int ds_divider_index; int ss_divider_index; int vddc_index; int sclk; } ;
struct radeon_device {int dummy; } ;


 size_t VAR_0 ;
 struct trinity_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,size_t,int ) ;
 int FUNC_2 (struct radeon_device*,size_t,int ) ;
 int FUNC_3 (struct radeon_device*,size_t,int ) ;
 int FUNC_4 (struct radeon_device*,size_t,int ) ;
 int FUNC_5 (struct radeon_device*,size_t,int ) ;
 int FUNC_6 (struct radeon_device*,size_t,int ) ;
 int FUNC_7 (struct radeon_device*,size_t,int ) ;
 int FUNC_8 (struct radeon_device*,size_t,int ) ;
 int FUNC_9 (struct radeon_device*,size_t,int ) ;

__attribute__((used)) static void FUNC_10(struct radeon_device *VAR_1,
     struct trinity_pl *VAR_2, u32 VAR_3)
{
 struct trinity_power_info *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3 >= VAR_0)
  return;

 FUNC_4(VAR_1, VAR_3, VAR_2->sclk);
 FUNC_9(VAR_1, VAR_3, VAR_2->vddc_index);
 FUNC_7(VAR_1, VAR_3, VAR_2->ss_divider_index);
 FUNC_5(VAR_1, VAR_3, VAR_2->ds_divider_index);
 FUNC_1(VAR_1, VAR_3, VAR_2->allow_gnb_slow);
 FUNC_6(VAR_1, VAR_3, VAR_2->force_nbp_state);
 FUNC_3(VAR_1, VAR_3, VAR_2->display_wm);
 FUNC_8(VAR_1, VAR_3, VAR_2->vce_wm);
 FUNC_2(VAR_1, VAR_3, VAR_4->at[VAR_3]);
}
