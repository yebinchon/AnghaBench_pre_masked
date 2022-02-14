
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct intel_crtc_state {TYPE_1__* icl_port_dplls; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum phy { ____Placeholder_phy } phy ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;
typedef enum icl_port_dpll_id { ____Placeholder_icl_port_dpll_id } icl_port_dpll_id ;
struct TYPE_2__ {int pll; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct intel_crtc_state*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_10 (struct drm_i915_private*,int) ;
 int FUNC_11 (struct drm_i915_private*,int) ;
 int FUNC_12 (struct drm_i915_private*,int) ;

__attribute__((used)) static void FUNC_13(struct drm_i915_private *VAR_7,
    enum port VAR_8,
    struct intel_crtc_state *VAR_9)
{
 enum phy VAR_10 = FUNC_11(VAR_7, VAR_8);
 enum icl_port_dpll_id VAR_11;
 enum intel_dpll_id VAR_12;
 u32 VAR_13;

 if (FUNC_9(VAR_7, VAR_10)) {
  VAR_13 = FUNC_1(VAR_4) &
   FUNC_2(VAR_10);
  VAR_12 = VAR_13 >> FUNC_3(VAR_10);
  VAR_11 = VAR_5;
 } else if (FUNC_10(VAR_7, VAR_10)) {
  u32 VAR_14 = FUNC_1(FUNC_0(VAR_8)) & VAR_0;

  if (VAR_14 == VAR_1) {
   VAR_12 = FUNC_7(FUNC_12(VAR_7,
            VAR_8));
   VAR_11 = VAR_6;
  } else {
   FUNC_5(VAR_14 < VAR_2);
   VAR_12 = VAR_3;
   VAR_11 = VAR_5;
  }
 } else {
  FUNC_4(1, "Invalid port %x\n", VAR_8);
  return;
 }

 VAR_9->icl_port_dplls[VAR_11].pll =
  FUNC_8(VAR_7, VAR_12);

 FUNC_6(VAR_9, VAR_11);
}
