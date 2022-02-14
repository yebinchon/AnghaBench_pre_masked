
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct TYPE_4__ {int pcie_speed_table; int mclk_table; int sclk_table; } ;
struct TYPE_3__ {int mclk_dpm_enable_mask; void* pcie_dpm_enable_mask; void* sclk_dpm_enable_mask; } ;
struct ci_power_info {int last_mclk_dpm_enable_mask; TYPE_2__ dpm_table; TYPE_1__ dpm_level_enable_mask; scalar_t__ uvd_enabled; } ;


 void* FUNC_0 (int *) ;
 struct ci_power_info* FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ps*) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_0,
          struct radeon_ps *VAR_1)
{
 struct ci_power_info *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_2->dpm_level_enable_mask.sclk_dpm_enable_mask =
  FUNC_0(&VAR_2->dpm_table.sclk_table);
 VAR_2->dpm_level_enable_mask.mclk_dpm_enable_mask =
  FUNC_0(&VAR_2->dpm_table.mclk_table);
 VAR_2->last_mclk_dpm_enable_mask =
  VAR_2->dpm_level_enable_mask.mclk_dpm_enable_mask;
 if (VAR_2->uvd_enabled) {
  if (VAR_2->dpm_level_enable_mask.mclk_dpm_enable_mask & 1)
   VAR_2->dpm_level_enable_mask.mclk_dpm_enable_mask &= 0xFFFFFFFE;
 }
 VAR_2->dpm_level_enable_mask.pcie_dpm_enable_mask =
  FUNC_0(&VAR_2->dpm_table.pcie_speed_table);

 return 0;
}
