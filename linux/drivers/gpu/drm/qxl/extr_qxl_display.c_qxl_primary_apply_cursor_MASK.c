
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qxl_release {int dummy; } ;
struct qxl_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_7__ {int visible; int shape; TYPE_1__ position; } ;
struct TYPE_8__ {TYPE_3__ set; } ;
struct qxl_cursor_cmd {int release_info; TYPE_4__ u; int type; } ;
struct qxl_crtc {int cursor_bo; } ;
struct drm_plane {TYPE_2__* state; struct drm_device* dev; } ;
struct drm_framebuffer {scalar_t__ hot_y; scalar_t__ hot_x; } ;
struct drm_device {struct qxl_device* dev_private; } ;
struct TYPE_6__ {scalar_t__ crtc_y; scalar_t__ crtc_x; int crtc; struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qxl_device*,int,int ,struct qxl_release**,int *) ;
 int FUNC_1 (struct qxl_device*,int ,int ) ;
 int FUNC_2 (struct qxl_device*,struct qxl_release*,int ,int) ;
 int FUNC_3 (struct qxl_release*) ;
 int FUNC_4 (struct qxl_device*,struct qxl_release*) ;
 int FUNC_5 (struct qxl_release*,int ) ;
 scalar_t__ FUNC_6 (struct qxl_device*,struct qxl_release*) ;
 int FUNC_7 (struct qxl_release*,int) ;
 int FUNC_8 (struct qxl_device*,struct qxl_release*,int *) ;
 struct qxl_crtc* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct drm_plane *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->dev;
 struct qxl_device *VAR_5 = VAR_4->dev_private;
 struct drm_framebuffer *VAR_6 = VAR_3->state->fb;
 struct qxl_crtc *VAR_7 = FUNC_9(VAR_3->state->crtc);
 struct qxl_cursor_cmd *VAR_8;
 struct qxl_release *VAR_9;
 int VAR_10 = 0;

 if (!VAR_7->cursor_bo)
  return 0;

 VAR_10 = FUNC_0(VAR_5, sizeof(*VAR_8),
      VAR_2,
      &VAR_9, ((void*)0));
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_5(VAR_9, VAR_7->cursor_bo);
 if (VAR_10)
  goto out_free_release;

 VAR_10 = FUNC_7(VAR_9, 0);
 if (VAR_10)
  goto out_free_release;

 VAR_8 = (struct qxl_cursor_cmd *)FUNC_6(VAR_5, VAR_9);
 VAR_8->type = VAR_1;
 VAR_8->u.set.position.x = VAR_3->state->crtc_x + VAR_6->hot_x;
 VAR_8->u.set.position.y = VAR_3->state->crtc_y + VAR_6->hot_y;

 VAR_8->u.set.shape = FUNC_1(VAR_5, VAR_7->cursor_bo, 0);

 VAR_8->u.set.visible = 1;
 FUNC_8(VAR_5, VAR_9, &VAR_8->release_info);

 FUNC_2(VAR_5, VAR_9, VAR_0, 0);
 FUNC_3(VAR_9);

 return VAR_10;

out_free_release:
 FUNC_4(VAR_5, VAR_9);
 return VAR_10;
}
