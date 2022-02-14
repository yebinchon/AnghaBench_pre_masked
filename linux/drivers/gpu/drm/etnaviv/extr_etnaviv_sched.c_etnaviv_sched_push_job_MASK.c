
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* s_fence; } ;
struct etnaviv_gem_submit {scalar_t__ out_fence_id; TYPE_2__* gpu; TYPE_3__ sched_job; int refcount; int out_fence; int ctx; } ;
struct drm_sched_entity {int dummy; } ;
struct TYPE_7__ {int fence_lock; int fence_idr; } ;
struct TYPE_6__ {int finished; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,struct drm_sched_entity*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,struct drm_sched_entity*,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct drm_sched_entity *VAR_3,
      struct etnaviv_gem_submit *VAR_4)
{
 int VAR_5 = 0;






 FUNC_6(&VAR_4->gpu->fence_lock);

 VAR_5 = FUNC_3(&VAR_4->sched_job, VAR_3,
     VAR_4->ctx);
 if (VAR_5)
  goto out_unlock;

 VAR_4->out_fence = FUNC_0(&VAR_4->sched_job.s_fence->finished);
 VAR_4->out_fence_id = FUNC_4(&VAR_4->gpu->fence_idr,
      VAR_4->out_fence, 0,
      VAR_2, VAR_1);
 if (VAR_4->out_fence_id < 0) {
  FUNC_2(&VAR_4->sched_job);
  VAR_5 = -VAR_0;
  goto out_unlock;
 }


 FUNC_5(&VAR_4->refcount);

 FUNC_1(&VAR_4->sched_job, VAR_3);

out_unlock:
 FUNC_7(&VAR_4->gpu->fence_lock);

 return VAR_5;
}
