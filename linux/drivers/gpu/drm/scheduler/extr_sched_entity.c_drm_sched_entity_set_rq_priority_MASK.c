
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_sched_rq {TYPE_1__* sched; } ;
typedef enum drm_sched_priority { ____Placeholder_drm_sched_priority } drm_sched_priority ;
struct TYPE_2__ {struct drm_sched_rq* sched_rq; } ;



__attribute__((used)) static void FUNC_0(struct drm_sched_rq **VAR_0,
          enum drm_sched_priority VAR_1)
{
 *VAR_0 = &(*VAR_0)->sched->sched_rq[VAR_1];
}
