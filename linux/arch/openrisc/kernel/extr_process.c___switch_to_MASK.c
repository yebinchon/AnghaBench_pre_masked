
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int dummy; } ;
struct task_struct {struct thread_info* stack; } ;
struct TYPE_2__ {struct task_struct* task; } ;


 TYPE_1__* FUNC_0 (struct thread_info*,struct thread_info*) ;
 struct thread_info** VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_3 () ;

struct task_struct *FUNC_4(struct task_struct *VAR_2,
    struct task_struct *VAR_3)
{
 struct task_struct *VAR_4;
 struct thread_info *VAR_5, *VAR_6;
 unsigned long VAR_7;

 FUNC_2(VAR_7);





 VAR_5 = VAR_3->stack;
 VAR_6 = VAR_2->stack;

 VAR_1 = 0;

 VAR_0[FUNC_3()] = VAR_5;
 VAR_4 = (FUNC_0(VAR_6, VAR_5))->task;

 FUNC_1(VAR_7);

 return VAR_4;
}
