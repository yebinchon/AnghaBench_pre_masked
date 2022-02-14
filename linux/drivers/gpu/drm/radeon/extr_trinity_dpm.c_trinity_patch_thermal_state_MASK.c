
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct trinity_ps {TYPE_3__* levels; } ;
struct TYPE_5__ {size_t vddc_index; size_t sclk; } ;
struct TYPE_4__ {size_t min_sclk; } ;
struct trinity_power_info {TYPE_2__ boot_pl; TYPE_1__ sys_info; } ;
struct radeon_device {int dummy; } ;
struct TYPE_6__ {size_t vddc_index; size_t sclk; int allow_gnb_slow; int vce_wm; scalar_t__ display_wm; scalar_t__ force_nbp_state; int ds_divider_index; int ss_divider_index; } ;


 int FUNC_0 (struct radeon_device*,size_t) ;
 struct trinity_power_info* FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,size_t,size_t) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_0,
     struct trinity_ps *VAR_1,
     struct trinity_ps *VAR_2)
{
 struct trinity_power_info *VAR_3 = FUNC_1(VAR_0);
 u32 VAR_4 = VAR_3->sys_info.min_sclk;
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7 = 0;

 if (VAR_2) {
  VAR_5 = VAR_2->levels[VAR_7].vddc_index;
  VAR_6 = VAR_2->levels[VAR_7].sclk;
 } else {
  VAR_5 = VAR_3->boot_pl.vddc_index;
  VAR_6 = VAR_3->boot_pl.sclk;
 }

 VAR_1->levels[0].vddc_index = VAR_5;

 if (VAR_1->levels[0].sclk > VAR_6)
  VAR_1->levels[0].sclk = VAR_6;

 VAR_1->levels[0].ds_divider_index =
  FUNC_2(VAR_0, VAR_1->levels[0].sclk, VAR_4);
 VAR_1->levels[0].ss_divider_index = VAR_1->levels[0].ds_divider_index;
 VAR_1->levels[0].allow_gnb_slow = 1;
 VAR_1->levels[0].force_nbp_state = 0;
 VAR_1->levels[0].display_wm = 0;
 VAR_1->levels[0].vce_wm =
  FUNC_0(VAR_0, VAR_1->levels[0].sclk);
}
