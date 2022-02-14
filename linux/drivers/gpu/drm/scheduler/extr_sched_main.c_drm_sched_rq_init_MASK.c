
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_sched_rq {struct drm_gpu_scheduler* sched; int * current_entity; int entities; int lock; } ;
struct drm_gpu_scheduler {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct drm_gpu_scheduler *VAR_0,
         struct drm_sched_rq *VAR_1)
{
 FUNC_1(&VAR_1->lock);
 FUNC_0(&VAR_1->entities);
 VAR_1->current_entity = ((void*)0);
 VAR_1->sched = VAR_0;
}
