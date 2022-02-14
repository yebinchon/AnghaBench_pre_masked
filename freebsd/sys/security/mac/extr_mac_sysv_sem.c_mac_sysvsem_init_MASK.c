
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct semid_kernel {int * label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;

void
FUNC_1(struct semid_kernel *VAR_2)
{

 if (VAR_1 & VAR_0)
  VAR_2->label = FUNC_0();
 else
  VAR_2->label = ((void*)0);
}
