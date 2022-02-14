
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int dpll; } ;
struct intel_crtc_state {int cpu_transcoder; int port_clock; TYPE_2__ dpll_hw_state; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct dpll {int m1; int m2; int n; int p1; int p2; } ;
typedef enum dpio_channel { ____Placeholder_dpio_channel } dpio_channel ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int,struct dpll*) ;
 struct drm_i915_private* FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*,int,int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct intel_crtc *VAR_6,
          struct intel_crtc_state *VAR_7)
{
 struct drm_device *VAR_8 = VAR_6->base.dev;
 struct drm_i915_private *VAR_9 = FUNC_6(VAR_8);
 int VAR_10 = VAR_7->cpu_transcoder;
 enum dpio_channel VAR_11 = FUNC_10(VAR_10);
 struct dpll VAR_12;
 u32 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18 = 100000;


 if ((VAR_7->dpll_hw_state.dpll & VAR_5) == 0)
  return;

 FUNC_7(VAR_9);
 VAR_13 = FUNC_9(VAR_9, VAR_10, FUNC_0(VAR_11));
 VAR_14 = FUNC_9(VAR_9, VAR_10, FUNC_1(VAR_11));
 VAR_15 = FUNC_9(VAR_9, VAR_10, FUNC_2(VAR_11));
 VAR_16 = FUNC_9(VAR_9, VAR_10, FUNC_3(VAR_11));
 VAR_17 = FUNC_9(VAR_9, VAR_10, FUNC_4(VAR_11));
 FUNC_8(VAR_9);

 VAR_12.m1 = (VAR_15 & 0x7) == VAR_1 ? 2 : 0;
 VAR_12.m2 = (VAR_14 & 0xff) << 22;
 if (VAR_17 & VAR_0)
  VAR_12.m2 |= VAR_16 & 0x3fffff;
 VAR_12.n = (VAR_15 >> VAR_2) & 0xf;
 VAR_12.p1 = (VAR_13 >> VAR_3) & 0x7;
 VAR_12.p2 = (VAR_13 >> VAR_4) & 0x1f;

 VAR_7->port_clock = FUNC_5(VAR_18, &VAR_12);
}
