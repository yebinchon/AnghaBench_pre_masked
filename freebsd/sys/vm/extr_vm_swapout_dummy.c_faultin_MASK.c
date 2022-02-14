
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,struct proc*) ;

void
FUNC_2(struct proc *VAR_2)
{

 FUNC_0(VAR_2, VAR_0);
 if ((VAR_2->p_flag & VAR_1) == 0)
  FUNC_1("faultin: proc %p swapped out with NO_SWAPPING", VAR_2);
}
