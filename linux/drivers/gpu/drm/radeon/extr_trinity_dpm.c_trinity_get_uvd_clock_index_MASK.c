
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* uvd_clock_table_entries; } ;
struct trinity_power_info {TYPE_2__ sys_info; } ;
struct radeon_ps {scalar_t__ vclk; scalar_t__ dclk; } ;
struct radeon_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ vclk; scalar_t__ dclk; } ;


 int FUNC_0 (char*) ;
 struct trinity_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static u32 FUNC_2(struct radeon_device *VAR_0,
           struct radeon_ps *VAR_1)
{
 struct trinity_power_info *VAR_2 = FUNC_1(VAR_0);
 u32 VAR_3 = 0;

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  if ((VAR_1->vclk == VAR_2->sys_info.uvd_clock_table_entries[VAR_3].vclk) &&
      (VAR_1->dclk == VAR_2->sys_info.uvd_clock_table_entries[VAR_3].dclk))
      break;
 }

 if (VAR_3 >= 4) {
  FUNC_0("UVD clock index not found!\n");
  VAR_3 = 3;
 }
 return VAR_3;
}
