
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pwm; } ;
struct intel_panel {TYPE_1__ backlight; } ;
struct intel_connector {struct intel_panel panel; } ;
struct drm_connector_state {int connector; } ;


 int FUNC_0 (struct drm_connector_state const*,int ) ;
 int FUNC_1 (int ) ;
 struct intel_connector* FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(const struct drm_connector_state *VAR_0)
{
 struct intel_connector *VAR_1 = FUNC_2(VAR_0->connector);
 struct intel_panel *VAR_2 = &VAR_1->panel;


 FUNC_0(VAR_0, 0);
 FUNC_3(2000, 3000);
 FUNC_1(VAR_2->backlight.pwm);
}
