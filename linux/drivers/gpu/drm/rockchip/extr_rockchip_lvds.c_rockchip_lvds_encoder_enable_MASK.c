
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rockchip_lvds {int panel; int dev; } ;
struct drm_encoder {TYPE_2__* crtc; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* state; } ;
struct TYPE_3__ {struct drm_display_mode adjusted_mode; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct rockchip_lvds* FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_6 (struct rockchip_lvds*) ;
 int FUNC_7 (struct rockchip_lvds*,struct drm_encoder*) ;

__attribute__((used)) static void FUNC_8(struct drm_encoder *VAR_0)
{
 struct rockchip_lvds *VAR_1 = FUNC_4(VAR_0);
 struct drm_display_mode *VAR_2 = &VAR_0->crtc->state->adjusted_mode;
 int VAR_3;

 FUNC_2(VAR_1->panel);
 VAR_3 = FUNC_6(VAR_1);
 if (VAR_3 < 0) {
  FUNC_0(VAR_1->dev, "failed to power on lvds: %d\n", VAR_3);
  FUNC_3(VAR_1->panel);
 }
 FUNC_5(VAR_0, VAR_2);
 FUNC_7(VAR_1, VAR_0);
 FUNC_1(VAR_1->panel);
}
