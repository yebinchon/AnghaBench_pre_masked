
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union fp_state {int dummy; } fp_state ;
struct thread_info {int fpstate; int * used_cp; } ;
struct TYPE_2__ {int debug; } ;
struct task_struct {TYPE_1__ thread; } ;
struct debug_info {int dummy; } ;


 int VAR_0 ;
 struct task_struct* VAR_1 ;
 struct thread_info* FUNC_0 () ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ,struct thread_info*) ;

void FUNC_5(void)
{
 struct thread_info *VAR_2 = FUNC_0();
 struct task_struct *VAR_3 = VAR_1;

 FUNC_1(VAR_3);

 FUNC_3(VAR_2->used_cp, 0, sizeof(VAR_2->used_cp));
 FUNC_3(&VAR_3->thread.debug, 0, sizeof(struct debug_info));
 FUNC_3(&VAR_2->fpstate, 0, sizeof(union fp_state));

 FUNC_2();

 FUNC_4(VAR_0, VAR_2);
}
