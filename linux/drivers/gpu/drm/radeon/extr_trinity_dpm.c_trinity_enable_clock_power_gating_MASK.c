
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trinity_power_info {scalar_t__ enable_gfx_power_gating; scalar_t__ enable_gfx_dynamic_mgpg; scalar_t__ enable_gfx_clock_gating; scalar_t__ enable_mg_clock_gating; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (struct radeon_device*) ;
 struct trinity_power_info* FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (struct radeon_device*,int) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,int) ;
 int FUNC_7 (struct radeon_device*,int) ;
 int FUNC_8 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_9(struct radeon_device *VAR_0)
{
 struct trinity_power_info *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->enable_gfx_clock_gating)
  FUNC_0(VAR_0);
 if (VAR_1->enable_mg_clock_gating)
  FUNC_8(VAR_0);
 if (VAR_1->enable_gfx_power_gating)
  FUNC_5(VAR_0);
 if (VAR_1->enable_mg_clock_gating) {
  FUNC_6(VAR_0, 1);
  FUNC_7(VAR_0, 1);
 }
 if (VAR_1->enable_gfx_clock_gating)
  FUNC_2(VAR_0, 1);
 if (VAR_1->enable_gfx_dynamic_mgpg)
  FUNC_3(VAR_0, 1);
 if (VAR_1->enable_gfx_power_gating)
  FUNC_4(VAR_0, 1);
}
