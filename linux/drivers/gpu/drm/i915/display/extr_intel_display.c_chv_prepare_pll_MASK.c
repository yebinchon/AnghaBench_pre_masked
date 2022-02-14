
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int n; int m2; int m1; int p1; int p2; int vco; } ;
struct TYPE_5__ {int dpll; } ;
struct intel_crtc_state {TYPE_3__ dpll; TYPE_2__ dpll_hw_state; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
typedef enum dpio_channel { ____Placeholder_dpio_channel } dpio_channel ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_9 (int) ;
 int VAR_18 ;
 int FUNC_10 (int ,int) ;
 struct drm_i915_private* FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct drm_i915_private*) ;
 int FUNC_13 (struct drm_i915_private*) ;
 int FUNC_14 (struct drm_i915_private*,int,int ) ;
 int FUNC_15 (struct drm_i915_private*,int,int ,int) ;
 int FUNC_16 (int) ;

__attribute__((used)) static void FUNC_17(struct intel_crtc *VAR_19,
       const struct intel_crtc_state *VAR_20)
{
 struct drm_device *VAR_21 = VAR_19->base.dev;
 struct drm_i915_private *VAR_22 = FUNC_11(VAR_21);
 enum pipe VAR_23 = VAR_19->pipe;
 enum dpio_channel VAR_24 = FUNC_16(VAR_23);
 u32 VAR_25, VAR_26;
 u32 VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
 u32 VAR_33;
 int VAR_34;


 FUNC_10(FUNC_9(VAR_23),
     VAR_20->dpll_hw_state.dpll & ~VAR_18);


 if ((VAR_20->dpll_hw_state.dpll & VAR_18) == 0)
  return;

 VAR_27 = VAR_20->dpll.n;
 VAR_32 = VAR_20->dpll.m2 & 0x3fffff;
 VAR_28 = VAR_20->dpll.m1;
 VAR_29 = VAR_20->dpll.m2 >> 22;
 VAR_30 = VAR_20->dpll.p1;
 VAR_31 = VAR_20->dpll.p2;
 VAR_34 = VAR_20->dpll.vco;
 VAR_33 = 0;
 VAR_25 = 0;

 FUNC_12(VAR_22);


 FUNC_15(VAR_22, VAR_23, FUNC_0(VAR_24),
   5 << VAR_15 |
   VAR_30 << VAR_12 |
   VAR_31 << VAR_13 |
   1 << VAR_9);


 FUNC_15(VAR_22, VAR_23, FUNC_2(VAR_24), VAR_29);


 FUNC_15(VAR_22, VAR_23, FUNC_3(VAR_24),
   VAR_10 |
   1 << VAR_11);


 FUNC_15(VAR_22, VAR_23, FUNC_4(VAR_24), VAR_32);


 VAR_33 = FUNC_14(VAR_22, VAR_23, FUNC_5(VAR_24));
 VAR_33 &= ~(VAR_1 | VAR_3);
 VAR_33 |= (2 << VAR_2);
 if (VAR_32)
  VAR_33 |= VAR_3;
 FUNC_15(VAR_22, VAR_23, FUNC_5(VAR_24), VAR_33);


 VAR_33 = FUNC_14(VAR_22, VAR_23, FUNC_8(VAR_24));
 VAR_33 &= ~(VAR_6 |
     VAR_7);
 VAR_33 |= (0x5 << VAR_8);
 if (!VAR_32)
  VAR_33 |= VAR_7;
 FUNC_15(VAR_22, VAR_23, FUNC_8(VAR_24), VAR_33);


 if (VAR_34 == 5400000) {
  VAR_25 |= (0x3 << VAR_14);
  VAR_25 |= (0x8 << VAR_5);
  VAR_25 |= (0x1 << VAR_4);
  VAR_26 = 0x9;
 } else if (VAR_34 <= 6200000) {
  VAR_25 |= (0x5 << VAR_14);
  VAR_25 |= (0xB << VAR_5);
  VAR_25 |= (0x3 << VAR_4);
  VAR_26 = 0x9;
 } else if (VAR_34 <= 6480000) {
  VAR_25 |= (0x4 << VAR_14);
  VAR_25 |= (0x9 << VAR_5);
  VAR_25 |= (0x3 << VAR_4);
  VAR_26 = 0x8;
 } else {

  VAR_25 |= (0x4 << VAR_14);
  VAR_25 |= (0x9 << VAR_5);
  VAR_25 |= (0x3 << VAR_4);
  VAR_26 = 0;
 }
 FUNC_15(VAR_22, VAR_23, FUNC_6(VAR_24), VAR_25);

 VAR_33 = FUNC_14(VAR_22, VAR_23, FUNC_7(VAR_24));
 VAR_33 &= ~VAR_16;
 VAR_33 |= (VAR_26 << VAR_17);
 FUNC_15(VAR_22, VAR_23, FUNC_7(VAR_24), VAR_33);


 FUNC_15(VAR_22, VAR_23, FUNC_1(VAR_24),
   FUNC_14(VAR_22, VAR_23, FUNC_1(VAR_24)) |
   VAR_0);

 FUNC_13(VAR_22);
}
