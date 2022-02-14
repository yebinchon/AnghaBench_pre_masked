
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int base; } ;
struct intel_dsi {scalar_t__ dual_link; scalar_t__ operation_mode; scalar_t__ pixel_overlap; } ;
struct drm_display_mode {int crtc_hdisplay; int crtc_htotal; int crtc_hblank_start; int crtc_hblank_end; int crtc_hsync_start; int crtc_hsync_end; int crtc_vtotal; int crtc_vblank_end; int crtc_vdisplay; int crtc_vblank_start; } ;
struct TYPE_2__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct intel_dsi* FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct intel_encoder *VAR_2,
      struct intel_crtc_state *VAR_3)
{
 struct intel_dsi *VAR_4 = FUNC_0(&VAR_2->base);
 struct drm_display_mode *VAR_5 =
     &VAR_3->base.adjusted_mode;

 if (VAR_4->dual_link) {
  VAR_5->crtc_hdisplay *= 2;
  if (VAR_4->dual_link == VAR_0)
   VAR_5->crtc_hdisplay -=
      VAR_4->pixel_overlap;
  VAR_5->crtc_htotal *= 2;
 }
 VAR_5->crtc_hblank_start = VAR_5->crtc_hdisplay;
 VAR_5->crtc_hblank_end = VAR_5->crtc_htotal;

 if (VAR_4->operation_mode == VAR_1) {
  if (VAR_4->dual_link) {
   VAR_5->crtc_hsync_start *= 2;
   VAR_5->crtc_hsync_end *= 2;
  }
 }
 VAR_5->crtc_vblank_start = VAR_5->crtc_vdisplay;
 VAR_5->crtc_vblank_end = VAR_5->crtc_vtotal;
}
