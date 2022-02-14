
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wait; int cnts; } ;
typedef TYPE_1__ arch_rwlock_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

void FUNC_6(arch_rwlock_t *VAR_0)
{
 int VAR_1;


 FUNC_1(0x20000, &VAR_0->cnts);


 FUNC_3(&VAR_0->wait);

 while (1) {
  VAR_1 = FUNC_0(VAR_0->cnts);
  if ((VAR_1 & 0x1ffff) == 0 &&
      FUNC_2(&VAR_0->cnts, VAR_1, VAR_1 | 0x10000))

   break;
  FUNC_5();
 }

 FUNC_4(&VAR_0->wait);
}
