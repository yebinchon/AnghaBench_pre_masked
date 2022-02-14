
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct intel_encoder {TYPE_2__ base; } ;
struct drm_display_mode {int flags; int crtc_hdisplay; int crtc_hblank_start; } ;
struct TYPE_3__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {int has_pch_encoder; int pipe_bpp; int port_clock; scalar_t__ bw_constrained; int output_format; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int VAR_2 ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct intel_encoder *VAR_3,
      struct intel_crtc_state *VAR_4,
      struct drm_connector_state *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_2(VAR_3->base.dev);
 struct drm_display_mode *VAR_7 =
  &VAR_4->base.adjusted_mode;

 if (VAR_7->flags & VAR_0)
  return -VAR_1;


 if (VAR_7->crtc_hdisplay > 4096 ||
     VAR_7->crtc_hblank_start > 4096)
  return -VAR_1;

 VAR_4->has_pch_encoder = 1;
 VAR_4->output_format = VAR_2;


 if (FUNC_1(VAR_6)) {
  if (VAR_4->bw_constrained && VAR_4->pipe_bpp < 24) {
   FUNC_0("LPT only supports 24bpp\n");
   return -VAR_1;
  }

  VAR_4->pipe_bpp = 24;
 }


 VAR_4->port_clock = 135000 * 2;

 return 0;
}
