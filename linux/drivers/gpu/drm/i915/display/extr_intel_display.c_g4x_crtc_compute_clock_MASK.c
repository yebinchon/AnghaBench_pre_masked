
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_limit {int dummy; } ;
struct intel_crtc_state {int dpll; int port_clock; int clock_set; int dpll_hw_state; } ;
struct TYPE_3__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct TYPE_4__ {int lvds_ssc_freq; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct intel_limit const*,struct intel_crtc_state*,int ,int,int *,int *) ;
 int FUNC_3 (struct intel_crtc*,struct intel_crtc_state*,int *) ;
 scalar_t__ FUNC_4 (struct intel_crtc_state*,int ) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 struct intel_limit VAR_5 ;
 struct intel_limit VAR_6 ;
 struct intel_limit VAR_7 ;
 struct intel_limit VAR_8 ;
 struct intel_limit VAR_9 ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (int *,int ,int) ;
 struct drm_i915_private* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct intel_crtc *VAR_10,
      struct intel_crtc_state *VAR_11)
{
 struct drm_i915_private *VAR_12 = FUNC_8(VAR_10->base.dev);
 const struct intel_limit *VAR_13;
 int VAR_14 = 96000;

 FUNC_7(&VAR_11->dpll_hw_state, 0,
        sizeof(VAR_11->dpll_hw_state));

 if (FUNC_4(VAR_11, VAR_3)) {
  if (FUNC_6(VAR_12)) {
   VAR_14 = VAR_12->vbt.lvds_ssc_freq;
   FUNC_0("using SSC reference clock of %d kHz\n", VAR_14);
  }

  if (FUNC_5(VAR_12))
   VAR_13 = &VAR_5;
  else
   VAR_13 = &VAR_8;
 } else if (FUNC_4(VAR_11, VAR_2) ||
     FUNC_4(VAR_11, VAR_1)) {
  VAR_13 = &VAR_6;
 } else if (FUNC_4(VAR_11, VAR_4)) {
  VAR_13 = &VAR_7;
 } else {

  VAR_13 = &VAR_9;
 }

 if (!VAR_11->clock_set &&
     !FUNC_2(VAR_13, VAR_11, VAR_11->port_clock,
    VAR_14, ((void*)0), &VAR_11->dpll)) {
  FUNC_1("Couldn't find PLL settings for mode!\n");
  return -VAR_0;
 }

 FUNC_3(VAR_10, VAR_11, ((void*)0));

 return 0;
}
