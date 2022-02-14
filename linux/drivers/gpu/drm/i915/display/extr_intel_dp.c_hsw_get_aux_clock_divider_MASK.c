
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_dp {int dummy; } ;
struct intel_digital_port {scalar_t__ aux_ch; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 struct intel_digital_port* FUNC_1 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_2 (struct intel_dp*) ;
 int FUNC_3 (struct intel_dp*,int) ;

__attribute__((used)) static u32 FUNC_4(struct intel_dp *VAR_1, int VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_2(VAR_1);
 struct intel_digital_port *VAR_4 = FUNC_1(VAR_1);

 if (VAR_4->aux_ch != VAR_0 && FUNC_0(VAR_3)) {

  switch (VAR_2) {
  case 0: return 63;
  case 1: return 72;
  default: return 0;
  }
 }

 return FUNC_3(VAR_1, VAR_2);
}
