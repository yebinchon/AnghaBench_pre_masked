
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct ci_ps {int performance_level_count; TYPE_2__* performance_levels; } ;
struct TYPE_3__ {int mclk_table; int sclk_table; } ;
struct ci_power_info {TYPE_1__ dpm_table; } ;
struct TYPE_4__ {int pcie_lane; int pcie_gen; int mclk; int sclk; } ;


 int VAR_0 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 struct ci_ps* FUNC_1 (struct radeon_ps*) ;
 int FUNC_2 (struct radeon_device*,int ,int ,int ,int ) ;
 int FUNC_3 (struct radeon_device*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_1,
         struct radeon_ps *VAR_2)
{
 struct ci_ps *VAR_3 = FUNC_1(VAR_2);
 struct ci_power_info *VAR_4 = FUNC_0(VAR_1);
 u32 VAR_5;

 if (VAR_3->performance_level_count < 1)
  return -VAR_0;

 if (VAR_3->performance_level_count == 1)
  VAR_5 = 0;
 else
  VAR_5 = 1;

 FUNC_3(VAR_1,
      &VAR_4->dpm_table.sclk_table,
      VAR_3->performance_levels[0].sclk,
      VAR_3->performance_levels[VAR_5].sclk);

 FUNC_3(VAR_1,
      &VAR_4->dpm_table.mclk_table,
      VAR_3->performance_levels[0].mclk,
      VAR_3->performance_levels[VAR_5].mclk);

 FUNC_2(VAR_1,
    VAR_3->performance_levels[0].pcie_gen,
    VAR_3->performance_levels[0].pcie_lane,
    VAR_3->performance_levels[VAR_5].pcie_gen,
    VAR_3->performance_levels[VAR_5].pcie_lane);

 return 0;
}
