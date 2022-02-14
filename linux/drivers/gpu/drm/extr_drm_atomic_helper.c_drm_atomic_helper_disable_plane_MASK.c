
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_plane_state {TYPE_2__* state; TYPE_1__* crtc; } ;
struct drm_plane {int dev; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_atomic_state {struct drm_modeset_acquire_ctx* acquire_ctx; } ;
struct TYPE_4__ {int legacy_cursor_update; } ;
struct TYPE_3__ {struct drm_plane* cursor; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_plane_state*) ;
 int FUNC_1 (struct drm_plane_state*) ;
 int FUNC_2 (struct drm_plane*,struct drm_plane_state*) ;
 int FUNC_3 (struct drm_atomic_state*) ;
 struct drm_plane_state* FUNC_4 (struct drm_atomic_state*,struct drm_plane*) ;
 struct drm_atomic_state* FUNC_5 (int ) ;
 int FUNC_6 (struct drm_atomic_state*) ;

int FUNC_7(struct drm_plane *VAR_1,
        struct drm_modeset_acquire_ctx *VAR_2)
{
 struct drm_atomic_state *VAR_3;
 struct drm_plane_state *VAR_4;
 int VAR_5 = 0;

 VAR_3 = FUNC_5(VAR_1->dev);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->acquire_ctx = VAR_2;
 VAR_4 = FUNC_4(VAR_3, VAR_1);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  goto fail;
 }

 if (VAR_4->crtc && VAR_4->crtc->cursor == VAR_1)
  VAR_4->state->legacy_cursor_update = 1;

 VAR_5 = FUNC_2(VAR_1, VAR_4);
 if (VAR_5 != 0)
  goto fail;

 VAR_5 = FUNC_3(VAR_3);
fail:
 FUNC_6(VAR_3);
 return VAR_5;
}
