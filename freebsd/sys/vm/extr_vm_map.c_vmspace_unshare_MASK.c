
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_ooffset_t ;
struct vmspace {int vm_refcnt; } ;
struct proc {struct vmspace* p_vmspace; int p_ucred; } ;
struct TYPE_3__ {struct proc* td_proc; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__,int ) ;
 struct vmspace* FUNC_4 (struct vmspace*,scalar_t__*) ;
 int FUNC_5 (struct vmspace*) ;

int
FUNC_6(struct proc *VAR_2)
{
 struct vmspace *VAR_3 = VAR_2->p_vmspace;
 struct vmspace *VAR_4;
 vm_ooffset_t VAR_5;

 if (VAR_3->vm_refcnt == 1)
  return (0);
 VAR_5 = 0;
 VAR_4 = FUNC_4(VAR_3, &VAR_5);
 if (VAR_4 == ((void*)0))
  return (VAR_0);
 if (!FUNC_3(VAR_5, VAR_2->p_ucred)) {
  FUNC_5(VAR_4);
  return (VAR_0);
 }
 FUNC_0(VAR_2);
 VAR_2->p_vmspace = VAR_4;
 FUNC_1(VAR_2);
 if (VAR_2 == VAR_1->td_proc)
  FUNC_2(VAR_1);
 FUNC_5(VAR_3);
 return (0);
}
