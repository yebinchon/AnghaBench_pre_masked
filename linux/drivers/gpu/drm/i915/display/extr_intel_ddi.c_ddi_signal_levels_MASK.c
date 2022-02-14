
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {int type; TYPE_1__ base; } ;
struct intel_dp {int dummy; } ;
struct intel_digital_port {struct intel_encoder base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 struct intel_digital_port* FUNC_2 (struct intel_dp*) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_encoder*,int,int ) ;
 struct drm_i915_private* FUNC_5 (int ) ;

u32 FUNC_6(struct intel_dp *VAR_0)
{
 struct intel_digital_port *VAR_1 = FUNC_2(VAR_0);
 struct drm_i915_private *VAR_2 = FUNC_5(VAR_1->base.base.dev);
 struct intel_encoder *VAR_3 = &VAR_1->base;
 int VAR_4 = FUNC_3(VAR_0);

 if (FUNC_1(VAR_2))
  FUNC_4(VAR_3, VAR_4, VAR_3->type);

 return FUNC_0(VAR_4);
}
