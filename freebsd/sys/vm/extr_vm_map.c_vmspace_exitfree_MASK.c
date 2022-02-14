
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmspace {int dummy; } ;
struct proc {struct vmspace* p_vmspace; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 struct vmspace VAR_0 ;
 int FUNC_3 (struct vmspace*) ;

void
FUNC_4(struct proc *VAR_1)
{
 struct vmspace *VAR_2;

 FUNC_1(VAR_1);
 VAR_2 = VAR_1->p_vmspace;
 VAR_1->p_vmspace = ((void*)0);
 FUNC_2(VAR_1);
 FUNC_0(VAR_2 == &VAR_0, ("vmspace_exitfree: wrong vmspace"));
 FUNC_3(VAR_2);
}
