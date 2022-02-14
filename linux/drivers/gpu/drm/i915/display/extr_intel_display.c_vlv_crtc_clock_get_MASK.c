
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 struct drm_i915_private* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int,struct dpll*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct intel_crtc *VAR_6,
          struct intel_crtc_state *VAR_7)
{
 struct drm_device *VAR_8 = VAR_6->base.dev;
 struct drm_i915_private *VAR_9 = FUNC_1(VAR_8);
 int VAR_10 = VAR_7->cpu_transcoder;
 struct dpll VAR_11;
 u32 VAR_12;
 int VAR_13 = 100000;


 if ((VAR_7->dpll_hw_state.dpll & VAR_5) == 0)
  return;

 FUNC_3(VAR_9);
 VAR_12 = FUNC_5(VAR_9, VAR_10, FUNC_0(VAR_10));
 FUNC_4(VAR_9);

 VAR_11.m1 = (VAR_12 >> VAR_0) & 7;
 VAR_11.m2 = VAR_12 & VAR_1;
 VAR_11.n = (VAR_12 >> VAR_2) & 0xf;
 VAR_11.p1 = (VAR_12 >> VAR_3) & 7;
 VAR_11.p2 = (VAR_12 >> VAR_4) & 0x1f;

 VAR_7->port_clock = FUNC_2(VAR_13, &VAR_11);
}
