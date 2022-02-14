
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* cpu_suspend_prepare ) (unsigned int,unsigned int) ;} ;


 unsigned int FUNC_0 (unsigned int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_5 () ;
 int FUNC_6 (unsigned int,unsigned int) ;

void FUNC_7(void)
{
 if (FUNC_1(!VAR_1))
  return;


 if (VAR_1->cpu_suspend_prepare) {
  unsigned int VAR_2 = FUNC_5();
  unsigned int VAR_3 = FUNC_0(VAR_2, 0);
  unsigned int VAR_4 = FUNC_0(VAR_2, 1);
  FUNC_2(&VAR_0);
  VAR_1->cpu_suspend_prepare(VAR_3, VAR_4);
  FUNC_3(&VAR_0);
 }
 FUNC_4();
}
