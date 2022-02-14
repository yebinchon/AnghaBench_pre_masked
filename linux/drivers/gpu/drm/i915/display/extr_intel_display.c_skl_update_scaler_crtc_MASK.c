
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int scaler_id; } ;
struct drm_display_mode {int crtc_vdisplay; int crtc_hdisplay; } ;
struct TYPE_3__ {int active; struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {scalar_t__ output_format; int pipe_src_h; int pipe_src_w; TYPE_2__ scaler_state; TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_crtc_state*,int,int ,int *,int ,int ,int ,int ,int *,int) ;

int FUNC_1(struct intel_crtc_state *VAR_2)
{
 const struct drm_display_mode *VAR_3 = &VAR_2->base.adjusted_mode;
 bool VAR_4 = 0;

 if (VAR_2->output_format == VAR_0)
  VAR_4 = 1;

 return FUNC_0(VAR_2, !VAR_2->base.active, VAR_1,
     &VAR_2->scaler_state.scaler_id,
     VAR_2->pipe_src_w, VAR_2->pipe_src_h,
     VAR_3->crtc_hdisplay,
     VAR_3->crtc_vdisplay, ((void*)0), VAR_4);
}
