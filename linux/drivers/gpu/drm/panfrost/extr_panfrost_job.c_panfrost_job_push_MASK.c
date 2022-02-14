
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ww_acquire_ctx {int dummy; } ;
struct TYPE_7__ {TYPE_2__* s_fence; } ;
struct panfrost_job {int bo_count; int bos; int render_done_fence; TYPE_3__ base; int implicit_fences; int refcount; TYPE_1__* file_priv; struct panfrost_device* pfdev; } ;
struct panfrost_device {int sched_lock; } ;
struct drm_sched_entity {int dummy; } ;
struct TYPE_6__ {int finished; } ;
struct TYPE_5__ {struct drm_sched_entity* sched_entity; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,struct ww_acquire_ctx*) ;
 int FUNC_2 (int ,int ,struct ww_acquire_ctx*) ;
 int FUNC_3 (TYPE_3__*,struct drm_sched_entity*) ;
 int FUNC_4 (TYPE_3__*,struct drm_sched_entity*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (struct panfrost_job*) ;

int FUNC_11(struct panfrost_job *VAR_0)
{
 struct panfrost_device *VAR_1 = VAR_0->pfdev;
 int VAR_2 = FUNC_10(VAR_0);
 struct drm_sched_entity *VAR_3 = &VAR_0->file_priv->sched_entity[VAR_2];
 struct ww_acquire_ctx VAR_4;
 int VAR_5 = 0;

 FUNC_6(&VAR_1->sched_lock);

 VAR_5 = FUNC_1(VAR_0->bos, VAR_0->bo_count,
         &VAR_4);
 if (VAR_5) {
  FUNC_7(&VAR_1->sched_lock);
  return VAR_5;
 }

 VAR_5 = FUNC_4(&VAR_0->base, VAR_3, ((void*)0));
 if (VAR_5) {
  FUNC_7(&VAR_1->sched_lock);
  goto unlock;
 }

 VAR_0->render_done_fence = FUNC_0(&VAR_0->base.s_fence->finished);

 FUNC_5(&VAR_0->refcount);

 FUNC_8(VAR_0->bos, VAR_0->bo_count,
           VAR_0->implicit_fences);

 FUNC_3(&VAR_0->base, VAR_3);

 FUNC_7(&VAR_1->sched_lock);

 FUNC_9(VAR_0->bos, VAR_0->bo_count,
          VAR_0->render_done_fence);

unlock:
 FUNC_2(VAR_0->bos, VAR_0->bo_count, &VAR_4);

 return VAR_5;
}
