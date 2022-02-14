
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_crtc_state {int shared_dpll; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;







 int FUNC_3 (struct drm_i915_private*,int) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_6,
    enum port VAR_7,
    struct intel_crtc_state *VAR_8)
{
 enum intel_dpll_id VAR_9;
 u32 VAR_10 = FUNC_0(FUNC_2(VAR_7));

 switch (VAR_10) {
 case 129:
  VAR_9 = VAR_4;
  break;
 case 128:
  VAR_9 = VAR_5;
  break;
 case 130:
  VAR_9 = VAR_3;
  break;
 case 132:
  VAR_9 = VAR_2;
  break;
 case 134:
  VAR_9 = VAR_0;
  break;
 case 133:
  VAR_9 = VAR_1;
  break;
 default:
  FUNC_1(VAR_10);

 case 131:
  return;
 }

 VAR_8->shared_dpll = FUNC_3(VAR_6, VAR_9);
}
