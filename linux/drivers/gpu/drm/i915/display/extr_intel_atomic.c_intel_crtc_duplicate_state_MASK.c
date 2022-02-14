
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc_state {int dummy; } ;
struct TYPE_2__ {int need_postvbl_update; } ;
struct intel_crtc_state {int update_pipe; int disable_lp_wm; int disable_cxsr; int update_wm_pre; int update_wm_post; int fb_changed; int fifo_changed; struct drm_crtc_state base; scalar_t__ update_planes; scalar_t__ fb_bits; TYPE_1__ wm; } ;
struct drm_crtc {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_crtc*,struct drm_crtc_state*) ;
 struct intel_crtc_state* FUNC_1 (int ,int,int ) ;

struct drm_crtc_state *
FUNC_2(struct drm_crtc *VAR_1)
{
 struct intel_crtc_state *VAR_2;

 VAR_2 = FUNC_1(VAR_1->state, sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(VAR_1, &VAR_2->base);

 VAR_2->update_pipe = 0;
 VAR_2->disable_lp_wm = 0;
 VAR_2->disable_cxsr = 0;
 VAR_2->update_wm_pre = 0;
 VAR_2->update_wm_post = 0;
 VAR_2->fb_changed = 0;
 VAR_2->fifo_changed = 0;
 VAR_2->wm.need_postvbl_update = 0;
 VAR_2->fb_bits = 0;
 VAR_2->update_planes = 0;

 return &VAR_2->base;
}
