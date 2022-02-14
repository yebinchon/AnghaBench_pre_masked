
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct binder_alloc {int buffers; int mutex; int pid; } ;
struct TYPE_4__ {TYPE_1__* group_leader; } ;
struct TYPE_3__ {int pid; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct binder_alloc *VAR_1)
{
 VAR_1->pid = VAR_0->group_leader->pid;
 FUNC_1(&VAR_1->mutex);
 FUNC_0(&VAR_1->buffers);
}
