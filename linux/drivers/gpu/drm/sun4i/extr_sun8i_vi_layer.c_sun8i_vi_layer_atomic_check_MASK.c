
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sun8i_vi_layer {int channel; TYPE_2__* mixer; } ;
struct drm_plane_state {int state; struct drm_crtc* crtc; } ;
struct drm_plane {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_4__ {TYPE_1__* cfg; } ;
struct TYPE_3__ {int scaler_mask; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 struct drm_crtc_state* FUNC_2 (int ,struct drm_crtc*) ;
 int FUNC_3 (struct drm_plane_state*,struct drm_crtc_state*,int,int,int,int) ;
 struct sun8i_vi_layer* FUNC_4 (struct drm_plane*) ;

__attribute__((used)) static int FUNC_5(struct drm_plane *VAR_4,
           struct drm_plane_state *VAR_5)
{
 struct sun8i_vi_layer *VAR_6 = FUNC_4(VAR_4);
 struct drm_crtc *VAR_7 = VAR_5->crtc;
 struct drm_crtc_state *VAR_8;
 int VAR_9, VAR_10;

 if (!VAR_7)
  return 0;

 VAR_8 = FUNC_2(VAR_5->state, VAR_7);
 if (FUNC_1(!VAR_8))
  return -VAR_1;

 VAR_9 = VAR_0;
 VAR_10 = VAR_0;

 if (VAR_6->mixer->cfg->scaler_mask & FUNC_0(VAR_6->channel)) {
  VAR_9 = VAR_3;
  VAR_10 = VAR_2;
 }

 return FUNC_3(VAR_5, VAR_8,
         VAR_9, VAR_10,
         1, 1);
}
