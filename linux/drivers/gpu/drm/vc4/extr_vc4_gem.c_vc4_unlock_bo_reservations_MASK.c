
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ww_acquire_ctx {int dummy; } ;
struct vc4_exec_info {int bo_count; TYPE_1__** bo; } ;
struct drm_gem_object {TYPE_2__* resv; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {struct drm_gem_object base; } ;


 int FUNC_0 (struct ww_acquire_ctx*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct drm_device *VAR_0,
      struct vc4_exec_info *VAR_1,
      struct ww_acquire_ctx *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->bo_count; VAR_3++) {
  struct drm_gem_object *VAR_4 = &VAR_1->bo[VAR_3]->base;

  FUNC_1(&VAR_4->resv->lock);
 }

 FUNC_0(VAR_2);
}
