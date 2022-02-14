
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct keylist {int dummy; } ;
struct closure {int dummy; } ;
struct btree_op {scalar_t__ lock; } ;
struct TYPE_5__ {scalar_t__ last_set_unwritten; } ;
struct btree {TYPE_3__* c; int write_lock; scalar_t__ level; TYPE_1__ keys; } ;
struct bkey {int dummy; } ;
typedef int atomic_t ;
struct TYPE_8__ {scalar_t__ bio_list; } ;
struct TYPE_7__ {TYPE_2__* root; } ;
struct TYPE_6__ {scalar_t__ level; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct btree*) ;
 scalar_t__ FUNC_2 (struct btree*,struct btree_op*,struct keylist*,struct bkey*) ;
 int FUNC_3 (struct btree*,int *) ;
 int FUNC_4 (struct btree*,struct closure*) ;
 scalar_t__ FUNC_5 (struct keylist*) ;
 scalar_t__ FUNC_6 (struct keylist*) ;
 scalar_t__ FUNC_7 (struct btree*) ;
 int FUNC_8 (struct btree*,struct btree_op*,struct keylist*,struct bkey*) ;
 int FUNC_9 (struct closure*) ;
 int FUNC_10 (struct closure*) ;
 TYPE_4__* VAR_2 ;
 scalar_t__ FUNC_11 (struct btree*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct btree*) ;

__attribute__((used)) static int FUNC_15(struct btree *VAR_3, struct btree_op *VAR_4,
     struct keylist *VAR_5,
     atomic_t *VAR_6,
     struct bkey *VAR_7)
{
 struct closure VAR_8;

 FUNC_0(VAR_3->level && VAR_7);

 FUNC_9(&VAR_8);

 FUNC_12(&VAR_3->write_lock);

 if (FUNC_14(VAR_3) != FUNC_7(VAR_3) &&
     VAR_3->keys.last_set_unwritten)
  FUNC_1(VAR_3);

 if (FUNC_6(VAR_5) > FUNC_11(VAR_3)) {
  FUNC_13(&VAR_3->write_lock);
  goto split;
 }

 FUNC_0(FUNC_14(VAR_3) != FUNC_7(VAR_3));

 if (FUNC_2(VAR_3, VAR_4, VAR_5, VAR_7)) {
  if (!VAR_3->level)
   FUNC_3(VAR_3, VAR_6);
  else
   FUNC_4(VAR_3, &VAR_8);
 }

 FUNC_13(&VAR_3->write_lock);


 FUNC_10(&VAR_8);

 return 0;
split:
 if (VAR_2->bio_list) {
  VAR_4->lock = VAR_3->c->root->level + 1;
  return -VAR_0;
 } else if (VAR_4->lock <= VAR_3->c->root->level) {
  VAR_4->lock = VAR_3->c->root->level + 1;
  return -VAR_1;
 } else {

  int VAR_9 = FUNC_8(VAR_3, VAR_4, VAR_5, VAR_7);

  if (FUNC_5(VAR_5))
   return 0;
  else if (!VAR_9)
   return -VAR_1;
  return VAR_9;
 }
}
