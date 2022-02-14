
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int level; int pwm; } ;
struct intel_panel {TYPE_1__ backlight; } ;
struct intel_crtc_state {int dummy; } ;
struct intel_connector {struct intel_panel panel; } ;
struct drm_connector_state {int connector; } ;


 int FUNC_0 (struct drm_connector_state const*,int ) ;
 int FUNC_1 (int ) ;
 struct intel_connector* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const struct intel_crtc_state *VAR_0,
     const struct drm_connector_state *VAR_1)
{
 struct intel_connector *VAR_2 = FUNC_2(VAR_1->connector);
 struct intel_panel *VAR_3 = &VAR_2->panel;

 FUNC_1(VAR_3->backlight.pwm);
 FUNC_0(VAR_1, VAR_3->backlight.level);
}
