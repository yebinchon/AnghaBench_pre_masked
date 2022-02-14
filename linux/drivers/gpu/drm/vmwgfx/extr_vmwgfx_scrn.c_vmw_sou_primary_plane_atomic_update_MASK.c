
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vmw_private {int dummy; } ;
struct vmw_framebuffer {scalar_t__ bo; } ;
struct vmw_fence_obj {int dummy; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {TYPE_1__* state; } ;
struct TYPE_7__ {int tv_usec; int tv_sec; } ;
struct TYPE_8__ {TYPE_2__ vbl; } ;
struct TYPE_10__ {struct drm_file* file_priv; } ;
struct drm_pending_vblank_event {TYPE_3__ event; TYPE_5__ base; } ;
struct drm_file {int dummy; } ;
struct drm_crtc {TYPE_4__* state; int dev; } ;
struct TYPE_9__ {struct drm_pending_vblank_event* event; } ;
struct TYPE_6__ {scalar_t__ fb; struct drm_crtc* crtc; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct drm_file*,struct vmw_fence_obj*,TYPE_5__*,int *,int *,int) ;
 int FUNC_3 (struct vmw_fence_obj**) ;
 struct vmw_framebuffer* FUNC_4 (scalar_t__) ;
 struct vmw_private* FUNC_5 (int ) ;
 int FUNC_6 (struct vmw_private*,struct drm_plane*,struct drm_plane_state*,struct vmw_framebuffer*,struct vmw_fence_obj**) ;
 int FUNC_7 (struct vmw_private*,struct drm_plane*,struct drm_plane_state*,struct vmw_framebuffer*,struct vmw_fence_obj**) ;

__attribute__((used)) static void
FUNC_8(struct drm_plane *VAR_0,
        struct drm_plane_state *VAR_1)
{
 struct drm_crtc *VAR_2 = VAR_0->state->crtc;
 struct drm_pending_vblank_event *VAR_3 = ((void*)0);
 struct vmw_fence_obj *VAR_4 = ((void*)0);
 int VAR_5;


 if (VAR_2 && VAR_0->state->fb) {
  struct vmw_private *VAR_6 = FUNC_5(VAR_2->dev);
  struct vmw_framebuffer *VAR_7 =
   FUNC_4(VAR_0->state->fb);

  if (VAR_7->bo)
   VAR_5 = FUNC_6(VAR_6, VAR_0,
            VAR_1, VAR_7, &VAR_4);
  else
   VAR_5 = FUNC_7(VAR_6, VAR_0,
          VAR_1, VAR_7,
          &VAR_4);
  if (VAR_5 != 0)
   FUNC_0("Failed to update screen.\n");
 } else {

  return;
 }


 VAR_3 = VAR_2->state->event;
 if (VAR_3 && VAR_4) {
  struct drm_file *VAR_8 = VAR_3->base.file_priv;

  VAR_5 = FUNC_2(VAR_8,
         VAR_4,
         &VAR_3->base,
         &VAR_3->event.vbl.tv_sec,
         &VAR_3->event.vbl.tv_usec,
         1);

  if (FUNC_1(VAR_5 != 0))
   FUNC_0("Failed to queue event on fence.\n");
  else
   VAR_2->state->event = ((void*)0);
 }

 if (VAR_4)
  FUNC_3(&VAR_4);
}
