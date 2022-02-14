
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pnode; int nr_online_cpus; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 TYPE_1__* VAR_1 ;

void FUNC_3(void)
{

 if (FUNC_2() == 0)
  return;

 VAR_1->nr_online_cpus++;

 if (FUNC_0() == VAR_0)
  FUNC_1(VAR_1->pnode);
}
