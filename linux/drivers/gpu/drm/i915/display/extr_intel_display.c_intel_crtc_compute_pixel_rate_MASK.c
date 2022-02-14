
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int crtc_clock; } ;
struct TYPE_6__ {TYPE_2__ adjusted_mode; TYPE_1__* crtc; } ;
struct intel_crtc_state {int pixel_rate; TYPE_3__ base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct intel_crtc_state *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_2(VAR_0->base.crtc->dev);

 if (FUNC_0(VAR_1))

  VAR_0->pixel_rate =
   VAR_0->base.adjusted_mode.crtc_clock;
 else
  VAR_0->pixel_rate =
   FUNC_1(VAR_0);
}
