
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vmw_screen_target_display_unit {int defined; TYPE_1__* display_srf; int cpp; int content_fb_type; } ;
struct vmw_private {int dummy; } ;
struct vmw_plane_state {int cpp; int content_fb_type; TYPE_1__* surf; } ;
struct vmw_framebuffer {scalar_t__ bo; } ;
struct vmw_fence_obj {int dummy; } ;
struct drm_plane_state {struct drm_crtc* crtc; } ;
struct drm_plane {TYPE_5__* state; } ;
struct TYPE_8__ {int tv_usec; int tv_sec; } ;
struct TYPE_9__ {TYPE_2__ vbl; } ;
struct TYPE_12__ {struct drm_file* file_priv; } ;
struct drm_pending_vblank_event {TYPE_3__ event; TYPE_6__ base; } ;
struct drm_file {int dummy; } ;
struct drm_crtc {TYPE_4__* state; int dev; } ;
struct TYPE_11__ {scalar_t__ fb; struct drm_crtc* crtc; } ;
struct TYPE_10__ {struct drm_pending_vblank_event* event; } ;
struct TYPE_7__ {int res; } ;


 int FUNC_0 (char*) ;
 struct vmw_screen_target_display_unit* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct drm_file*,struct vmw_fence_obj*,TYPE_6__*,int *,int *,int) ;
 int FUNC_3 (struct vmw_fence_obj**) ;
 struct vmw_framebuffer* FUNC_4 (scalar_t__) ;
 struct vmw_plane_state* FUNC_5 (TYPE_5__*) ;
 struct vmw_private* FUNC_6 (int ) ;
 int FUNC_7 (struct vmw_private*,struct vmw_screen_target_display_unit*,int *) ;
 int FUNC_8 (struct vmw_private*,struct drm_plane*,struct drm_plane_state*,struct vmw_framebuffer*,struct vmw_fence_obj**) ;
 int FUNC_9 (struct vmw_private*,struct drm_plane*,struct drm_plane_state*,struct vmw_framebuffer*,struct vmw_fence_obj**) ;
 int FUNC_10 (struct vmw_private*,struct vmw_screen_target_display_unit*) ;

__attribute__((used)) static void
FUNC_11(struct drm_plane *VAR_0,
         struct drm_plane_state *VAR_1)
{
 struct vmw_plane_state *VAR_2 = FUNC_5(VAR_0->state);
 struct drm_crtc *VAR_3 = VAR_0->state->crtc;
 struct vmw_screen_target_display_unit *VAR_4;
 struct drm_pending_vblank_event *VAR_5;
 struct vmw_fence_obj *VAR_6 = ((void*)0);
 struct vmw_private *VAR_7;
 int VAR_8;


 if (VAR_3 && VAR_0->state->fb) {
  struct vmw_framebuffer *VAR_9 =
   FUNC_4(VAR_0->state->fb);
  VAR_4 = FUNC_1(VAR_3);
  VAR_7 = FUNC_6(VAR_3->dev);

  VAR_4->display_srf = VAR_2->surf;
  VAR_4->content_fb_type = VAR_2->content_fb_type;
  VAR_4->cpp = VAR_2->cpp;

  VAR_8 = FUNC_7(VAR_7, VAR_4, &VAR_4->display_srf->res);
  if (VAR_8)
   FUNC_0("Failed to bind surface to STDU.\n");

  if (VAR_9->bo)
   VAR_8 = FUNC_8(VAR_7, VAR_0,
             VAR_1, VAR_9, &VAR_6);
  else
   VAR_8 = FUNC_9(VAR_7, VAR_0,
           VAR_1, VAR_9,
           &VAR_6);
  if (VAR_8)
   FUNC_0("Failed to update STDU.\n");
 } else {
  VAR_3 = VAR_1->crtc;
  VAR_4 = FUNC_1(VAR_3);
  VAR_7 = FUNC_6(VAR_3->dev);


  if (!VAR_4->defined)
   return;

  VAR_8 = FUNC_7(VAR_7, VAR_4, ((void*)0));
  if (VAR_8)
   FUNC_0("Failed to blank STDU\n");

  VAR_8 = FUNC_10(VAR_7, VAR_4);
  if (VAR_8)
   FUNC_0("Failed to update STDU.\n");

  return;
 }


 VAR_5 = VAR_3->state->event;
 if (VAR_5 && VAR_6) {
  struct drm_file *VAR_10 = VAR_5->base.file_priv;

  VAR_8 = FUNC_2(VAR_10,
         VAR_6,
         &VAR_5->base,
         &VAR_5->event.vbl.tv_sec,
         &VAR_5->event.vbl.tv_usec,
         1);
  if (VAR_8)
   FUNC_0("Failed to queue event on fence.\n");
  else
   VAR_3->state->event = ((void*)0);
 }

 if (VAR_6)
  FUNC_3(&VAR_6);
}
