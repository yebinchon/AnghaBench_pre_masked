
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_sched_rq {int lock; int entities; } ;
struct drm_sched_entity {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct drm_sched_rq *VAR_0,
        struct drm_sched_entity *VAR_1)
{
 if (!FUNC_1(&VAR_1->list))
  return;
 FUNC_2(&VAR_0->lock);
 FUNC_0(&VAR_1->list, &VAR_0->entities);
 FUNC_3(&VAR_0->lock);
}
