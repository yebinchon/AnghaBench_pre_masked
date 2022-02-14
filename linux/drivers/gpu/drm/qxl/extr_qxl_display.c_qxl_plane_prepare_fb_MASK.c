
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


struct qxl_surface {scalar_t__ width; int height; int stride; } ;
struct qxl_device {TYPE_6__* dumb_shadow_bo; } ;
struct qxl_bo {TYPE_6__* shadow; scalar_t__ is_dumb; } ;
struct drm_plane_state {TYPE_3__* crtc; TYPE_2__* fb; } ;
struct drm_plane {scalar_t__ type; TYPE_1__* dev; } ;
struct drm_gem_object {int dummy; } ;
struct TYPE_11__ {int base; } ;
struct TYPE_10__ {scalar_t__ width; int height; } ;
struct TYPE_12__ {TYPE_5__ tbo; TYPE_4__ surf; } ;
struct TYPE_9__ {int index; } ;
struct TYPE_8__ {struct drm_gem_object** obj; } ;
struct TYPE_7__ {struct qxl_device* dev_private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct qxl_bo* FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct qxl_device*,int,int,int,int ,struct qxl_surface*,TYPE_6__**) ;
 int FUNC_4 (struct qxl_bo*) ;
 int FUNC_5 (struct qxl_device*,struct qxl_surface*) ;
 int FUNC_6 (struct qxl_device*,int ,struct qxl_bo*) ;

__attribute__((used)) static int FUNC_7(struct drm_plane *VAR_2,
    struct drm_plane_state *VAR_3)
{
 struct qxl_device *VAR_4 = VAR_2->dev->dev_private;
 struct drm_gem_object *VAR_5;
 struct qxl_bo *VAR_6;
 struct qxl_surface VAR_7;
 int VAR_8;

 if (!VAR_3->fb)
  return 0;

 VAR_5 = VAR_3->fb->obj[0];
 VAR_6 = FUNC_2(VAR_5);

 if (VAR_2->type == VAR_0 &&
     VAR_6->is_dumb) {
  FUNC_6(VAR_4, VAR_3->crtc->index,
         VAR_6);
  FUNC_5(VAR_4, &VAR_7);
  if (!VAR_4->dumb_shadow_bo ||
      VAR_4->dumb_shadow_bo->surf.width != VAR_7.width ||
      VAR_4->dumb_shadow_bo->surf.height != VAR_7.height) {
   if (VAR_4->dumb_shadow_bo) {
    FUNC_1
     (&VAR_4->dumb_shadow_bo->tbo.base);
    VAR_4->dumb_shadow_bo = ((void*)0);
   }
   FUNC_3(VAR_4, VAR_7.height * VAR_7.stride,
          1, 1, VAR_1, &VAR_7,
          &VAR_4->dumb_shadow_bo);
  }
  if (VAR_6->shadow != VAR_4->dumb_shadow_bo) {
   if (VAR_6->shadow) {
    FUNC_1
     (&VAR_6->shadow->tbo.base);
    VAR_6->shadow = ((void*)0);
   }
   FUNC_0(&VAR_4->dumb_shadow_bo->tbo.base);
   VAR_6->shadow = VAR_4->dumb_shadow_bo;
  }
 }

 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8)
  return VAR_8;

 return 0;
}
