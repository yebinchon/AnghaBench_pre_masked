
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pool_c {struct pool* pool; } ;
struct TYPE_2__ {int work; } ;
struct pool {int low_water_triggered; int suspended; TYPE_1__ waker; int lock; } ;
struct dm_target {struct pool_c* private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pool*) ;
 int FUNC_2 (struct pool*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct dm_target *VAR_0)
{
 struct pool_c *VAR_1 = VAR_0->private;
 struct pool *VAR_2 = VAR_1->pool;
 unsigned long VAR_3;





 FUNC_2(VAR_2);
 FUNC_1(VAR_2);

 FUNC_3(&VAR_2->lock, VAR_3);
 VAR_2->low_water_triggered = 0;
 VAR_2->suspended = 0;
 FUNC_4(&VAR_2->lock, VAR_3);

 FUNC_0(&VAR_2->waker.work);
}
