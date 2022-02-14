
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_sched_task {int dummy; } ;
struct lima_sched_pipe {int dummy; } ;
struct drm_sched_job {int sched; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct lima_sched_pipe*,struct lima_sched_task*) ;
 struct lima_sched_pipe* FUNC_2 (int ) ;
 struct lima_sched_task* FUNC_3 (struct drm_sched_job*) ;

__attribute__((used)) static void FUNC_4(struct drm_sched_job *VAR_0)
{
 struct lima_sched_pipe *VAR_1 = FUNC_2(VAR_0->sched);
 struct lima_sched_task *VAR_2 = FUNC_3(VAR_0);

 FUNC_0("lima job timeout\n");

 FUNC_1(VAR_1, VAR_2);
}
