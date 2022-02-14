
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {struct proc* td_proc; } ;
struct sparc_sigtramp_install_args {scalar_t__ sia_new; int * sia_old; } ;
struct TYPE_2__ {scalar_t__ md_sigtramp; } ;
struct proc {TYPE_1__ p_md; } ;
typedef int sia ;


 int VAR_0 ;
 int FUNC_0 (char*,struct sparc_sigtramp_install_args*,int) ;
 scalar_t__ FUNC_1 (int *,long) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_1, char *VAR_2)
{
 struct sparc_sigtramp_install_args VAR_3;
 struct proc *VAR_4;
 int VAR_5;

 VAR_4 = VAR_1->td_proc;
 if ((VAR_5 = FUNC_0(VAR_2, &VAR_3, sizeof(VAR_3))) != 0)
  return (VAR_5);
 if (VAR_3.sia_old != ((void*)0)) {
  if (FUNC_1(VAR_3.sia_old, (long)VAR_4->p_md.md_sigtramp) != 0)
   return (VAR_0);
 }
 VAR_4->p_md.md_sigtramp = VAR_3.sia_new;
 return (0);
}
