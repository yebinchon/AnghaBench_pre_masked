
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
typedef TYPE_1__ arch_spinlock_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

void FUNC_3(arch_spinlock_t *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->lock) & VAR_1;
 if (!VAR_3)
  return;
 if (VAR_0 && !FUNC_1(VAR_3 - 1))
  return;
 FUNC_2(VAR_3 - 1);
}
