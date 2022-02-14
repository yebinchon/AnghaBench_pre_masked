
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_sched_entity {int dependency; int job_queue; } ;


 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;

bool FUNC_2(struct drm_sched_entity *VAR_0)
{
 if (FUNC_1(&VAR_0->job_queue) == ((void*)0))
  return 0;

 if (FUNC_0(VAR_0->dependency))
  return 0;

 return 1;
}
