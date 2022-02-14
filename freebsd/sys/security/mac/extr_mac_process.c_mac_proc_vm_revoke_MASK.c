
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct thread {TYPE_2__* td_proc; } ;
struct TYPE_5__ {TYPE_1__* p_vmspace; int p_ucred; } ;
struct TYPE_4__ {int vm_map; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct ucred*) ;
 struct ucred* FUNC_3 (int ) ;
 int FUNC_4 (struct thread*,struct ucred*,int *) ;

void
FUNC_5(struct thread *VAR_0)
{
 struct ucred *VAR_1;

 FUNC_0(VAR_0->td_proc);
 VAR_1 = FUNC_3(VAR_0->td_proc->p_ucred);
 FUNC_1(VAR_0->td_proc);


 FUNC_4(VAR_0, VAR_1,
     &VAR_0->td_proc->p_vmspace->vm_map);


 FUNC_2(VAR_1);
}
