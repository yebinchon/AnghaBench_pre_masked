
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_crtc_state {scalar_t__ port_clock; int clock_set; int dpll; } ;
struct drm_i915_private {int dummy; } ;
struct dp_link_dpll {scalar_t__ clock; int dpll; } ;


 int FUNC_0 (struct dp_link_dpll*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 struct dp_link_dpll* VAR_0 ;
 struct dp_link_dpll* VAR_1 ;
 struct dp_link_dpll* VAR_2 ;
 struct drm_i915_private* FUNC_5 (int ) ;
 struct dp_link_dpll* VAR_3 ;

__attribute__((used)) static void
FUNC_6(struct intel_encoder *VAR_4,
     struct intel_crtc_state *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_5(VAR_4->base.dev);
 const struct dp_link_dpll *VAR_7 = ((void*)0);
 int VAR_8, VAR_9 = 0;

 if (FUNC_3(VAR_6)) {
  VAR_7 = VAR_1;
  VAR_9 = FUNC_0(VAR_1);
 } else if (FUNC_1(VAR_6)) {
  VAR_7 = VAR_2;
  VAR_9 = FUNC_0(VAR_2);
 } else if (FUNC_2(VAR_6)) {
  VAR_7 = VAR_0;
  VAR_9 = FUNC_0(VAR_0);
 } else if (FUNC_4(VAR_6)) {
  VAR_7 = VAR_3;
  VAR_9 = FUNC_0(VAR_3);
 }

 if (VAR_7 && VAR_9) {
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
   if (VAR_5->port_clock == VAR_7[VAR_8].clock) {
    VAR_5->dpll = VAR_7[VAR_8].dpll;
    VAR_5->clock_set = 1;
    break;
   }
  }
 }
}
