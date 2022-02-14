
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gc_stat {scalar_t__ nodes; scalar_t__ nodes_pre; } ;
struct gc_merge_info {struct btree* b; int keys; } ;
struct closure {int dummy; } ;
struct btree_op {int dummy; } ;
struct btree_iter {int dummy; } ;
struct btree {int write_lock; TYPE_1__* c; int key; scalar_t__ level; int keys; } ;
struct bkey {int dummy; } ;
typedef int r ;
struct TYPE_3__ {int search_inflight; int gc_done; } ;


 int FUNC_0 (struct gc_merge_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct btree* FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct btree*) ;
 int FUNC_3 (struct btree*) ;
 int FUNC_4 (struct btree*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,struct btree_iter*,int *) ;
 struct bkey* FUNC_7 (struct btree_iter*,int *,int ) ;
 struct btree* FUNC_8 (TYPE_1__*,struct btree_op*,struct bkey*,scalar_t__,int,struct btree*) ;
 int FUNC_9 (struct btree*,struct closure*) ;
 int VAR_3 ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (struct btree*,struct btree_op*,struct gc_stat*,struct gc_merge_info*) ;
 int FUNC_12 (struct btree*) ;
 int FUNC_13 (struct btree*,struct gc_stat*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct btree*,struct btree_op*,struct btree*) ;
 scalar_t__ FUNC_16 (struct btree*) ;
 int FUNC_17 (struct gc_merge_info*,struct gc_merge_info*,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 () ;
 int FUNC_21 (int,struct btree*) ;

__attribute__((used)) static int FUNC_22(struct btree *VAR_4, struct btree_op *VAR_5,
       struct closure *VAR_6, struct gc_stat *VAR_7)
{
 int VAR_8 = 0;
 bool VAR_9;
 struct bkey *VAR_10;
 struct btree_iter VAR_11;
 struct gc_merge_info VAR_12[VAR_2];
 struct gc_merge_info *VAR_13, *VAR_14 = VAR_12 + FUNC_0(VAR_12) - 1;

 FUNC_6(&VAR_4->keys, &VAR_11, &VAR_4->c->gc_done);

 for (VAR_13 = VAR_12; VAR_13 < VAR_12 + FUNC_0(VAR_12); VAR_13++)
  VAR_13->b = FUNC_1(-VAR_1);

 while (1) {
  VAR_10 = FUNC_7(&VAR_11, &VAR_4->keys, VAR_3);
  if (VAR_10) {
   VAR_12->b = FUNC_8(VAR_4->c, VAR_5, VAR_10, VAR_4->level - 1,
        1, VAR_4);
   if (FUNC_2(VAR_12->b)) {
    VAR_8 = FUNC_4(VAR_12->b);
    break;
   }

   VAR_12->keys = FUNC_12(VAR_12->b);

   VAR_8 = FUNC_11(VAR_4, VAR_5, VAR_7, VAR_12);
   if (VAR_8)
    break;
  }

  if (!VAR_14->b)
   break;

  if (!FUNC_2(VAR_14->b)) {
   VAR_9 = FUNC_13(VAR_14->b, VAR_7);
   if (VAR_9) {
    VAR_8 = FUNC_15(VAR_4, VAR_5, VAR_14->b);
    if (VAR_8)
     break;
   }

   if (VAR_14->b->level) {
    VAR_8 = FUNC_22(VAR_14->b, VAR_5, VAR_6, VAR_7);
    if (VAR_8)
     break;
   }

   FUNC_10(&VAR_4->c->gc_done, &VAR_14->b->key);





   FUNC_18(&VAR_14->b->write_lock);
   if (FUNC_16(VAR_14->b))
    FUNC_9(VAR_14->b, VAR_6);
   FUNC_19(&VAR_14->b->write_lock);
   FUNC_21(1, VAR_14->b);
  }

  FUNC_17(VAR_12 + 1, VAR_12, sizeof(VAR_12[0]) * (VAR_2 - 1));
  VAR_12->b = ((void*)0);

  if (FUNC_5(&VAR_4->c->search_inflight) &&
      VAR_7->nodes >= VAR_7->nodes_pre + FUNC_14(VAR_4->c)) {
   VAR_7->nodes_pre = VAR_7->nodes;
   VAR_8 = -VAR_0;
   break;
  }

  if (FUNC_20()) {
   VAR_8 = -VAR_0;
   break;
  }
 }

 for (VAR_13 = VAR_12; VAR_13 < VAR_12 + FUNC_0(VAR_12); VAR_13++)
  if (!FUNC_3(VAR_13->b)) {
   FUNC_18(&VAR_13->b->write_lock);
   if (FUNC_16(VAR_13->b))
    FUNC_9(VAR_13->b, VAR_6);
   FUNC_19(&VAR_13->b->write_lock);
   FUNC_21(1, VAR_13->b);
  }

 return VAR_8;
}
