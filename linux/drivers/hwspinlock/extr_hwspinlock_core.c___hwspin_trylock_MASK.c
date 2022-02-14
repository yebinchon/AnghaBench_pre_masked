
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hwspinlock {int lock; TYPE_2__* bank; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* trylock ) (struct hwspinlock*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;




 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct hwspinlock*) ;

int FUNC_9(struct hwspinlock *VAR_1, int VAR_2, unsigned long *VAR_3)
{
 int VAR_4;

 FUNC_0(!VAR_1);
 FUNC_0(!VAR_3 && VAR_2 == 129);
 switch (VAR_2) {
 case 129:
  VAR_4 = FUNC_4(&VAR_1->lock, *VAR_3);
  break;
 case 130:
  VAR_4 = FUNC_3(&VAR_1->lock);
  break;
 case 128:
 case 131:
  VAR_4 = 1;
  break;
 default:
  VAR_4 = FUNC_2(&VAR_1->lock);
  break;
 }


 if (!VAR_4)
  return -VAR_0;


 VAR_4 = VAR_1->bank->ops->trylock(VAR_1);


 if (!VAR_4) {
  switch (VAR_2) {
  case 129:
   FUNC_7(&VAR_1->lock, *VAR_3);
   break;
  case 130:
   FUNC_6(&VAR_1->lock);
   break;
  case 128:
  case 131:

   break;
  default:
   FUNC_5(&VAR_1->lock);
   break;
  }

  return -VAR_0;
 }
 FUNC_1();

 return 0;
}
