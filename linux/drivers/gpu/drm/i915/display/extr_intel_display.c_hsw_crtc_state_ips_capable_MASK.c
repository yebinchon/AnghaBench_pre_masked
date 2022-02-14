
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int crtc; } ;
struct intel_crtc_state {int pipe_bpp; int pixel_rate; TYPE_1__ base; } ;
struct TYPE_5__ {int dev; } ;
struct intel_crtc {TYPE_2__ base; } ;
struct drm_i915_private {int max_cdclk_freq; } ;
struct TYPE_6__ {int enable_ips; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct intel_crtc*) ;
 TYPE_3__ VAR_0 ;
 struct drm_i915_private* FUNC_2 (int ) ;
 struct intel_crtc* FUNC_3 (int ) ;

bool FUNC_4(const struct intel_crtc_state *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_3(VAR_1->base.crtc);
 struct drm_i915_private *VAR_3 = FUNC_2(VAR_2->base.dev);


 if (!FUNC_1(VAR_2))
  return 0;

 if (!VAR_0.enable_ips)
  return 0;

 if (VAR_1->pipe_bpp > 24)
  return 0;
 if (FUNC_0(VAR_3) &&
     VAR_1->pixel_rate > VAR_3->max_cdclk_freq * 95 / 100)
  return 0;

 return 1;
}
