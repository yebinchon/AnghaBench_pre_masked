
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun8i_dw_hdmi {int clk_tmds; TYPE_1__* quirks; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int crtc_clock; } ;
struct TYPE_2__ {scalar_t__ set_rate; } ;


 int FUNC_0 (int ,int) ;
 struct sun8i_dw_hdmi* FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_0,
        struct drm_display_mode *VAR_1,
        struct drm_display_mode *VAR_2)
{
 struct sun8i_dw_hdmi *VAR_3 = FUNC_1(VAR_0);

 if (VAR_3->quirks->set_rate)
  FUNC_0(VAR_3->clk_tmds, VAR_1->crtc_clock * 1000);
}
