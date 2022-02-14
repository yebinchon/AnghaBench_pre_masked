
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_thread {int tsk; } ;


 int FUNC_0 (struct md_thread*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct md_thread **VAR_1)
{
 struct md_thread *VAR_2 = *VAR_1;
 if (!VAR_2)
  return;
 FUNC_2("interrupting MD-thread pid %d\n", FUNC_5(VAR_2->tsk));



 FUNC_3(&VAR_0);
 *VAR_1 = ((void*)0);
 FUNC_4(&VAR_0);

 FUNC_1(VAR_2->tsk);
 FUNC_0(VAR_2);
}
