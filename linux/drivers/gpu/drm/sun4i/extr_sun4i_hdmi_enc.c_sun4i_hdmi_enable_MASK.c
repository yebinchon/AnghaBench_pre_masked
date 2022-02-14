
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sun4i_hdmi {scalar_t__ base; scalar_t__ hdmi_monitor; int tmds_clk; } ;
struct drm_encoder {TYPE_2__* crtc; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* state; } ;
struct TYPE_3__ {struct drm_display_mode adjusted_mode; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 struct sun4i_hdmi* FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (struct sun4i_hdmi*,struct drm_display_mode*) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct drm_encoder *VAR_5)
{
 struct drm_display_mode *VAR_6 = &VAR_5->crtc->state->adjusted_mode;
 struct sun4i_hdmi *VAR_7 = FUNC_4(VAR_5);
 u32 VAR_8 = 0;

 FUNC_0("Enabling the HDMI Output\n");

 FUNC_3(VAR_7->tmds_clk);

 FUNC_5(VAR_7, VAR_6);
 VAR_8 |= FUNC_2(0, VAR_0);
 VAR_8 |= FUNC_2(1, VAR_1);
 FUNC_6(VAR_8, VAR_7->base + FUNC_1(0));

 VAR_8 = VAR_2;
 if (VAR_7->hdmi_monitor)
  VAR_8 |= VAR_3;

 FUNC_6(VAR_8, VAR_7->base + VAR_4);
}
