
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {int shared_dpll; TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (struct drm_i915_private*,int) ;
 int FUNC_9 (struct drm_i915_private*,int) ;
 int FUNC_10 (struct drm_i915_private*,int ) ;
 scalar_t__ FUNC_11 (struct intel_crtc_state const*,int ) ;
 scalar_t__ FUNC_12 (struct drm_i915_private*,int ,int ,int) ;
 int FUNC_13 (int) ;
 struct drm_i915_private* FUNC_14 (int ) ;
 struct intel_crtc* FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(const struct intel_crtc_state *VAR_13)
{
 struct intel_crtc *VAR_14 = FUNC_15(VAR_13->base.crtc);
 struct drm_i915_private *VAR_15 = FUNC_14(VAR_14->base.dev);
 enum pipe VAR_16 = VAR_14->pipe;
 i915_reg_t VAR_17;
 u32 VAR_18, VAR_19;


 FUNC_10(VAR_15, VAR_13->shared_dpll);


 FUNC_9(VAR_15, VAR_16);
 FUNC_8(VAR_15, VAR_16);

 if (FUNC_1(VAR_15)) {


  VAR_17 = FUNC_7(VAR_16);
  VAR_18 = FUNC_3(VAR_17);
  VAR_18 |= VAR_6;
  FUNC_4(VAR_17, VAR_18);
 }

 VAR_17 = FUNC_5(VAR_16);
 VAR_18 = FUNC_3(VAR_17);
 VAR_19 = FUNC_3(FUNC_6(VAR_16));

 if (FUNC_2(VAR_15)) {





  VAR_18 &= ~VAR_3;
  if (FUNC_11(VAR_13, VAR_0))
   VAR_18 |= VAR_2;
  else
   VAR_18 |= VAR_19 & VAR_3;
 }

 VAR_18 &= ~VAR_9;
 if ((VAR_19 & VAR_5) == VAR_4) {
  if (FUNC_2(VAR_15) &&
      FUNC_11(VAR_13, VAR_1))
   VAR_18 |= VAR_10;
  else
   VAR_18 |= VAR_8;
 } else {
  VAR_18 |= VAR_11;
 }

 FUNC_4(VAR_17, VAR_18 | VAR_7);
 if (FUNC_12(VAR_15, VAR_17, VAR_12, 100))
  FUNC_0("failed to enable transcoder %c\n", FUNC_13(VAR_16));
}
