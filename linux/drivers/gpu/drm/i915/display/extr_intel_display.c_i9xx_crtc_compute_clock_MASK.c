
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_limit {int dummy; } ;
struct intel_crtc_state {int dpll; int port_clock; int clock_set; int dpll_hw_state; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct intel_crtc {TYPE_2__ base; } ;
struct TYPE_3__ {int lvds_ssc_freq; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct intel_crtc*,struct intel_crtc_state*,int *) ;
 int FUNC_3 (struct intel_limit const*,struct intel_crtc_state*,int ,int,int *,int *) ;
 scalar_t__ FUNC_4 (struct intel_crtc_state*,int ) ;
 struct intel_limit VAR_2 ;
 struct intel_limit VAR_3 ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (int *,int ,int) ;
 struct drm_i915_private* FUNC_7 (struct drm_device*) ;

__attribute__((used)) static int FUNC_8(struct intel_crtc *VAR_4,
       struct intel_crtc_state *VAR_5)
{
 struct drm_device *VAR_6 = VAR_4->base.dev;
 struct drm_i915_private *VAR_7 = FUNC_7(VAR_6);
 const struct intel_limit *VAR_8;
 int VAR_9 = 96000;

 FUNC_6(&VAR_5->dpll_hw_state, 0,
        sizeof(VAR_5->dpll_hw_state));

 if (FUNC_4(VAR_5, VAR_1)) {
  if (FUNC_5(VAR_7)) {
   VAR_9 = VAR_7->vbt.lvds_ssc_freq;
   FUNC_0("using SSC reference clock of %d kHz\n", VAR_9);
  }

  VAR_8 = &VAR_2;
 } else {
  VAR_8 = &VAR_3;
 }

 if (!VAR_5->clock_set &&
     !FUNC_3(VAR_8, VAR_5, VAR_5->port_clock,
     VAR_9, ((void*)0), &VAR_5->dpll)) {
  FUNC_1("Couldn't find PLL settings for mode!\n");
  return -VAR_0;
 }

 FUNC_2(VAR_4, VAR_5, ((void*)0));

 return 0;
}
