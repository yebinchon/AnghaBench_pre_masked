
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct intel_encoder {int port; } ;
struct intel_dp {int dummy; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_2__ {struct intel_encoder base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_5 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_6 (struct intel_dp*) ;
 int FUNC_7 (struct intel_encoder*) ;

u8
FUNC_8(struct intel_dp *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_6(VAR_3);
 struct intel_encoder *VAR_5 = &FUNC_5(VAR_3)->base;
 enum port VAR_6 = VAR_5->port;

 if (FUNC_0(VAR_4))
  return FUNC_7(VAR_5);
 else if (FUNC_4(VAR_4) || FUNC_2(VAR_4))
  return VAR_1;
 else if (FUNC_3(VAR_4) && VAR_6 == VAR_2)
  return VAR_0;
 else if (FUNC_1(VAR_4) && VAR_6 != VAR_2)
  return VAR_1;
 else
  return VAR_0;
}
