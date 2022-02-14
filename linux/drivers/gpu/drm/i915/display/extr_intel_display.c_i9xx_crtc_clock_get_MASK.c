
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int dpll; int fp0; int fp1; } ;
struct intel_crtc_state {int cpu_transcoder; int port_clock; TYPE_2__ dpll_hw_state; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct dpll {int m1; int n; int m2; int p1; int p2; } ;


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
 int FUNC_0 (char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int,struct dpll*) ;
 int FUNC_7 (struct drm_device*,struct intel_crtc_state*) ;
 int FUNC_8 (int,struct dpll*) ;
 struct drm_i915_private* FUNC_9 (struct drm_device*) ;

__attribute__((used)) static void FUNC_10(struct intel_crtc *VAR_23,
    struct intel_crtc_state *VAR_24)
{
 struct drm_device *VAR_25 = VAR_23->base.dev;
 struct drm_i915_private *VAR_26 = FUNC_9(VAR_25);
 int VAR_27 = VAR_24->cpu_transcoder;
 u32 VAR_28 = VAR_24->dpll_hw_state.dpll;
 u32 VAR_29;
 struct dpll VAR_30;
 int VAR_31;
 int VAR_32 = FUNC_7(VAR_25, VAR_24);

 if ((VAR_28 & VAR_0) == 0)
  VAR_29 = VAR_24->dpll_hw_state.fp0;
 else
  VAR_29 = VAR_24->dpll_hw_state.fp1;

 VAR_30.m1 = (VAR_29 & VAR_10) >> VAR_11;
 if (FUNC_4(VAR_26)) {
  VAR_30.n = FUNC_5((VAR_29 & VAR_17) >> VAR_16) - 1;
  VAR_30.m2 = (VAR_29 & VAR_14) >> VAR_13;
 } else {
  VAR_30.n = (VAR_29 & VAR_15) >> VAR_16;
  VAR_30.m2 = (VAR_29 & VAR_12) >> VAR_13;
 }

 if (!FUNC_2(VAR_26, 2)) {
  if (FUNC_4(VAR_26))
   VAR_30.p1 = FUNC_5((VAR_28 & VAR_6) >>
    VAR_8);
  else
   VAR_30.p1 = FUNC_5((VAR_28 & VAR_3) >>
          VAR_7);

  switch (VAR_28 & VAR_9) {
  case 129:
   VAR_30.p2 = VAR_28 & VAR_2 ?
    5 : 10;
   break;
  case 128:
   VAR_30.p2 = VAR_28 & VAR_1 ?
    7 : 14;
   break;
  default:
   FUNC_0("Unknown DPLL mode %08x in programmed "
      "mode\n", (int)(VAR_28 & VAR_9));
   return;
  }

  if (FUNC_4(VAR_26))
   VAR_31 = FUNC_8(VAR_32, &VAR_30);
  else
   VAR_31 = FUNC_6(VAR_32, &VAR_30);
 } else {
  u32 VAR_33 = FUNC_3(VAR_26) ? 0 : FUNC_1(VAR_18);
  bool VAR_34 = (VAR_27 == 1) && (VAR_33 & VAR_20);

  if (VAR_34) {
   VAR_30.p1 = FUNC_5((VAR_28 & VAR_5) >>
           VAR_7);

   if (VAR_33 & VAR_19)
    VAR_30.p2 = 7;
   else
    VAR_30.p2 = 14;
  } else {
   if (VAR_28 & VAR_21)
    VAR_30.p1 = 2;
   else {
    VAR_30.p1 = ((VAR_28 & VAR_4) >>
         VAR_7) + 2;
   }
   if (VAR_28 & VAR_22)
    VAR_30.p2 = 4;
   else
    VAR_30.p2 = 2;
  }

  VAR_31 = FUNC_6(VAR_32, &VAR_30);
 }






 VAR_24->port_clock = VAR_31;
}
