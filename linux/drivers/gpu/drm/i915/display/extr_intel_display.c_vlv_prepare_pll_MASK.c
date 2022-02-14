
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int n; int m1; int m2; int p1; int p2; } ;
struct TYPE_5__ {int dpll; } ;
struct intel_crtc_state {int port_clock; TYPE_3__ dpll; TYPE_2__ dpll_hw_state; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_16 ;
 scalar_t__ FUNC_8 (struct intel_crtc_state const*) ;
 scalar_t__ FUNC_9 (struct intel_crtc_state const*,int ) ;
 struct drm_i915_private* FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_i915_private*) ;
 int FUNC_12 (struct drm_i915_private*) ;
 int FUNC_13 (struct drm_i915_private*,int,int ) ;
 int FUNC_14 (struct drm_i915_private*,int,int ,int) ;
 int FUNC_15 (struct drm_i915_private*,int) ;

__attribute__((used)) static void FUNC_16(struct intel_crtc *VAR_17,
       const struct intel_crtc_state *VAR_18)
{
 struct drm_device *VAR_19 = VAR_17->base.dev;
 struct drm_i915_private *VAR_20 = FUNC_10(VAR_19);
 enum pipe VAR_21 = VAR_17->pipe;
 u32 VAR_22;
 u32 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 u32 VAR_28, VAR_29;


 FUNC_1(FUNC_0(VAR_21),
     VAR_18->dpll_hw_state.dpll &
     ~(VAR_10 | VAR_9));


 if ((VAR_18->dpll_hw_state.dpll & VAR_10) == 0)
  return;

 FUNC_11(VAR_20);

 VAR_23 = VAR_18->dpll.n;
 VAR_24 = VAR_18->dpll.m1;
 VAR_25 = VAR_18->dpll.m2;
 VAR_26 = VAR_18->dpll.p1;
 VAR_27 = VAR_18->dpll.p2;




 if (VAR_21 == VAR_14)
  FUNC_15(VAR_20, VAR_21);


 FUNC_14(VAR_20, VAR_21, VAR_16, 0x0100000f);


 VAR_29 = FUNC_13(VAR_20, VAR_21, FUNC_7(VAR_21));
 VAR_29 &= 0x00ffffff;
 FUNC_14(VAR_20, VAR_21, FUNC_7(VAR_21), VAR_29);


 FUNC_14(VAR_20, VAR_21, VAR_15, 0x610);


 VAR_22 = ((VAR_24 << VAR_2) | (VAR_25 & VAR_3));
 VAR_22 |= ((VAR_26 << VAR_5) | (VAR_27 << VAR_6));
 VAR_22 |= ((VAR_23 << VAR_4));
 VAR_22 |= (1 << VAR_1);






 VAR_22 |= (VAR_7 << VAR_8);
 FUNC_14(VAR_20, VAR_21, FUNC_4(VAR_21), VAR_22);

 VAR_22 |= VAR_0;
 FUNC_14(VAR_20, VAR_21, FUNC_4(VAR_21), VAR_22);


 if (VAR_18->port_clock == 162000 ||
     FUNC_9(VAR_18, VAR_11) ||
     FUNC_9(VAR_18, VAR_12))
  FUNC_14(VAR_20, VAR_21, FUNC_2(VAR_21),
     0x009f0003);
 else
  FUNC_14(VAR_20, VAR_21, FUNC_2(VAR_21),
     0x00d0000f);

 if (FUNC_8(VAR_18)) {

  if (VAR_21 == VAR_13)
   FUNC_14(VAR_20, VAR_21, FUNC_5(VAR_21),
      0x0df40000);
  else
   FUNC_14(VAR_20, VAR_21, FUNC_5(VAR_21),
      0x0df70000);
 } else {

  if (VAR_21 == VAR_13)
   FUNC_14(VAR_20, VAR_21, FUNC_5(VAR_21),
      0x0df70000);
  else
   FUNC_14(VAR_20, VAR_21, FUNC_5(VAR_21),
      0x0df40000);
 }

 VAR_28 = FUNC_13(VAR_20, VAR_21, FUNC_6(VAR_21));
 VAR_28 = (VAR_28 & 0x0000ff00) | 0x01c00000;
 if (FUNC_8(VAR_18))
  VAR_28 |= 0x01000000;
 FUNC_14(VAR_20, VAR_21, FUNC_6(VAR_21), VAR_28);

 FUNC_14(VAR_20, VAR_21, FUNC_3(VAR_21), 0x87871000);

 FUNC_12(VAR_20);
}
