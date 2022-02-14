
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sumo_power_info {int disable_gfx_power_gating_in_uvd; scalar_t__ enable_gfx_power_gating; } ;
struct radeon_ps {int class2; int class; int dclk; int vclk; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct radeon_device*,int ,int ) ;
 struct sumo_power_info* FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,int) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_0,
      struct radeon_ps *VAR_1,
      struct radeon_ps *VAR_2)
{
 struct sumo_power_info *VAR_3 = FUNC_2(VAR_0);

 if (VAR_3->enable_gfx_power_gating) {
  FUNC_3(VAR_0, 0);
 }

 FUNC_1(VAR_0, VAR_1->vclk, VAR_1->dclk);

 if (VAR_3->enable_gfx_power_gating) {
  if (!VAR_3->disable_gfx_power_gating_in_uvd ||
      !FUNC_0(VAR_1->class, VAR_1->class2))
   FUNC_3(VAR_0, 1);
 }
}
