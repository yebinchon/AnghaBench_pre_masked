
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trinity_power_info {scalar_t__ enable_gfx_power_gating; scalar_t__ uvd_dpm; } ;
struct radeon_ps {int dclk; int vclk; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct radeon_device*,int ,int ) ;
 struct trinity_power_info* FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,int) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_6 (struct radeon_device*,int) ;
 scalar_t__ FUNC_7 (struct radeon_ps*,struct radeon_ps*) ;
 scalar_t__ FUNC_8 (struct radeon_ps*) ;
 int FUNC_9 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_10(struct radeon_device *VAR_1,
         struct radeon_ps *VAR_2,
         struct radeon_ps *VAR_3)
{
 struct trinity_power_info *VAR_4 = FUNC_3(VAR_1);

 if (VAR_4->enable_gfx_power_gating) {
  FUNC_4(VAR_1, 0);
 }

 if (VAR_4->uvd_dpm) {
  if (FUNC_8(VAR_2) &&
      !FUNC_8(VAR_3)) {
   FUNC_6(VAR_1, 0);
  } else if (!FUNC_8(VAR_2)) {
   FUNC_5(VAR_1, VAR_2);

   if (FUNC_8(VAR_3)) {
    u32 VAR_5 = FUNC_0(VAR_0);
    VAR_5 &= 0xfffffffd;
    FUNC_1(VAR_0, VAR_5);

    FUNC_2(VAR_1, VAR_2->vclk, VAR_2->dclk);

    FUNC_6(VAR_1, 3000);
   }
  }
  FUNC_9(VAR_1);
 } else {
  if (FUNC_8(VAR_2) ||
      FUNC_7(VAR_2, VAR_3))
   return;

  FUNC_2(VAR_1, VAR_2->vclk, VAR_2->dclk);
 }

 if (VAR_4->enable_gfx_power_gating) {
  FUNC_4(VAR_1, 1);
 }
}
