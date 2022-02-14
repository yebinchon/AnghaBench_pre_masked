
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int pos; int size; int enabled; } ;
struct drm_display_mode {scalar_t__ crtc_hdisplay; scalar_t__ crtc_vdisplay; } ;
struct TYPE_3__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {scalar_t__ pipe_src_w; scalar_t__ pipe_src_h; scalar_t__ output_format; TYPE_2__ pch_pfit; TYPE_1__ base; } ;
struct intel_crtc {int dummy; } ;





 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,int) ;

void
FUNC_1(struct intel_crtc *VAR_1,
   struct intel_crtc_state *VAR_2,
   int VAR_3)
{
 const struct drm_display_mode *VAR_4 = &VAR_2->base.adjusted_mode;
 int VAR_5 = 0, VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;


 if (VAR_4->crtc_hdisplay == VAR_2->pipe_src_w &&
     VAR_4->crtc_vdisplay == VAR_2->pipe_src_h &&
     VAR_2->output_format != VAR_0)
  goto done;

 switch (VAR_3) {
 case 129:
  VAR_7 = VAR_2->pipe_src_w;
  VAR_8 = VAR_2->pipe_src_h;
  VAR_5 = (VAR_4->crtc_hdisplay - VAR_7 + 1)/2;
  VAR_6 = (VAR_4->crtc_vdisplay - VAR_8 + 1)/2;
  break;

 case 130:

  {
   u32 VAR_9 = VAR_4->crtc_hdisplay
    * VAR_2->pipe_src_h;
   u32 VAR_10 = VAR_2->pipe_src_w
    * VAR_4->crtc_vdisplay;
   if (VAR_9 > VAR_10) {
    VAR_7 = VAR_10 / VAR_2->pipe_src_h;
    if (VAR_7 & 1)
     VAR_7++;
    VAR_5 = (VAR_4->crtc_hdisplay - VAR_7 + 1) / 2;
    VAR_6 = 0;
    VAR_8 = VAR_4->crtc_vdisplay;
   } else if (VAR_9 < VAR_10) {
    VAR_8 = VAR_9 / VAR_2->pipe_src_w;
    if (VAR_8 & 1)
        VAR_8++;
    VAR_6 = (VAR_4->crtc_vdisplay - VAR_8 + 1) / 2;
    VAR_5 = 0;
    VAR_7 = VAR_4->crtc_hdisplay;
   } else {
    VAR_5 = VAR_6 = 0;
    VAR_7 = VAR_4->crtc_hdisplay;
    VAR_8 = VAR_4->crtc_vdisplay;
   }
  }
  break;

 case 128:
  VAR_5 = VAR_6 = 0;
  VAR_7 = VAR_4->crtc_hdisplay;
  VAR_8 = VAR_4->crtc_vdisplay;
  break;

 default:
  FUNC_0(1, "bad panel fit mode: %d\n", VAR_3);
  return;
 }

done:
 VAR_2->pch_pfit.pos = (VAR_5 << 16) | VAR_6;
 VAR_2->pch_pfit.size = (VAR_7 << 16) | VAR_8;
 VAR_2->pch_pfit.enabled = VAR_2->pch_pfit.size != 0;
}
