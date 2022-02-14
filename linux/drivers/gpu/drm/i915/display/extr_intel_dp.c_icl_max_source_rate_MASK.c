
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_dp {int dummy; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {int port; TYPE_1__ base; } ;
struct intel_digital_port {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum phy { ____Placeholder_phy } phy ;


 int FUNC_0 (struct drm_i915_private*) ;
 struct intel_digital_port* FUNC_1 (struct intel_dp*) ;
 int FUNC_2 (struct intel_dp*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct intel_dp *VAR_0)
{
 struct intel_digital_port *VAR_1 = FUNC_1(VAR_0);
 struct drm_i915_private *VAR_2 = FUNC_5(VAR_1->base.base.dev);
 enum phy VAR_3 = FUNC_4(VAR_2, VAR_1->base.port);

 if (FUNC_3(VAR_2, VAR_3) &&
     !FUNC_0(VAR_2) &&
     !FUNC_2(VAR_0))
  return 540000;

 return 810000;
}
