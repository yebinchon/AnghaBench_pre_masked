
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_sched_rq {struct drm_gpu_scheduler* sched; } ;
struct drm_sched_entity {int num_rq_list; struct drm_sched_rq** rq_list; } ;
struct drm_gpu_scheduler {int num_jobs; int name; int ready; } ;


 int FUNC_0 (char*,int ) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (int *) ;

__attribute__((used)) static struct drm_sched_rq *
FUNC_2(struct drm_sched_entity *VAR_1)
{
 struct drm_sched_rq *VAR_2 = ((void*)0);
 unsigned int VAR_3 = VAR_0, VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->num_rq_list; ++VAR_5) {
  struct drm_gpu_scheduler *VAR_6 = VAR_1->rq_list[VAR_5]->sched;

  if (!VAR_1->rq_list[VAR_5]->sched->ready) {
   FUNC_0("sched%s is not ready, skipping", VAR_6->name);
   continue;
  }

  VAR_4 = FUNC_1(&VAR_6->num_jobs);
  if (VAR_4 < VAR_3) {
   VAR_3 = VAR_4;
   VAR_2 = VAR_1->rq_list[VAR_5];
  }
 }

 return VAR_2;
}
