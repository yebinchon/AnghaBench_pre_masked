
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_sched_pipe {int error; int (* task_mmu_error ) (struct lima_sched_pipe*) ;} ;


 int FUNC_0 (struct lima_sched_pipe*) ;

__attribute__((used)) static inline void FUNC_1(struct lima_sched_pipe *VAR_0)
{
 VAR_0->error = 1;
 VAR_0->task_mmu_error(VAR_0);
}
