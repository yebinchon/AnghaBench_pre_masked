
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
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int VAR_5 ;
 TYPE_1__* FUNC_4 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (struct intel_encoder*,int) ;

u8
FUNC_7(struct intel_dp *VAR_6, u8 VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_5(VAR_6);
 struct intel_encoder *VAR_9 = &FUNC_4(VAR_6)->base;
 enum port VAR_10 = VAR_9->port;

 if (FUNC_0(VAR_8)) {
  return FUNC_6(VAR_9, VAR_7);
 } else if (FUNC_3(VAR_8) || FUNC_1(VAR_8)) {
  switch (VAR_7 & VAR_4) {
  case 131:
   return VAR_3;
  case 130:
   return VAR_2;
  case 129:
   return VAR_1;
  case 128:
  default:
   return VAR_0;
  }
 } else if (FUNC_2(VAR_8) && VAR_10 == VAR_5) {
  switch (VAR_7 & VAR_4) {
  case 131:
   return VAR_2;
  case 130:
  case 129:
   return VAR_1;
  default:
   return VAR_0;
  }
 } else {
  switch (VAR_7 & VAR_4) {
  case 131:
   return VAR_2;
  case 130:
   return VAR_2;
  case 129:
   return VAR_1;
  case 128:
  default:
   return VAR_0;
  }
 }
}
