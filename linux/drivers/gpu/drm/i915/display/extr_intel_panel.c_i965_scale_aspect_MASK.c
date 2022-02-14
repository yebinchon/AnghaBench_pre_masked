
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_display_mode {scalar_t__ crtc_hdisplay; scalar_t__ crtc_vdisplay; } ;
struct TYPE_2__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {scalar_t__ pipe_src_h; scalar_t__ pipe_src_w; TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(struct intel_crtc_state *VAR_4,
         u32 *VAR_5)
{
 const struct drm_display_mode *VAR_6 = &VAR_4->base.adjusted_mode;
 u32 VAR_7 = VAR_6->crtc_hdisplay *
  VAR_4->pipe_src_h;
 u32 VAR_8 = VAR_4->pipe_src_w *
  VAR_6->crtc_vdisplay;


 if (VAR_7 > VAR_8)
  *VAR_5 |= VAR_0 |
   VAR_3;
 else if (VAR_7 < VAR_8)
  *VAR_5 |= VAR_0 |
   VAR_2;
 else if (VAR_6->crtc_hdisplay != VAR_4->pipe_src_w)
  *VAR_5 |= VAR_0 | VAR_1;
}
