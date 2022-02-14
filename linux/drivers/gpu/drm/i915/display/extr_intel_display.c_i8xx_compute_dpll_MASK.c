
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int dpll; } ;
struct dpll {int p1; int p2; } ;
struct intel_crtc_state {TYPE_2__ dpll_hw_state; struct dpll dpll; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct intel_crtc*,struct intel_crtc_state*,struct dpll*) ;
 scalar_t__ FUNC_2 (struct intel_crtc_state*,int ) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_4 (struct drm_device*) ;

__attribute__((used)) static void FUNC_5(struct intel_crtc *VAR_10,
         struct intel_crtc_state *VAR_11,
         struct dpll *VAR_12)
{
 struct drm_device *VAR_13 = VAR_10->base.dev;
 struct drm_i915_private *VAR_14 = FUNC_4(VAR_13);
 u32 VAR_15;
 struct dpll *VAR_16 = &VAR_11->dpll;

 FUNC_1(VAR_10, VAR_11, VAR_12);

 VAR_15 = VAR_3;

 if (FUNC_2(VAR_11, VAR_5)) {
  VAR_15 |= (1 << (VAR_16->p1 - 1)) << VAR_1;
 } else {
  if (VAR_16->p1 == 2)
   VAR_15 |= VAR_7;
  else
   VAR_15 |= (VAR_16->p1 - 2) << VAR_1;
  if (VAR_16->p2 == 4)
   VAR_15 |= VAR_8;
 }
 if (FUNC_0(VAR_14) ||
     FUNC_2(VAR_11, VAR_4))
  VAR_15 |= VAR_0;

 if (FUNC_2(VAR_11, VAR_5) &&
     FUNC_3(VAR_14))
  VAR_15 |= VAR_6;
 else
  VAR_15 |= VAR_9;

 VAR_15 |= VAR_2;
 VAR_11->dpll_hw_state.dpll = VAR_15;
}
