
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct sumo_ps {TYPE_3__* levels; } ;
struct TYPE_5__ {size_t vddc_index; size_t sclk; } ;
struct TYPE_4__ {size_t min_sclk; } ;
struct sumo_power_info {TYPE_2__ boot_pl; TYPE_1__ sys_info; } ;
struct radeon_device {int dummy; } ;
struct TYPE_6__ {size_t vddc_index; size_t sclk; scalar_t__ ss_divider_index; scalar_t__ ds_divider_index; } ;


 size_t VAR_0 ;
 struct sumo_power_info* FUNC_0 (struct radeon_device*) ;
 void* FUNC_1 (struct radeon_device*,size_t,size_t) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_1,
         struct sumo_ps *VAR_2,
         struct sumo_ps *VAR_3)
{
 struct sumo_power_info *VAR_4 = FUNC_0(VAR_1);
 u32 VAR_5 = VAR_4->sys_info.min_sclk;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8 = 0;

 if (VAR_3) {
  VAR_6 = VAR_3->levels[VAR_8].vddc_index;
  VAR_7 = VAR_3->levels[VAR_8].sclk;
 } else {
  VAR_6 = VAR_4->boot_pl.vddc_index;
  VAR_7 = VAR_4->boot_pl.sclk;
 }

 VAR_2->levels[0].vddc_index = VAR_6;

 if (VAR_2->levels[0].sclk > VAR_7)
  VAR_2->levels[0].sclk = VAR_7;

 VAR_2->levels[0].ss_divider_index =
  FUNC_1(VAR_1, VAR_2->levels[0].sclk, VAR_5);

 VAR_2->levels[0].ds_divider_index =
  FUNC_1(VAR_1, VAR_2->levels[0].sclk, VAR_0);

 if (VAR_2->levels[0].ds_divider_index > VAR_2->levels[0].ss_divider_index + 1)
  VAR_2->levels[0].ds_divider_index = VAR_2->levels[0].ss_divider_index + 1;

 if (VAR_2->levels[0].ss_divider_index == VAR_2->levels[0].ds_divider_index) {
  if (VAR_2->levels[0].ss_divider_index > 1)
   VAR_2->levels[0].ss_divider_index = VAR_2->levels[0].ss_divider_index - 1;
 }

 if (VAR_2->levels[0].ss_divider_index == 0)
  VAR_2->levels[0].ds_divider_index = 0;

 if (VAR_2->levels[0].ds_divider_index == 0)
  VAR_2->levels[0].ss_divider_index = 0;
}
