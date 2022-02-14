
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_limit {int dummy; } ;
struct TYPE_5__ {int state; } ;
struct intel_crtc_state {int dpll; int port_clock; int clock_set; int has_pch_encoder; int dpll_hw_state; TYPE_2__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct intel_atomic_state {int dummy; } ;
struct TYPE_6__ {int lvds_ssc_freq; } ;
struct drm_i915_private {TYPE_3__ vbt; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct intel_limit const*,struct intel_crtc_state*,int ,int,int *,int *) ;
 scalar_t__ FUNC_3 (struct intel_crtc_state*,int ) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 struct intel_limit VAR_2 ;
 struct intel_limit VAR_3 ;
 struct intel_limit VAR_4 ;
 struct intel_limit VAR_5 ;
 struct intel_limit VAR_6 ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct intel_atomic_state*,struct intel_crtc*,int *) ;
 int FUNC_7 (struct intel_crtc*,struct intel_crtc_state*,int *) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int ) ;
 struct drm_i915_private* FUNC_10 (int ) ;
 struct intel_atomic_state* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct intel_crtc *VAR_7,
           struct intel_crtc_state *VAR_8)
{
 struct drm_i915_private *VAR_9 = FUNC_10(VAR_7->base.dev);
 struct intel_atomic_state *VAR_10 =
  FUNC_11(VAR_8->base.state);
 const struct intel_limit *VAR_11;
 int VAR_12 = 120000;

 FUNC_8(&VAR_8->dpll_hw_state, 0,
        sizeof(VAR_8->dpll_hw_state));


 if (!VAR_8->has_pch_encoder)
  return 0;

 if (FUNC_3(VAR_8, VAR_1)) {
  if (FUNC_5(VAR_9)) {
   FUNC_0("using SSC reference clock of %d kHz\n",
          VAR_9->vbt.lvds_ssc_freq);
   VAR_12 = VAR_9->vbt.lvds_ssc_freq;
  }

  if (FUNC_4(VAR_9)) {
   if (VAR_12 == 100000)
    VAR_11 = &VAR_4;
   else
    VAR_11 = &VAR_3;
  } else {
   if (VAR_12 == 100000)
    VAR_11 = &VAR_6;
   else
    VAR_11 = &VAR_5;
  }
 } else {
  VAR_11 = &VAR_2;
 }

 if (!VAR_8->clock_set &&
     !FUNC_2(VAR_11, VAR_8, VAR_8->port_clock,
    VAR_12, ((void*)0), &VAR_8->dpll)) {
  FUNC_1("Couldn't find PLL settings for mode!\n");
  return -VAR_0;
 }

 FUNC_7(VAR_7, VAR_8, ((void*)0));

 if (!FUNC_6(VAR_10, VAR_7, ((void*)0))) {
  FUNC_0("failed to find PLL for pipe %c\n",
         FUNC_9(VAR_7->pipe));
  return -VAR_0;
 }

 return 0;
}
