
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


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_device*,struct vc4_exec_info*,struct ww_acquire_ctx*) ;
 int FUNC_2 (struct ww_acquire_ctx*) ;
 int FUNC_3 (struct ww_acquire_ctx*,int *) ;
 int FUNC_4 (int *,struct ww_acquire_ctx*) ;
 int FUNC_5 (int *,struct ww_acquire_ctx*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct drm_device *VAR_2,
    struct vc4_exec_info *VAR_3,
    struct ww_acquire_ctx *VAR_4)
{
 int VAR_5 = -1;
 int VAR_6, VAR_7;
 struct drm_gem_object *VAR_8;

 FUNC_3(VAR_4, &VAR_1);

retry:
 if (VAR_5 != -1) {
  VAR_8 = &VAR_3->bo[VAR_5]->base;
  VAR_7 = FUNC_5(&VAR_8->resv->lock,
             VAR_4);
  if (VAR_7) {
   FUNC_2(VAR_4);
   return VAR_7;
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_3->bo_count; VAR_6++) {
  if (VAR_6 == VAR_5)
   continue;

  VAR_8 = &VAR_3->bo[VAR_6]->base;

  VAR_7 = FUNC_4(&VAR_8->resv->lock, VAR_4);
  if (VAR_7) {
   int VAR_9;

   for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
    VAR_8 = &VAR_3->bo[VAR_9]->base;
    FUNC_6(&VAR_8->resv->lock);
   }

   if (VAR_5 != -1 && VAR_5 >= VAR_6) {
    VAR_8 = &VAR_3->bo[VAR_5]->base;

    FUNC_6(&VAR_8->resv->lock);
   }

   if (VAR_7 == -VAR_0) {
    VAR_5 = VAR_6;
    goto retry;
   }

   FUNC_2(VAR_4);
   return VAR_7;
  }
 }

 FUNC_2(VAR_4);




 for (VAR_6 = 0; VAR_6 < VAR_3->bo_count; VAR_6++) {
  VAR_8 = &VAR_3->bo[VAR_6]->base;

  VAR_7 = FUNC_0(VAR_8->resv, 1);
  if (VAR_7) {
   FUNC_1(VAR_2, VAR_3, VAR_4);
   return VAR_7;
  }
 }

 return 0;
}
