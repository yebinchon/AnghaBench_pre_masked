
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int mode_changed; int active_changed; int planes_changed; int connectors_changed; int color_mgmt_changed; int zpos_changed; int async_flip; int self_refresh_active; int active; int * event; int * commit; scalar_t__ gamma_lut; scalar_t__ ctm; scalar_t__ degamma_lut; scalar_t__ mode_blob; } ;
struct drm_crtc {int state; } ;


 int FUNC_0 (struct drm_crtc_state*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct drm_crtc_state*,int ,int) ;

void FUNC_3(struct drm_crtc *VAR_0,
           struct drm_crtc_state *VAR_1)
{
 FUNC_2(VAR_1, VAR_0->state, sizeof(*VAR_1));

 if (VAR_1->mode_blob)
  FUNC_1(VAR_1->mode_blob);
 if (VAR_1->degamma_lut)
  FUNC_1(VAR_1->degamma_lut);
 if (VAR_1->ctm)
  FUNC_1(VAR_1->ctm);
 if (VAR_1->gamma_lut)
  FUNC_1(VAR_1->gamma_lut);
 VAR_1->mode_changed = 0;
 VAR_1->active_changed = 0;
 VAR_1->planes_changed = 0;
 VAR_1->connectors_changed = 0;
 VAR_1->color_mgmt_changed = 0;
 VAR_1->zpos_changed = 0;
 VAR_1->commit = ((void*)0);
 VAR_1->event = ((void*)0);
 VAR_1->async_flip = 0;


 VAR_1->active = FUNC_0(VAR_1);
 VAR_1->self_refresh_active = 0;
}
