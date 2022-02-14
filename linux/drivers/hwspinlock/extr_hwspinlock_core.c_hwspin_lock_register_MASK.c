
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwspinlock_ops {int unlock; int trylock; } ;
struct hwspinlock_device {int base_id; int num_locks; struct hwspinlock* lock; struct hwspinlock_ops const* ops; struct device* dev; } ;
struct hwspinlock {struct hwspinlock_device* bank; int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hwspinlock*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct hwspinlock_device *VAR_1, struct device *VAR_2,
  const struct hwspinlock_ops *VAR_3, int VAR_4, int VAR_5)
{
 struct hwspinlock *VAR_6;
 int VAR_7 = 0, VAR_8;

 if (!VAR_1 || !VAR_3 || !VAR_2 || !VAR_5 || !VAR_3->trylock ||
       !VAR_3->unlock) {
  FUNC_2("invalid parameters\n");
  return -VAR_0;
 }

 VAR_1->dev = VAR_2;
 VAR_1->ops = VAR_3;
 VAR_1->base_id = VAR_4;
 VAR_1->num_locks = VAR_5;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_6 = &VAR_1->lock[VAR_8];

  FUNC_3(&VAR_6->lock);
  VAR_6->bank = VAR_1;

  VAR_7 = FUNC_0(VAR_6, VAR_4 + VAR_8);
  if (VAR_7)
   goto reg_failed;
 }

 return 0;

reg_failed:
 while (--VAR_8 >= 0)
  FUNC_1(VAR_4 + VAR_8);
 return VAR_7;
}
