
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int switch_buf; struct task_struct* prev_sched; } ;
struct task_struct {TYPE_1__ thread; } ;
struct TYPE_6__ {void* prev_sched; } ;
struct TYPE_7__ {TYPE_2__ thread; } ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int *,int *) ;

void *FUNC_3(struct task_struct *VAR_1, struct task_struct *VAR_2)
{
 VAR_2->thread.prev_sched = VAR_1;
 FUNC_1(VAR_2);

 FUNC_2(&VAR_1->thread.switch_buf, &VAR_2->thread.switch_buf);
 FUNC_0(VAR_0);

 return VAR_0->thread.prev_sched;
}
