
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_pipeline {int dummy; } ;
struct mdp5_ctl {int dummy; } ;
struct drm_plane_state {struct drm_framebuffer* fb; int crtc; int dst; int src; int crtc_y; int crtc_x; int src_y; int src_x; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct drm_framebuffer {int dummy; } ;


 int FUNC_0 (int) ;
 struct mdp5_ctl* FUNC_1 (int ) ;
 struct mdp5_pipeline* FUNC_2 (int ) ;
 int FUNC_3 (struct mdp5_ctl*,struct mdp5_pipeline*,int ,int) ;
 int FUNC_4 (struct drm_plane*) ;
 int FUNC_5 (struct drm_plane*,int ,struct drm_framebuffer*,int *,int *) ;
 scalar_t__ FUNC_6 (struct drm_plane_state*) ;
 int * FUNC_7 (struct drm_plane_state*) ;

__attribute__((used)) static void FUNC_8(struct drm_plane *VAR_0,
        struct drm_plane_state *VAR_1)
{
 struct drm_framebuffer *VAR_2 = VAR_0->state->fb;

 VAR_0->state->src_x = VAR_1->src_x;
 VAR_0->state->src_y = VAR_1->src_y;
 VAR_0->state->crtc_x = VAR_1->crtc_x;
 VAR_0->state->crtc_y = VAR_1->crtc_y;

 if (FUNC_6(VAR_1)) {
  struct mdp5_ctl *VAR_3;
  struct mdp5_pipeline *VAR_4 =
     FUNC_2(VAR_1->crtc);
  int VAR_5;

  VAR_5 = FUNC_5(VAR_0, VAR_1->crtc, VAR_1->fb,
    &VAR_1->src, &VAR_1->dst);
  FUNC_0(VAR_5 < 0);

  VAR_3 = FUNC_1(VAR_1->crtc);

  FUNC_3(VAR_3, VAR_4, FUNC_4(VAR_0), 1);
 }

 *FUNC_7(VAR_0->state) =
  *FUNC_7(VAR_1);

 VAR_1->fb = VAR_2;
}
