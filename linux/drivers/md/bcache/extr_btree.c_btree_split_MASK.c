
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct keylist {int top; } ;
struct closure {int dummy; } ;
struct btree_op {int dummy; } ;
struct btree {scalar_t__ level; int key; TYPE_5__* c; int * parent; int write_lock; } ;
struct bkey {int dummy; } ;
struct TYPE_9__ {int btree_split_time; } ;
struct TYPE_8__ {int keys; int start; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct btree* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct btree*) ;
 int VAR_3 ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (struct btree*,struct btree_op*,struct keylist*,struct bkey*) ;
 int FUNC_5 (int *,struct btree_op*,struct keylist*,int *,int *) ;
 struct btree* FUNC_6 (TYPE_5__*,struct btree_op*,scalar_t__,int *) ;
 int FUNC_7 (struct btree*,struct closure*) ;
 int FUNC_8 (struct btree*) ;
 int FUNC_9 (struct keylist*,int *) ;
 int FUNC_10 (struct keylist*) ;
 int FUNC_11 (struct keylist*) ;
 int FUNC_12 (struct keylist*) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (TYPE_5__*) ;
 int * FUNC_18 (TYPE_1__*,unsigned int) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (struct btree*) ;
 TYPE_1__* FUNC_21 (struct btree*) ;
 scalar_t__ FUNC_22 (struct btree*,struct btree_op*) ;
 struct btree* FUNC_23 (struct btree*,struct btree_op*) ;
 int FUNC_24 (struct btree*) ;
 int FUNC_25 (struct closure*) ;
 int FUNC_26 (struct closure*) ;
 int FUNC_27 () ;
 int FUNC_28 (struct btree*,int ) ;
 int FUNC_29 (int ,int ,int) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int,struct btree*) ;
 int FUNC_33 (TYPE_1__*,int ) ;
 int FUNC_34 (struct btree*,int) ;
 int FUNC_35 (struct btree*,int) ;

__attribute__((used)) static int FUNC_36(struct btree *VAR_4, struct btree_op *VAR_5,
         struct keylist *VAR_6,
         struct bkey *VAR_7)
{
 bool VAR_8;
 struct btree *VAR_9, *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 uint64_t VAR_12 = FUNC_27();
 struct closure VAR_13;
 struct keylist VAR_14;

 FUNC_25(&VAR_13);
 FUNC_11(&VAR_14);

 if (FUNC_22(VAR_4, VAR_5)) {
  if (!VAR_4->level)
   return -VAR_1;
  else
   FUNC_3(1, "insufficient reserve for split\n");
 }

 VAR_9 = FUNC_23(VAR_4, VAR_5);
 if (FUNC_2(VAR_9))
  goto err;

 VAR_8 = FUNC_33(FUNC_21(VAR_9),
      FUNC_17(VAR_9->c)) > (FUNC_20(VAR_4) * 4) / 5;

 if (VAR_8) {
  unsigned int VAR_15 = 0;

  FUNC_35(VAR_4, FUNC_21(VAR_9)->keys);

  VAR_10 = FUNC_6(VAR_4->c, VAR_5, VAR_4->level, VAR_4->parent);
  if (FUNC_2(VAR_10))
   goto err_free1;

  if (!VAR_4->parent) {
   VAR_11 = FUNC_6(VAR_4->c, VAR_5, VAR_4->level + 1, ((void*)0));
   if (FUNC_2(VAR_11))
    goto err_free2;
  }

  FUNC_30(&VAR_9->write_lock);
  FUNC_30(&VAR_10->write_lock);

  FUNC_4(VAR_9, VAR_5, VAR_6, VAR_7);






  while (VAR_15 < (FUNC_21(VAR_9)->keys * 3) / 5)
   VAR_15 += FUNC_16(FUNC_18(FUNC_21(VAR_9),
       VAR_15));

  FUNC_14(&VAR_9->key,
         FUNC_18(FUNC_21(VAR_9), VAR_15));
  VAR_15 += FUNC_16(FUNC_18(FUNC_21(VAR_9), VAR_15));

  FUNC_21(VAR_10)->keys = FUNC_21(VAR_9)->keys - VAR_15;
  FUNC_21(VAR_9)->keys = VAR_15;

  FUNC_29(FUNC_21(VAR_10)->start,
         FUNC_19(FUNC_21(VAR_9)),
         FUNC_21(VAR_10)->keys * sizeof(uint64_t));

  FUNC_14(&VAR_10->key, &VAR_4->key);

  FUNC_9(&VAR_14, &VAR_10->key);
  FUNC_7(VAR_10, &VAR_13);
  FUNC_31(&VAR_10->write_lock);
  FUNC_32(1, VAR_10);
 } else {
  FUNC_34(VAR_4, FUNC_21(VAR_9)->keys);

  FUNC_30(&VAR_9->write_lock);
  FUNC_4(VAR_9, VAR_5, VAR_6, VAR_7);
 }

 FUNC_9(&VAR_14, &VAR_9->key);
 FUNC_7(VAR_9, &VAR_13);
 FUNC_31(&VAR_9->write_lock);

 if (VAR_11) {

  FUNC_30(&VAR_11->write_lock);
  FUNC_14(&VAR_11->key, &VAR_3);
  FUNC_4(VAR_11, VAR_5, &VAR_14, ((void*)0));
  FUNC_7(VAR_11, &VAR_13);
  FUNC_31(&VAR_11->write_lock);

  FUNC_26(&VAR_13);
  FUNC_8(VAR_11);
  FUNC_32(1, VAR_11);
 } else if (!VAR_4->parent) {

  FUNC_26(&VAR_13);
  FUNC_8(VAR_9);
 } else {

  FUNC_26(&VAR_13);
  FUNC_28(VAR_4, VAR_14.top);
  FUNC_12(&VAR_14);

  FUNC_5(VAR_4->parent, VAR_5, &VAR_14, ((void*)0), ((void*)0));
  FUNC_0(!FUNC_10(&VAR_14));
 }

 FUNC_24(VAR_4);
 FUNC_32(1, VAR_9);

 FUNC_13(&VAR_4->c->btree_split_time, VAR_12);

 return 0;
err_free2:
 FUNC_15(VAR_4->c, &VAR_10->key);
 FUNC_24(VAR_10);
 FUNC_32(1, VAR_10);
err_free1:
 FUNC_15(VAR_4->c, &VAR_9->key);
 FUNC_24(VAR_9);
 FUNC_32(1, VAR_9);
err:
 FUNC_3(1, "bcache: btree split failed (level %u)", VAR_4->level);

 if (VAR_11 == FUNC_1(-VAR_0) ||
     VAR_10 == FUNC_1(-VAR_0) ||
     VAR_9 == FUNC_1(-VAR_0))
  return -VAR_0;

 return -VAR_2;
}
