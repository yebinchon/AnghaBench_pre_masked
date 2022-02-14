
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ active; TYPE_1__* crtc; } ;
struct intel_crtc_state {scalar_t__ port_clock; scalar_t__ shared_dpll; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(const struct intel_crtc_state *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_1(VAR_0->base.crtc->dev);
 return FUNC_0(VAR_1, 6) &&
  VAR_0->base.active &&
  VAR_0->shared_dpll &&
  VAR_0->port_clock == 0;
}
