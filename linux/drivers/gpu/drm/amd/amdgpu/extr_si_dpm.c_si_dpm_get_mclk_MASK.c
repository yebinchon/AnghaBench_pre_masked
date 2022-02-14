
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct si_ps {int performance_level_count; TYPE_1__* performance_levels; } ;
struct evergreen_power_info {int requested_rps; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {int mclk; } ;


 struct evergreen_power_info* FUNC_0 (struct amdgpu_device*) ;
 struct si_ps* FUNC_1 (int *) ;

__attribute__((used)) static u32 FUNC_2(void *VAR_0, bool VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_0;
 struct evergreen_power_info *VAR_3 = FUNC_0(VAR_2);
 struct si_ps *VAR_4 = FUNC_1(&VAR_3->requested_rps);

 if (VAR_1)
  return VAR_4->performance_levels[0].mclk;
 else
  return VAR_4->performance_levels[VAR_4->performance_level_count - 1].mclk;
}
