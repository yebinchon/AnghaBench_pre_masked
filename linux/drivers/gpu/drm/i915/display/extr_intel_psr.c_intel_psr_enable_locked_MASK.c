
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_dp {int dummy; } ;
struct TYPE_4__ {int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct TYPE_5__ {int enabled; scalar_t__ psr2_enabled; int pipe; scalar_t__ busy_frontbuffer_bits; struct intel_dp* dp; } ;
struct drm_i915_private {TYPE_2__ psr; } ;
struct TYPE_6__ {int pipe; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,struct intel_crtc_state const*) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (struct intel_dp*,struct intel_crtc_state const*) ;
 int FUNC_6 (struct intel_dp*,struct intel_crtc_state const*) ;
 TYPE_3__* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct drm_i915_private *VAR_0,
        const struct intel_crtc_state *VAR_1)
{
 struct intel_dp *VAR_2 = VAR_0->psr.dp;

 FUNC_1(VAR_0->psr.enabled);

 VAR_0->psr.psr2_enabled = FUNC_2(VAR_0, VAR_1);
 VAR_0->psr.busy_frontbuffer_bits = 0;
 VAR_0->psr.pipe = FUNC_7(VAR_1->base.crtc)->pipe;

 FUNC_0("Enabling PSR%s\n",
        VAR_0->psr.psr2_enabled ? "2" : "1");
 FUNC_6(VAR_2, VAR_1);
 FUNC_4(VAR_2);
 FUNC_5(VAR_2, VAR_1);
 VAR_0->psr.enabled = 1;

 FUNC_3(VAR_2);
}
