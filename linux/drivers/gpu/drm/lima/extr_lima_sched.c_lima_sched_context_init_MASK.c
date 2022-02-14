
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_sched_rq* sched_rq; } ;
struct lima_sched_pipe {TYPE_1__ base; } ;
struct lima_sched_context {int base; } ;
struct drm_sched_rq {int dummy; } ;
typedef int atomic_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct drm_sched_rq**,int,int *) ;

int FUNC_1(struct lima_sched_pipe *VAR_1,
       struct lima_sched_context *VAR_2,
       atomic_t *VAR_3)
{
 struct drm_sched_rq *VAR_4 = VAR_1->base.sched_rq + VAR_0;

 return FUNC_0(&VAR_2->base, &VAR_4, 1, VAR_3);
}
