
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_sched_entity {unsigned int num_rq_list; int rq_lock; scalar_t__ rq; scalar_t__* rq_list; } ;
typedef enum drm_sched_priority { ____Placeholder_drm_sched_priority } drm_sched_priority ;


 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (scalar_t__,struct drm_sched_entity*) ;
 int FUNC_2 (scalar_t__,struct drm_sched_entity*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct drm_sched_entity *VAR_0,
       enum drm_sched_priority VAR_1)
{
 unsigned int VAR_2;

 FUNC_3(&VAR_0->rq_lock);

 for (VAR_2 = 0; VAR_2 < VAR_0->num_rq_list; ++VAR_2)
  FUNC_0(&VAR_0->rq_list[VAR_2], VAR_1);

 if (VAR_0->rq) {
  FUNC_2(VAR_0->rq, VAR_0);
  FUNC_0(&VAR_0->rq, VAR_1);
  FUNC_1(VAR_0->rq, VAR_0);
 }

 FUNC_4(&VAR_0->rq_lock);
}
