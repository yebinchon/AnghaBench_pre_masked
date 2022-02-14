
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {scalar_t__ priority; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct notifier_block*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_3(struct notifier_block *VAR_4)
{
 if (FUNC_0(VAR_4->priority > VAR_1 && VAR_4->priority < VAR_0))
  return;

 FUNC_1(&VAR_2);

 FUNC_2(&VAR_3, VAR_4);
}
