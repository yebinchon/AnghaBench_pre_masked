
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sumo_ps {int num_levels; TYPE_1__* levels; } ;
struct sumo_power_info {int requested_rps; } ;
struct radeon_device {int dummy; } ;
struct TYPE_2__ {int sclk; } ;


 struct sumo_power_info* FUNC_0 (struct radeon_device*) ;
 struct sumo_ps* FUNC_1 (int *) ;

u32 FUNC_2(struct radeon_device *VAR_0, bool VAR_1)
{
 struct sumo_power_info *VAR_2 = FUNC_0(VAR_0);
 struct sumo_ps *VAR_3 = FUNC_1(&VAR_2->requested_rps);

 if (VAR_1)
  return VAR_3->levels[0].sclk;
 else
  return VAR_3->levels[VAR_3->num_levels - 1].sclk;
}
