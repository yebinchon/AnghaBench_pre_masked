
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_sched_entity {TYPE_2__* rq; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_ring {int dummy; } ;
struct TYPE_7__ {int s_priority; TYPE_1__* s_fence; } ;
struct amdgpu_job {TYPE_3__ base; void* owner; } ;
typedef enum drm_sched_priority { ____Placeholder_drm_sched_priority } drm_sched_priority ;
struct TYPE_6__ {int sched; } ;
struct TYPE_5__ {int finished; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_job*) ;
 int FUNC_1 (struct amdgpu_ring*,int) ;
 struct dma_fence* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,struct drm_sched_entity*) ;
 int FUNC_4 (TYPE_3__*,struct drm_sched_entity*,void*) ;
 struct amdgpu_ring* FUNC_5 (int ) ;

int FUNC_6(struct amdgpu_job *VAR_1, struct drm_sched_entity *VAR_2,
        void *VAR_3, struct dma_fence **VAR_4)
{
 enum drm_sched_priority VAR_5;
 struct amdgpu_ring *VAR_6;
 int VAR_7;

 if (!VAR_4)
  return -VAR_0;

 VAR_7 = FUNC_4(&VAR_1->base, VAR_2, VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_1->owner = VAR_3;
 *VAR_4 = FUNC_2(&VAR_1->base.s_fence->finished);
 FUNC_0(VAR_1);
 VAR_5 = VAR_1->base.s_priority;
 FUNC_3(&VAR_1->base, VAR_2);

 VAR_6 = FUNC_5(VAR_2->rq->sched);
 FUNC_1(VAR_6, VAR_5);

 return 0;
}
