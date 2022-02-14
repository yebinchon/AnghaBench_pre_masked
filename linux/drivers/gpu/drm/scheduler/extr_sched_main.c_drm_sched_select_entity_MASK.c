
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_sched_entity {int dummy; } ;
struct drm_gpu_scheduler {int * sched_rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_gpu_scheduler*) ;
 struct drm_sched_entity* FUNC_1 (int *) ;

__attribute__((used)) static struct drm_sched_entity *
FUNC_2(struct drm_gpu_scheduler *VAR_2)
{
 struct drm_sched_entity *VAR_3;
 int VAR_4;

 if (!FUNC_0(VAR_2))
  return ((void*)0);


 for (VAR_4 = VAR_0 - 1; VAR_4 >= VAR_1; VAR_4--) {
  VAR_3 = FUNC_1(&VAR_2->sched_rq[VAR_4]);
  if (VAR_3)
   break;
 }

 return VAR_3;
}
