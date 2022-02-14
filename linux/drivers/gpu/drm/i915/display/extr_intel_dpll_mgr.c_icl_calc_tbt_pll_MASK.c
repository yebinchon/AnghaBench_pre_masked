
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct skl_wrpll_params {int dummy; } ;
struct TYPE_6__ {TYPE_1__* crtc; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct TYPE_7__ {int ref; } ;
struct TYPE_8__ {TYPE_3__ hw; } ;
struct drm_i915_private {TYPE_4__ cdclk; } ;
struct TYPE_5__ {int dev; } ;


 struct skl_wrpll_params VAR_0 ;
 struct skl_wrpll_params VAR_1 ;
 struct drm_i915_private* FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct intel_crtc_state *VAR_2,
        struct skl_wrpll_params *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_0(VAR_2->base.crtc->dev);

 *VAR_3 = VAR_4->cdclk.hw.ref == 24000 ?
   VAR_1 : VAR_0;
 return 1;
}
