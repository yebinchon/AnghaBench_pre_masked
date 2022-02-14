
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hwspinlock {int lock; TYPE_2__* bank; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* unlock ) (struct hwspinlock*) ;} ;


 int FUNC_0 (int) ;




 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct hwspinlock*) ;

void FUNC_6(struct hwspinlock *VAR_0, int VAR_1, unsigned long *VAR_2)
{
 FUNC_0(!VAR_0);
 FUNC_0(!VAR_2 && VAR_1 == 129);
 FUNC_1();

 VAR_0->bank->ops->unlock(VAR_0);


 switch (VAR_1) {
 case 129:
  FUNC_4(&VAR_0->lock, *VAR_2);
  break;
 case 130:
  FUNC_3(&VAR_0->lock);
  break;
 case 128:
 case 131:

  break;
 default:
  FUNC_2(&VAR_0->lock);
  break;
 }
}
