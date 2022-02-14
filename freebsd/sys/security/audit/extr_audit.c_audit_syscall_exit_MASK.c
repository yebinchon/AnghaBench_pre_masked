
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int* td_retval; int td_pflags; int * td_ar; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;

void
FUNC_1(int VAR_1, struct thread *VAR_2)
{
 int VAR_3;
 if (VAR_1)
  VAR_3 = -1;
 else
  VAR_3 = VAR_2->td_retval[0];

 FUNC_0(VAR_2->td_ar, VAR_1, VAR_3);
 VAR_2->td_ar = ((void*)0);
 VAR_2->td_pflags &= ~VAR_0;
}
