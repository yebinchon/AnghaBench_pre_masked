
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_sched_task {int base; } ;
struct lima_sched_pipe {int num_mmu; int base; int * current_task; int * current_vm; scalar_t__* mmu; scalar_t__ bcast_mmu; int (* task_error ) (struct lima_sched_pipe*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct lima_sched_pipe*) ;

__attribute__((used)) static void FUNC_7(struct lima_sched_pipe *VAR_0,
      struct lima_sched_task *VAR_1)
{
 FUNC_3(&VAR_0->base, &VAR_1->base);

 if (VAR_1)
  FUNC_0(&VAR_1->base);

 VAR_0->task_error(VAR_0);

 if (VAR_0->bcast_mmu)
  FUNC_4(VAR_0->bcast_mmu);
 else {
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0->num_mmu; VAR_2++)
   FUNC_4(VAR_0->mmu[VAR_2]);
 }

 if (VAR_0->current_vm)
  FUNC_5(VAR_0->current_vm);

 VAR_0->current_vm = ((void*)0);
 VAR_0->current_task = ((void*)0);

 FUNC_1(&VAR_0->base);
 FUNC_2(&VAR_0->base, 1);
}
