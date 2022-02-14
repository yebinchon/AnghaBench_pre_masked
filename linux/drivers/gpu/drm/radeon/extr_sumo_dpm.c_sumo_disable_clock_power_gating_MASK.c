
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sumo_power_info {scalar_t__ enable_mg_clock_gating; scalar_t__ enable_gfx_power_gating; scalar_t__ enable_gfx_clock_gating; } ;
struct radeon_device {int dummy; } ;


 struct sumo_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*,int) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_0)
{
 struct sumo_power_info *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->enable_gfx_clock_gating)
  FUNC_1(VAR_0, 0);
 if (VAR_1->enable_gfx_power_gating)
  FUNC_2(VAR_0, 0);
 if (VAR_1->enable_mg_clock_gating)
  FUNC_3(VAR_0, 0);
}
