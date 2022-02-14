
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwspinlock_device {int num_locks; scalar_t__ base_id; struct hwspinlock* lock; } ;
struct hwspinlock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct hwspinlock* FUNC_1 (scalar_t__) ;

int FUNC_2(struct hwspinlock_device *VAR_1)
{
 struct hwspinlock *VAR_2, *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_locks; VAR_4++) {
  VAR_2 = &VAR_1->lock[VAR_4];

  VAR_3 = FUNC_1(VAR_1->base_id + VAR_4);
  if (!VAR_3)
   return -VAR_0;


  FUNC_0(VAR_3 != VAR_2);
 }

 return 0;
}
