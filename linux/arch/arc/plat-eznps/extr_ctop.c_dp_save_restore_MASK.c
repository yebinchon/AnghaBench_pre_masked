
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eznps_dp {void* gpa1; void* eflags; } ;
struct TYPE_2__ {struct eznps_dp dp; } ;
struct task_struct {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,void*) ;

void FUNC_2(struct task_struct *VAR_2, struct task_struct *VAR_3)
{
 struct eznps_dp *VAR_4 = &VAR_2->thread.dp;
 struct eznps_dp *VAR_5 = &VAR_3->thread.dp;


 VAR_4->eflags = FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_5->eflags);

 VAR_4->gpa1 = FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_5->gpa1);
}
