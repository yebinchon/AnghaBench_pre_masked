
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_dp {int* psr_dpcd; } ;
struct TYPE_5__ {scalar_t__ port; } ;
struct intel_digital_port {TYPE_2__ base; } ;
struct drm_display_mode {int flags; int crtc_vtotal; int crtc_vdisplay; } ;
struct TYPE_4__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {int has_psr; int has_psr2; TYPE_1__ base; } ;
struct TYPE_6__ {scalar_t__ sink_not_reliable; struct intel_dp* dp; } ;
struct drm_i915_private {TYPE_3__ psr; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct intel_digital_port* FUNC_2 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (struct intel_dp*,struct intel_crtc_state*) ;
 int FUNC_6 (struct drm_display_mode const*,int) ;

void FUNC_7(struct intel_dp *VAR_2,
         struct intel_crtc_state *VAR_3)
{
 struct intel_digital_port *VAR_4 = FUNC_2(VAR_2);
 struct drm_i915_private *VAR_5 = FUNC_3(VAR_2);
 const struct drm_display_mode *VAR_6 =
  &VAR_3->base.adjusted_mode;
 int VAR_7;

 if (!FUNC_0(VAR_5))
  return;

 if (VAR_2 != VAR_5->psr.dp)
  return;
 if (VAR_4->base.port != VAR_1) {
  FUNC_1("PSR condition failed: Port not supported\n");
  return;
 }

 if (VAR_5->psr.sink_not_reliable) {
  FUNC_1("PSR sink implementation is not reliable\n");
  return;
 }

 if (VAR_6->flags & VAR_0) {
  FUNC_1("PSR condition failed: Interlaced mode enabled\n");
  return;
 }

 VAR_7 = FUNC_4(VAR_2->psr_dpcd);
 if (VAR_7 < 0) {
  FUNC_1("PSR condition failed: Invalid PSR setup time (0x%02x)\n",
         VAR_2->psr_dpcd[1]);
  return;
 }

 if (FUNC_6(VAR_6, VAR_7) >
     VAR_6->crtc_vtotal - VAR_6->crtc_vdisplay - 1) {
  FUNC_1("PSR condition failed: PSR setup time (%d us) too long\n",
         VAR_7);
  return;
 }

 VAR_3->has_psr = 1;
 VAR_3->has_psr2 = FUNC_5(VAR_2, VAR_3);
}
