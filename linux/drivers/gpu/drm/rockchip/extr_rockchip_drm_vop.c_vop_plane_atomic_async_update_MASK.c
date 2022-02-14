
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop {int pending; int fb_unref_work; int reg_lock; scalar_t__ is_enabled; } ;
struct drm_plane_state {int fb; int src_w; int src_h; int src_y; int src_x; int crtc_w; int crtc_h; int crtc_y; int crtc_x; } ;
struct drm_plane {TYPE_1__* state; } ;
struct drm_framebuffer {int dummy; } ;
struct TYPE_2__ {int crtc; struct drm_framebuffer* fb; int src_w; int src_h; int src_y; int src_x; int crtc_w; int crtc_h; int crtc_y; int crtc_x; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,struct drm_framebuffer*) ;
 int FUNC_3 (struct drm_framebuffer*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct drm_framebuffer*,int ) ;
 struct vop* FUNC_8 (int ) ;
 int FUNC_9 (struct vop*) ;
 int FUNC_10 (struct drm_plane*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_11(struct drm_plane *VAR_1,
       struct drm_plane_state *VAR_2)
{
 struct vop *VAR_3 = FUNC_8(VAR_1->state->crtc);
 struct drm_framebuffer *VAR_4 = VAR_1->state->fb;

 VAR_1->state->crtc_x = VAR_2->crtc_x;
 VAR_1->state->crtc_y = VAR_2->crtc_y;
 VAR_1->state->crtc_h = VAR_2->crtc_h;
 VAR_1->state->crtc_w = VAR_2->crtc_w;
 VAR_1->state->src_x = VAR_2->src_x;
 VAR_1->state->src_y = VAR_2->src_y;
 VAR_1->state->src_h = VAR_2->src_h;
 VAR_1->state->src_w = VAR_2->src_w;
 FUNC_7(VAR_1->state->fb, VAR_2->fb);

 if (VAR_3->is_enabled) {
  FUNC_10(VAR_1, VAR_1->state);
  FUNC_5(&VAR_3->reg_lock);
  FUNC_9(VAR_3);
  FUNC_6(&VAR_3->reg_lock);
  if (VAR_4 && VAR_1->state->fb != VAR_4) {
   FUNC_3(VAR_4);
   FUNC_0(FUNC_1(VAR_1->state->crtc) != 0);
   FUNC_2(&VAR_3->fb_unref_work, VAR_4);
   FUNC_4(VAR_0, &VAR_3->pending);
  }
 }
}
