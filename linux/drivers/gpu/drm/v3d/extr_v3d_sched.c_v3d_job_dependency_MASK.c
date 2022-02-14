
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v3d_job {int last_dep; int deps; } ;
struct drm_sched_job {int dummy; } ;
struct drm_sched_entity {int dummy; } ;
struct dma_fence {int dummy; } ;


 struct v3d_job* FUNC_0 (struct drm_sched_job*) ;
 int FUNC_1 (int *) ;
 struct dma_fence* FUNC_2 (int *,int ) ;

__attribute__((used)) static struct dma_fence *
FUNC_3(struct drm_sched_job *VAR_0,
     struct drm_sched_entity *VAR_1)
{
 struct v3d_job *VAR_2 = FUNC_0(VAR_0);





 if (!FUNC_1(&VAR_2->deps))
  return FUNC_2(&VAR_2->deps, VAR_2->last_dep++);

 return ((void*)0);
}
