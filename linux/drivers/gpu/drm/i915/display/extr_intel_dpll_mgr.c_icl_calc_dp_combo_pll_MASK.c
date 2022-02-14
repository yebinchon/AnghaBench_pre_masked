
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
struct intel_crtc_state {int port_clock; TYPE_2__ base; } ;
struct icl_combo_pll_params {int clock; struct skl_wrpll_params wrpll; } ;
struct TYPE_7__ {int ref; } ;
struct TYPE_8__ {TYPE_3__ hw; } ;
struct drm_i915_private {TYPE_4__ cdclk; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (struct icl_combo_pll_params*) ;
 int FUNC_1 (int) ;
 struct icl_combo_pll_params* VAR_0 ;
 struct icl_combo_pll_params* VAR_1 ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct intel_crtc_state *VAR_2,
      struct skl_wrpll_params *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_2(VAR_2->base.crtc->dev);
 const struct icl_combo_pll_params *VAR_5 =
  VAR_4->cdclk.hw.ref == 24000 ?
  VAR_1 :
  VAR_0;
 int VAR_6 = VAR_2->port_clock;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
  if (VAR_6 == VAR_5[VAR_7].clock) {
   *VAR_3 = VAR_5[VAR_7].wrpll;
   return 1;
  }
 }

 FUNC_1(VAR_6);
 return 0;
}
