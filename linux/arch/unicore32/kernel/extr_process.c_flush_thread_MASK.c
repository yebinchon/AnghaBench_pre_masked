
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int fpstate; int * used_cp; } ;
struct TYPE_2__ {int debug; } ;
struct task_struct {TYPE_1__ thread; } ;
struct fp_state {int dummy; } ;
struct debug_info {int dummy; } ;


 struct task_struct* VAR_0 ;
 struct thread_info* FUNC_0 () ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(void)
{
 struct thread_info *VAR_1 = FUNC_0();
 struct task_struct *VAR_2 = VAR_0;

 FUNC_1(VAR_1->used_cp, 0, sizeof(VAR_1->used_cp));
 FUNC_1(&VAR_2->thread.debug, 0, sizeof(struct debug_info));



}
