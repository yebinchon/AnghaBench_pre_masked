
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_sched_entity {int job_queue; int list; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct drm_sched_entity *VAR_0)
{
 FUNC_1();

 if (FUNC_0(&VAR_0->list) ||
     FUNC_2(&VAR_0->job_queue) == 0)
  return 1;

 return 0;
}
