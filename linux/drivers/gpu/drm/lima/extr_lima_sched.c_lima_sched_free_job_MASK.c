
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_vm {int dummy; } ;
struct lima_sched_task {int num_bos; int fence; struct lima_bo** bos; struct lima_vm* vm; } ;
struct lima_sched_pipe {int task_slab; } ;
struct lima_bo {int dummy; } ;
struct drm_sched_job {int sched; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct lima_sched_task*) ;
 int FUNC_2 (struct lima_sched_task*) ;
 int FUNC_3 (struct lima_vm*,struct lima_bo*) ;
 struct lima_sched_pipe* FUNC_4 (int ) ;
 struct lima_sched_task* FUNC_5 (struct drm_sched_job*) ;

__attribute__((used)) static void FUNC_6(struct drm_sched_job *VAR_0)
{
 struct lima_sched_task *VAR_1 = FUNC_5(VAR_0);
 struct lima_sched_pipe *VAR_2 = FUNC_4(VAR_0->sched);
 struct lima_vm *VAR_3 = VAR_1->vm;
 struct lima_bo **VAR_4 = VAR_1->bos;
 int VAR_5;

 FUNC_0(VAR_1->fence);

 for (VAR_5 = 0; VAR_5 < VAR_1->num_bos; VAR_5++)
  FUNC_3(VAR_3, VAR_4[VAR_5]);

 FUNC_2(VAR_1);
 FUNC_1(VAR_2->task_slab, VAR_1);
}
