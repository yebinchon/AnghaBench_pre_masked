
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct trinity_ps {int dclk_high_divider; int vclk_high_divider; int dclk_low_divider; int vclk_low_divider; } ;
struct TYPE_4__ {TYPE_1__* uvd_clock_table_entries; } ;
struct trinity_power_info {TYPE_2__ sys_info; scalar_t__ uvd_dpm; } ;
struct radeon_ps {int class2; int class; } ;
struct radeon_device {int dummy; } ;
struct TYPE_3__ {int dclk_did; int vclk_did; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 struct trinity_power_info* FUNC_1 (struct radeon_device*) ;
 struct trinity_ps* FUNC_2 (struct radeon_ps*) ;
 int FUNC_3 (struct radeon_device*,struct radeon_ps*) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_0,
         struct radeon_ps *VAR_1)
{
 struct trinity_ps *VAR_2 = FUNC_2(VAR_1);
 struct trinity_power_info *VAR_3 = FUNC_1(VAR_0);
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;

 if (VAR_3->uvd_dpm && FUNC_0(VAR_1->class, VAR_1->class2)) {
  VAR_4 = FUNC_3(VAR_0, VAR_1);

  switch(VAR_4) {
  case 3:
  case 2:
   VAR_5 = 1;
   break;
  case 1:
  case 0:
  default:
   VAR_5 = 0;
   break;
  }

  VAR_2->vclk_low_divider =
   VAR_3->sys_info.uvd_clock_table_entries[VAR_4].vclk_did;
  VAR_2->dclk_low_divider =
   VAR_3->sys_info.uvd_clock_table_entries[VAR_4].dclk_did;
  VAR_2->vclk_high_divider =
   VAR_3->sys_info.uvd_clock_table_entries[VAR_5].vclk_did;
  VAR_2->dclk_high_divider =
   VAR_3->sys_info.uvd_clock_table_entries[VAR_5].dclk_did;
 }
}
