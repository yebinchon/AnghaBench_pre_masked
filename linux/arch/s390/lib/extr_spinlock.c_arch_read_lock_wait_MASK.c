
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wait; int cnts; } ;
typedef TYPE_1__ arch_rwlock_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;

void FUNC_7(arch_rwlock_t *VAR_0)
{
 if (FUNC_6(FUNC_5())) {
  while (FUNC_0(VAR_0->cnts) & 0x10000)
   FUNC_4();
  return;
 }


 FUNC_1(-1, &VAR_0->cnts);

 FUNC_2(&VAR_0->wait);

 FUNC_1(1, &VAR_0->cnts);

 while (FUNC_0(VAR_0->cnts) & 0x10000)
  FUNC_4();
 FUNC_3(&VAR_0->wait);
}
