
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct closure {int dummy; } ;
struct TYPE_6__ {unsigned int page_order; TYPE_2__* set; } ;
struct btree {int io_mutex; int write_lock; TYPE_3__ keys; int lock; TYPE_1__* c; } ;
struct TYPE_5__ {int data; } ;
struct TYPE_4__ {int bucket_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct btree*,struct closure*) ;
 scalar_t__ FUNC_2 (struct btree*) ;
 scalar_t__ FUNC_3 (struct btree*) ;
 int FUNC_4 (struct closure*) ;
 int FUNC_5 (struct closure*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,struct btree*) ;
 int FUNC_13 (int,struct btree*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct btree *VAR_1, unsigned int VAR_2, bool VAR_3)
{
 struct closure VAR_4;

 FUNC_4(&VAR_4);
 FUNC_9(&VAR_1->c->bucket_lock);

 if (!FUNC_8(&VAR_1->lock))
  return -VAR_0;

 FUNC_0(FUNC_2(VAR_1) && !VAR_1->keys.set[0].data);

 if (VAR_1->keys.page_order < VAR_2)
  goto out_unlock;

 if (!VAR_3) {
  if (FUNC_2(VAR_1))
   goto out_unlock;

  if (FUNC_7(&VAR_1->io_mutex))
   goto out_unlock;
  FUNC_15(&VAR_1->io_mutex);
 }

retry:





 FUNC_10(&VAR_1->write_lock);





 if (FUNC_3(VAR_1)) {
  FUNC_12("bnode %p is flushing by journal, retry", VAR_1);
  FUNC_11(&VAR_1->write_lock);
  FUNC_14(1);
  goto retry;
 }

 if (FUNC_2(VAR_1))
  FUNC_1(VAR_1, &VAR_4);
 FUNC_11(&VAR_1->write_lock);

 FUNC_5(&VAR_4);


 FUNC_6(&VAR_1->io_mutex);
 FUNC_15(&VAR_1->io_mutex);

 return 0;
out_unlock:
 FUNC_13(1, VAR_1);
 return -VAR_0;
}
