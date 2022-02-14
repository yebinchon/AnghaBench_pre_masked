
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc_state {int shared_dpll; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;



 int FUNC_1 (struct drm_i915_private*,int) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_3,
    enum port VAR_4,
    struct intel_crtc_state *VAR_5)
{
 enum intel_dpll_id VAR_6;

 switch (VAR_4) {
 case 130:
  VAR_6 = VAR_0;
  break;
 case 129:
  VAR_6 = VAR_1;
  break;
 case 128:
  VAR_6 = VAR_2;
  break;
 default:
  FUNC_0("Incorrect port type\n");
  return;
 }

 VAR_5->shared_dpll = FUNC_1(VAR_3, VAR_6);
}
