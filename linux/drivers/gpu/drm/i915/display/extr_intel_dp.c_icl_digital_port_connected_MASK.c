
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_encoder {int hpd_pin; int port; TYPE_1__ base; } ;
struct intel_digital_port {int dummy; } ;
struct drm_i915_private {int dummy; } ;
typedef enum phy { ____Placeholder_phy } phy ;


 int FUNC_0 (int ) ;
 struct intel_digital_port* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct drm_i915_private*,struct intel_digital_port*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (struct intel_digital_port*) ;
 struct drm_i915_private* FUNC_7 (int ) ;

__attribute__((used)) static bool FUNC_8(struct intel_encoder *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_7(VAR_0->base.dev);
 struct intel_digital_port *VAR_2 = FUNC_1(&VAR_0->base);
 enum phy VAR_3 = FUNC_5(VAR_1, VAR_0->port);

 if (FUNC_3(VAR_1, VAR_3))
  return FUNC_2(VAR_1, VAR_2);
 else if (FUNC_4(VAR_1, VAR_3))
  return FUNC_6(VAR_2);
 else
  FUNC_0(VAR_0->hpd_pin);

 return 0;
}
