
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int * p_label; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct proc *VAR_0)
{

 if (VAR_0->p_label != ((void*)0)) {
  FUNC_0(VAR_0->p_label);
  VAR_0->p_label = ((void*)0);
 }
}
