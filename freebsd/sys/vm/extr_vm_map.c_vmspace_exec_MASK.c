
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
struct vmspace {int vm_swrss; } ;
struct proc {struct vmspace* p_vmspace; } ;
struct TYPE_3__ {int td_pflags; struct proc* td_proc; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 struct vmspace* FUNC_4 (int ,int ,int ) ;

int
FUNC_5(struct proc *VAR_4, vm_offset_t VAR_5, vm_offset_t VAR_6)
{
 struct vmspace *VAR_7 = VAR_4->p_vmspace;
 struct vmspace *VAR_8;

 FUNC_0((VAR_2->td_pflags & VAR_1) == 0,
     ("vmspace_exec recursed"));
 VAR_8 = FUNC_4(VAR_5, VAR_6, VAR_3);
 if (VAR_8 == ((void*)0))
  return (VAR_0);
 VAR_8->vm_swrss = VAR_7->vm_swrss;







 FUNC_1(VAR_4);
 VAR_4->p_vmspace = VAR_8;
 FUNC_2(VAR_4);
 if (VAR_4 == VAR_2->td_proc)
  FUNC_3(VAR_2);
 VAR_2->td_pflags |= VAR_1;
 return (0);
}
