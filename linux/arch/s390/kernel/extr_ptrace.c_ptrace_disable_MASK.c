
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ per_flags; int per_event; int per_user; } ;
struct task_struct {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct task_struct*,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct task_struct*) ;

void FUNC_4(struct task_struct *VAR_2)
{
 FUNC_2(&VAR_2->thread.per_user, 0, sizeof(VAR_2->thread.per_user));
 FUNC_2(&VAR_2->thread.per_event, 0, sizeof(VAR_2->thread.per_event));
 FUNC_1(VAR_2, VAR_1);
 FUNC_0(FUNC_3(VAR_2), VAR_0);
 VAR_2->thread.per_flags = 0;
}
