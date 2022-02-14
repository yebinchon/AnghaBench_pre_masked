
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane_state {int crtc_h; int crtc_w; int crtc_y; int crtc_x; int src_h; int src_w; int src_y; int src_x; int fb; int state; } ;
struct drm_plane {TYPE_1__* state; } ;
struct TYPE_2__ {int crtc_h; int crtc_w; int crtc_y; int crtc_x; int src_h; int src_w; int src_y; int src_x; int fb; } ;


 struct drm_plane_state* FUNC_0 (int ,struct drm_plane*) ;
 int FUNC_1 (struct drm_plane*,struct drm_plane_state*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_0,
      struct drm_plane_state *VAR_1)
{
 struct drm_plane_state *VAR_2 =
  FUNC_0(VAR_1->state, VAR_0);

 FUNC_2(VAR_0->state->fb, VAR_1->fb);

 VAR_0->state->src_x = VAR_1->src_x;
 VAR_0->state->src_y = VAR_1->src_y;
 VAR_0->state->src_w = VAR_1->src_w;
 VAR_0->state->src_h = VAR_1->src_h;
 VAR_0->state->crtc_x = VAR_1->crtc_x;
 VAR_0->state->crtc_y = VAR_1->crtc_y;
 VAR_0->state->crtc_w = VAR_1->crtc_w;
 VAR_0->state->crtc_h = VAR_1->crtc_h;

 FUNC_1(VAR_0, VAR_2);
}
