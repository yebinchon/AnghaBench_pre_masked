
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
typedef TYPE_1__ arch_spinlock_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int VAR_1 ;

int FUNC_2(arch_spinlock_t *VAR_2)
{
 int VAR_3 = VAR_0;
 int VAR_4, VAR_5;

 for (VAR_5 = VAR_1; VAR_5 > 0; VAR_5--) {
  VAR_4 = FUNC_0(VAR_2->lock);

  if (!VAR_4) {
   if (FUNC_1(&VAR_2->lock, 0, VAR_3))
    return 1;
  }
 }
 return 0;
}
