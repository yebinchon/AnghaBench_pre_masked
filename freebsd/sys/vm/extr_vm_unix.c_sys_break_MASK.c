
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {uintptr_t* td_retval; } ;
struct break_args {scalar_t__ nsize; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,uintptr_t*) ;

int
FUNC_1(struct thread *VAR_1, struct break_args *VAR_2)
{

 uintptr_t VAR_3;
 int VAR_4;

 VAR_3 = (uintptr_t)VAR_2->nsize;
 VAR_4 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_4 == 0)
  VAR_1->td_retval[0] = VAR_3;
 return (VAR_4);



}
