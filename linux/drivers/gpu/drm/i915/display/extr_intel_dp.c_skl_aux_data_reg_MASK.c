
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int dummy; } ;
struct intel_digital_port {int aux_ch; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
typedef enum aux_ch { ____Placeholder_aux_ch } aux_ch ;
 int FUNC_0 (int const,int) ;
 int FUNC_1 (int) ;
 struct intel_digital_port* FUNC_2 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_3 (struct intel_dp*) ;

__attribute__((used)) static i915_reg_t FUNC_4(struct intel_dp *VAR_0, int VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_0);
 struct intel_digital_port *VAR_3 = FUNC_2(VAR_0);
 enum aux_ch VAR_4 = VAR_3->aux_ch;

 switch (VAR_4) {
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  return FUNC_0(VAR_4, VAR_1);
 default:
  FUNC_1(VAR_4);
  return FUNC_0(133, VAR_1);
 }
}
