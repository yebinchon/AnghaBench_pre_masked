
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int dev; } ;
struct intel_encoder {TYPE_3__ base; } ;
struct intel_dsi {int pclk; scalar_t__ dual_link; } ;
struct TYPE_4__ {int crtc_clock; } ;
struct TYPE_5__ {TYPE_1__ adjusted_mode; int crtc; } ;
struct intel_crtc_state {int pipe_bpp; int output_types; TYPE_2__ base; int dpll_hw_state; int port_clock; } ;
struct intel_crtc {int dummy; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct intel_crtc*) ;
 int FUNC_2 (struct drm_i915_private*,int *) ;
 struct intel_dsi* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct intel_encoder*,struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 struct intel_crtc* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct intel_encoder *VAR_1,
     struct intel_crtc_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_5(VAR_1->base.dev);
 struct intel_crtc *VAR_4 = FUNC_6(VAR_2->base.crtc);
 struct intel_dsi *VAR_5 = FUNC_3(&VAR_1->base);


 VAR_2->port_clock =
  FUNC_2(VAR_3, &VAR_2->dpll_hw_state);

 VAR_2->base.adjusted_mode.crtc_clock = VAR_5->pclk;
 if (VAR_5->dual_link)
  VAR_2->base.adjusted_mode.crtc_clock *= 2;

 FUNC_4(VAR_1, VAR_2);
 VAR_2->output_types |= FUNC_0(VAR_0);
 VAR_2->pipe_bpp = FUNC_1(VAR_4);
}
