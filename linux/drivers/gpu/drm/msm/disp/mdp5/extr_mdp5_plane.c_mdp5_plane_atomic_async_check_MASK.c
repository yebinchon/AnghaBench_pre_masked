
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdp5_plane_state {int hwpipe; } ;
struct drm_plane_state {scalar_t__ crtc; scalar_t__ src_w; scalar_t__ src_h; scalar_t__ crtc_w; scalar_t__ crtc_h; scalar_t__ fb; scalar_t__ visible; int state; } ;
struct drm_plane {TYPE_1__* state; } ;
struct drm_crtc_state {int active; } ;
struct TYPE_2__ {scalar_t__ crtc; scalar_t__ src_w; scalar_t__ src_h; scalar_t__ crtc_w; scalar_t__ crtc_h; scalar_t__ fb; scalar_t__ visible; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 struct drm_crtc_state* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct drm_plane_state*,struct drm_crtc_state*,int,int,int,int) ;
 struct mdp5_plane_state* FUNC_4 (struct drm_plane_state*) ;

__attribute__((used)) static int FUNC_5(struct drm_plane *VAR_1,
      struct drm_plane_state *VAR_2)
{
 struct mdp5_plane_state *VAR_3 = FUNC_4(VAR_2);
 struct drm_crtc_state *VAR_4;
 int VAR_5, VAR_6;
 int VAR_7;

 VAR_4 = FUNC_2(VAR_2->state,
       VAR_2->crtc);
 if (FUNC_1(!VAR_4))
  return -VAR_0;

 if (!VAR_4->active)
  return -VAR_0;

 VAR_3 = FUNC_4(VAR_2);


 if (!VAR_3->hwpipe)
  return -VAR_0;


 if (VAR_1->state->crtc != VAR_2->crtc ||
     VAR_1->state->src_w != VAR_2->src_w ||
     VAR_1->state->src_h != VAR_2->src_h ||
     VAR_1->state->crtc_w != VAR_2->crtc_w ||
     VAR_1->state->crtc_h != VAR_2->crtc_h ||
     !VAR_1->state->fb ||
     VAR_1->state->fb != VAR_2->fb)
  return -VAR_0;

 VAR_5 = FUNC_0(1, 8);
 VAR_6 = FUNC_0(8, 1);

 VAR_7 = FUNC_3(VAR_2, VAR_4,
        VAR_5, VAR_6,
        1, 1);
 if (VAR_7)
  return VAR_7;
 if (VAR_2->visible != VAR_1->state->visible)
  return -VAR_0;

 return 0;
}
