
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_hdmi {int clk_phy; int clk_pix; int mode; } ;
struct drm_display_mode {int clock; } ;
struct drm_bridge {struct sti_hdmi* driver_private; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,struct drm_display_mode const*,int) ;

__attribute__((used)) static void FUNC_4(struct drm_bridge *VAR_0,
         const struct drm_display_mode *VAR_1,
         const struct drm_display_mode *VAR_2)
{
 struct sti_hdmi *VAR_3 = VAR_0->driver_private;
 int VAR_4;

 FUNC_0("\n");


 FUNC_3(&VAR_3->mode, VAR_1, sizeof(struct drm_display_mode));


 VAR_4 = FUNC_2(VAR_3->clk_pix, VAR_1->clock * 1000);
 if (VAR_4 < 0) {
  FUNC_1("Cannot set rate (%dHz) for hdmi_pix clk\n",
     VAR_1->clock * 1000);
  return;
 }
 VAR_4 = FUNC_2(VAR_3->clk_phy, VAR_1->clock * 1000);
 if (VAR_4 < 0) {
  FUNC_1("Cannot set rate (%dHz) for hdmi_rejection_pll clk\n",
     VAR_1->clock * 1000);
  return;
 }
}
