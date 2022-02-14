
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* set ) (struct drm_connector_state const*,int ) ;} ;
struct intel_panel {TYPE_1__ backlight; } ;
struct intel_connector {struct intel_panel panel; } ;
struct drm_connector_state {int connector; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct intel_connector*,int ) ;
 int FUNC_2 (struct drm_connector_state const*,int ) ;
 struct intel_connector* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(const struct drm_connector_state *VAR_0, u32 VAR_1)
{
 struct intel_connector *VAR_2 = FUNC_3(VAR_0->connector);
 struct intel_panel *VAR_3 = &VAR_2->panel;

 FUNC_0("set backlight PWM = %d\n", VAR_1);

 VAR_1 = FUNC_1(VAR_2, VAR_1);
 VAR_3->backlight.set(VAR_0, VAR_1);
}
