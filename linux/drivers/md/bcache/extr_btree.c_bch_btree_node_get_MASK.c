
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cache_set {int bucket_lock; } ;
struct btree_op {int dummy; } ;
struct TYPE_5__ {int nsets; TYPE_1__* set; } ;
struct bkey {int dummy; } ;
struct btree {int level; int accessed; TYPE_2__ keys; struct btree* parent; int written; struct bkey key; int lock; } ;
struct TYPE_6__ {scalar_t__ bio_list; } ;
struct TYPE_4__ {int data; int tree; scalar_t__ size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct btree* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct btree*) ;
 scalar_t__ FUNC_3 (struct cache_set*,struct bkey*) ;
 int FUNC_4 (struct btree*) ;
 scalar_t__ FUNC_5 (struct btree*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_6 (int *) ;
 struct btree* FUNC_7 (struct cache_set*,struct btree_op*,struct bkey*,int) ;
 struct btree* FUNC_8 (struct cache_set*,struct bkey*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,struct btree*,int) ;
 int FUNC_13 (int,struct btree*) ;

struct btree *FUNC_14(struct cache_set *VAR_3, struct btree_op *VAR_4,
     struct bkey *VAR_5, int VAR_6, bool VAR_7,
     struct btree *VAR_8)
{
 int VAR_9 = 0;
 struct btree *VAR_10;

 FUNC_0(VAR_6 < 0);
retry:
 VAR_10 = FUNC_8(VAR_3, VAR_5);

 if (!VAR_10) {
  if (VAR_2->bio_list)
   return FUNC_1(-VAR_0);

  FUNC_9(&VAR_3->bucket_lock);
  VAR_10 = FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6);
  FUNC_10(&VAR_3->bucket_lock);

  if (!VAR_10)
   goto retry;
  if (FUNC_2(VAR_10))
   return VAR_10;

  FUNC_4(VAR_10);

  if (!VAR_7)
   FUNC_6(&VAR_10->lock);
 } else {
  FUNC_12(VAR_7, VAR_10, VAR_6);
  if (FUNC_3(VAR_3, &VAR_10->key) != FUNC_3(VAR_3, VAR_5)) {
   FUNC_13(VAR_7, VAR_10);
   goto retry;
  }
  FUNC_0(VAR_10->level != VAR_6);
 }

 if (FUNC_5(VAR_10)) {
  FUNC_13(VAR_7, VAR_10);
  return FUNC_1(-VAR_1);
 }

 FUNC_0(!VAR_10->written);

 VAR_10->parent = VAR_8;
 VAR_10->accessed = 1;

 for (; VAR_9 <= VAR_10->keys.nsets && VAR_10->keys.set[VAR_9].size; VAR_9++) {
  FUNC_11(VAR_10->keys.set[VAR_9].tree);
  FUNC_11(VAR_10->keys.set[VAR_9].data);
 }

 for (; VAR_9 <= VAR_10->keys.nsets; VAR_9++)
  FUNC_11(VAR_10->keys.set[VAR_9].data);

 return VAR_10;
}
