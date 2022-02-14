
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct ci_single_dpm_table {size_t count; TYPE_2__* dpm_levels; } ;
struct TYPE_3__ {struct ci_single_dpm_table pcie_speed_table; } ;
struct ci_power_info {TYPE_1__ dpm_table; } ;
struct TYPE_4__ {size_t value; size_t param1; int enabled; } ;


 struct ci_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_0,
        u32 VAR_1, u32 VAR_2,
        u32 VAR_3, u32 VAR_4)
{
 struct ci_power_info *VAR_5 = FUNC_0(VAR_0);
 struct ci_single_dpm_table *VAR_6 = &VAR_5->dpm_table.pcie_speed_table;
 u32 VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_6->count; VAR_7++) {
  if ((VAR_6->dpm_levels[VAR_7].value < VAR_1) ||
      (VAR_6->dpm_levels[VAR_7].param1 < VAR_2) ||
      (VAR_6->dpm_levels[VAR_7].value > VAR_3) ||
      (VAR_6->dpm_levels[VAR_7].param1 > VAR_4))
   VAR_6->dpm_levels[VAR_7].enabled = 0;
  else
   VAR_6->dpm_levels[VAR_7].enabled = 1;
 }

 for (VAR_7 = 0; VAR_7 < VAR_6->count; VAR_7++) {
  if (VAR_6->dpm_levels[VAR_7].enabled) {
   for (VAR_8 = VAR_7 + 1; VAR_8 < VAR_6->count; VAR_8++) {
    if (VAR_6->dpm_levels[VAR_8].enabled) {
     if ((VAR_6->dpm_levels[VAR_7].value == VAR_6->dpm_levels[VAR_8].value) &&
         (VAR_6->dpm_levels[VAR_7].param1 == VAR_6->dpm_levels[VAR_8].param1))
      VAR_6->dpm_levels[VAR_8].enabled = 0;
    }
   }
  }
 }
}
