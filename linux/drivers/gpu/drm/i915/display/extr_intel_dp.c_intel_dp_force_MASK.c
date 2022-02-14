
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct intel_encoder {TYPE_2__ base; } ;
struct intel_dp {int dummy; } ;
struct intel_digital_port {struct intel_encoder base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int id; } ;
struct drm_connector {scalar_t__ status; int name; TYPE_1__ base; } ;
typedef int intel_wakeref_t ;
typedef enum intel_display_power_domain { ____Placeholder_intel_display_power_domain } intel_display_power_domain ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 struct intel_digital_port* FUNC_1 (struct intel_dp*) ;
 struct intel_dp* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct intel_digital_port*) ;
 int FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (struct drm_i915_private*,int,int ) ;
 int FUNC_6 (struct intel_dp*) ;
 int FUNC_7 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct drm_connector *VAR_1)
{
 struct intel_dp *VAR_2 = FUNC_2(VAR_1);
 struct intel_digital_port *VAR_3 = FUNC_1(VAR_2);
 struct intel_encoder *VAR_4 = &VAR_3->base;
 struct drm_i915_private *VAR_5 = FUNC_8(VAR_4->base.dev);
 enum intel_display_power_domain VAR_6 =
  FUNC_3(VAR_3);
 intel_wakeref_t VAR_7;

 FUNC_0("[CONNECTOR:%d:%s]\n",
        VAR_1->base.id, VAR_1->name);
 FUNC_7(VAR_2);

 if (VAR_1->status != VAR_0)
  return;

 VAR_7 = FUNC_4(VAR_5, VAR_6);

 FUNC_6(VAR_2);

 FUNC_5(VAR_5, VAR_6, VAR_7);
}
