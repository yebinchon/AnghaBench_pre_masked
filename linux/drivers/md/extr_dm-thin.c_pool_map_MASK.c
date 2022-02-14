
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pool_c {TYPE_1__* data_dev; struct pool* pool; } ;
struct pool {int lock; } ;
struct dm_target {struct pool_c* private; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int bdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct dm_target *VAR_1, struct bio *VAR_2)
{
 int VAR_3;
 struct pool_c *VAR_4 = VAR_1->private;
 struct pool *VAR_5 = VAR_4->pool;
 unsigned long VAR_6;




 FUNC_1(&VAR_5->lock, VAR_6);
 FUNC_0(VAR_2, VAR_4->data_dev->bdev);
 VAR_3 = VAR_0;
 FUNC_2(&VAR_5->lock, VAR_6);

 return VAR_3;
}
