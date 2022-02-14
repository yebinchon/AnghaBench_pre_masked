
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {int dummy; } ;
struct ni_ps {int performance_level_count; TYPE_1__* performance_levels; } ;
struct evergreen_power_info {int requested_rps; } ;
struct TYPE_2__ {int mclk; } ;


 struct evergreen_power_info* FUNC_0 (struct radeon_device*) ;
 struct ni_ps* FUNC_1 (int *) ;

u32 FUNC_2(struct radeon_device *VAR_0, bool VAR_1)
{
 struct evergreen_power_info *VAR_2 = FUNC_0(VAR_0);
 struct ni_ps *VAR_3 = FUNC_1(&VAR_2->requested_rps);

 if (VAR_1)
  return VAR_3->performance_levels[0].mclk;
 else
  return VAR_3->performance_levels[VAR_3->performance_level_count - 1].mclk;
}
