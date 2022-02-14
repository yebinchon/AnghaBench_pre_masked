
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {TYPE_3__* attached_connector; } ;
struct TYPE_9__ {int active; int crtc; } ;
struct intel_crtc_state {int cpu_transcoder; TYPE_4__ base; } ;
struct intel_crtc {int dummy; } ;
struct TYPE_10__ {scalar_t__ type; int refresh_rate_type; struct intel_dp* dp; } ;
struct drm_i915_private {TYPE_5__ drrs; } ;
typedef int i915_reg_t ;
typedef enum drrs_refresh_rate_type { ____Placeholder_drrs_refresh_rate_type } drrs_refresh_rate_type ;
struct TYPE_7__ {TYPE_1__* downclock_mode; } ;
struct TYPE_8__ {TYPE_2__ panel; } ;
struct TYPE_6__ {int vrefresh; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;



 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (struct intel_crtc_state const*,int ) ;
 struct intel_crtc* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct drm_i915_private *VAR_5,
        const struct intel_crtc_state *VAR_6,
        int VAR_7)
{
 struct intel_dp *VAR_8 = VAR_5->drrs.dp;
 struct intel_crtc *VAR_9 = FUNC_9(VAR_6->base.crtc);
 enum drrs_refresh_rate_type VAR_10 = 130;

 if (VAR_7 <= 0) {
  FUNC_0("Refresh rate should be positive non-zero.\n");
  return;
 }

 if (VAR_8 == ((void*)0)) {
  FUNC_0("DRRS not supported.\n");
  return;
 }

 if (!VAR_9) {
  FUNC_0("DRRS: intel_crtc not initialized\n");
  return;
 }

 if (VAR_5->drrs.type < VAR_4) {
  FUNC_0("Only Seamless DRRS supported.\n");
  return;
 }

 if (VAR_8->attached_connector->panel.downclock_mode->vrefresh ==
   VAR_7)
  VAR_10 = 129;

 if (VAR_10 == VAR_5->drrs.refresh_rate_type) {
  FUNC_0(
   "DRRS requested for previously set RR...ignoring\n");
  return;
 }

 if (!VAR_6->base.active) {
  FUNC_0("eDP encoder disabled. CRTC not Active\n");
  return;
 }

 if (FUNC_4(VAR_5) >= 8 && !FUNC_5(VAR_5)) {
  switch (VAR_10) {
  case 130:
   FUNC_8(VAR_6, VAR_0);
   break;
  case 129:
   FUNC_8(VAR_6, VAR_1);
   break;
  case 128:
  default:
   FUNC_1("Unsupported refreshrate type\n");
  }
 } else if (FUNC_4(VAR_5) > 6) {
  i915_reg_t VAR_11 = FUNC_7(VAR_6->cpu_transcoder);
  u32 VAR_12;

  VAR_12 = FUNC_2(VAR_11);
  if (VAR_10 > 130) {
   if (FUNC_6(VAR_5) || FUNC_5(VAR_5))
    VAR_12 |= VAR_3;
   else
    VAR_12 |= VAR_2;
  } else {
   if (FUNC_6(VAR_5) || FUNC_5(VAR_5))
    VAR_12 &= ~VAR_3;
   else
    VAR_12 &= ~VAR_2;
  }
  FUNC_3(VAR_11, VAR_12);
 }

 VAR_5->drrs.refresh_rate_type = VAR_10;

 FUNC_0("eDP Refresh Rate set to : %dHz\n", VAR_7);
}
