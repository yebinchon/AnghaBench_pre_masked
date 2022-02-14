
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_pool_entry {int ref_cnt; struct rxe_pool* pool; } ;
struct rxe_pool {int flags; scalar_t__ state; scalar_t__ max_elem; TYPE_1__* rxe; int num_elem; int pool_lock; int ref_cnt; } ;
struct TYPE_2__ {int ib_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct rxe_pool*) ;

int FUNC_10(struct rxe_pool *VAR_3, struct rxe_pool_entry *VAR_4)
{
 unsigned long VAR_5;

 FUNC_6(!(VAR_3->flags & VAR_1));

 FUNC_7(&VAR_3->pool_lock, VAR_5);
 if (VAR_3->state != VAR_2) {
  FUNC_8(&VAR_3->pool_lock, VAR_5);
  return -VAR_0;
 }
 FUNC_4(&VAR_3->ref_cnt);
 FUNC_8(&VAR_3->pool_lock, VAR_5);

 if (!FUNC_3(&VAR_3->rxe->ib_dev))
  goto out_put_pool;

 if (FUNC_1(&VAR_3->num_elem) > VAR_3->max_elem)
  goto out_cnt;

 VAR_4->pool = VAR_3;
 FUNC_5(&VAR_4->ref_cnt);

 return 0;

out_cnt:
 FUNC_0(&VAR_3->num_elem);
 FUNC_2(&VAR_3->rxe->ib_dev);
out_put_pool:
 FUNC_9(VAR_3);
 return -VAR_0;
}
