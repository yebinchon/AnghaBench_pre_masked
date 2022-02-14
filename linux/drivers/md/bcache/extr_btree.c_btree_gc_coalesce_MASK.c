
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct keylist {int top; } ;
struct gc_stat {int nodes; } ;
struct gc_merge_info {unsigned int keys; struct btree* b; } ;
struct closure {int dummy; } ;
struct btree_op {int dummy; } ;
struct TYPE_6__ {TYPE_1__* set; } ;
struct btree {TYPE_3__* c; struct gc_merge_info key; int write_lock; TYPE_2__ keys; } ;
struct bset {unsigned int keys; struct gc_merge_info* start; } ;
struct bkey {unsigned int keys; struct btree* b; } ;
typedef int r ;
typedef int new_nodes ;
struct TYPE_7__ {int prio_blocked; } ;
struct TYPE_5__ {struct bset* data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct btree* FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct btree*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct keylist*,unsigned int) ;
 unsigned int FUNC_4 (struct bset*,unsigned int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct btree*,struct btree_op*,struct keylist*,int *,int *) ;
 int FUNC_7 (struct btree*,struct closure*) ;
 int FUNC_8 (struct keylist*,struct gc_merge_info*) ;
 int FUNC_9 (struct keylist*) ;
 int FUNC_10 (struct keylist*) ;
 int FUNC_11 (struct keylist*) ;
 struct gc_merge_info* FUNC_12 (struct keylist*) ;
 int FUNC_13 (struct keylist*) ;
 int FUNC_14 (struct gc_merge_info*,int *) ;
 int FUNC_15 (struct gc_merge_info*,struct gc_merge_info*) ;
 struct gc_merge_info* FUNC_16 (struct gc_merge_info*) ;
 unsigned int FUNC_17 (struct gc_merge_info*) ;
 int FUNC_18 (TYPE_3__*) ;
 struct gc_merge_info* FUNC_19 (struct bset*,unsigned int) ;
 struct gc_merge_info* FUNC_20 (struct bset*) ;
 unsigned int FUNC_21 (struct btree*) ;
 struct bset* FUNC_22 (struct btree*) ;
 scalar_t__ FUNC_23 (struct btree*,int *) ;
 int FUNC_24 (TYPE_3__*) ;
 struct btree* FUNC_25 (struct btree*,int *) ;
 int FUNC_26 (struct btree*) ;
 int FUNC_27 (struct closure*) ;
 int FUNC_28 (struct closure*) ;
 int FUNC_29 (struct btree*,int ) ;
 int FUNC_30 (struct gc_merge_info*,struct gc_merge_info*,int) ;
 int FUNC_31 (struct gc_merge_info*,struct gc_merge_info*,int) ;
 int FUNC_32 (struct btree**,int ,int) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int,struct btree*) ;
 int FUNC_36 (unsigned int) ;

__attribute__((used)) static int FUNC_37(struct btree *VAR_3, struct btree_op *VAR_4,
        struct gc_stat *VAR_5, struct gc_merge_info *VAR_6)
{
 unsigned int VAR_7, VAR_8 = 0, VAR_9 = 0, VAR_10;
 struct btree *VAR_11[VAR_1];
 struct keylist VAR_12;
 struct closure VAR_13;
 struct bkey *VAR_14;

 FUNC_11(&VAR_12);

 if (FUNC_23(VAR_3, ((void*)0)))
  return 0;

 FUNC_32(VAR_11, 0, sizeof(VAR_11));
 FUNC_27(&VAR_13);

 while (VAR_8 < VAR_1 && !FUNC_2(VAR_6[VAR_8].b))
  VAR_9 += VAR_6[VAR_8++].keys;

 VAR_10 = FUNC_24(VAR_3->c) * 2 / 3;

 if (VAR_8 < 2 ||
     FUNC_4(VAR_3->keys.set[0].data, VAR_9,
    FUNC_18(VAR_3->c)) > VAR_10 * (VAR_8 - 1))
  return 0;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_11[VAR_7] = FUNC_25(VAR_6[VAR_7].b, ((void*)0));
  if (FUNC_2(VAR_11[VAR_7]))
   goto out_nocoalesce;
 }







 if (FUNC_23(VAR_3, ((void*)0)))
  goto out_nocoalesce;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  FUNC_33(&VAR_11[VAR_7]->write_lock);

 for (VAR_7 = VAR_8 - 1; VAR_7 > 0; --VAR_7) {
  struct bset *VAR_15 = FUNC_22(VAR_11[VAR_7]);
  struct bset *VAR_16 = FUNC_22(VAR_11[VAR_7 - 1]);
  struct bkey *VAR_17, *VAR_18 = ((void*)0);

  VAR_9 = 0;

  if (VAR_7 > 1) {
   for (VAR_17 = VAR_16->start;
        VAR_17 < FUNC_20(VAR_16);
        VAR_17 = FUNC_16(VAR_17)) {
    if (FUNC_4(VAR_15, VAR_15->keys + VAR_9 +
       FUNC_17(VAR_17),
       FUNC_18(VAR_3->c)) > VAR_10)
     break;

    VAR_18 = VAR_17;
    VAR_9 += FUNC_17(VAR_17);
   }
  } else {
   if (FUNC_4(VAR_15, VAR_15->keys + VAR_16->keys,
      FUNC_18(VAR_3->c)) >
       FUNC_21(VAR_11[VAR_7]))
    goto out_nocoalesce;

   VAR_9 = VAR_16->keys;

   VAR_18 = &VAR_6->b->key;
  }

  FUNC_0(FUNC_4(VAR_15, VAR_15->keys + VAR_9, FUNC_18(VAR_3->c)) >
         FUNC_21(VAR_11[VAR_7]));

  if (VAR_18)
   FUNC_15(&VAR_11[VAR_7]->key, VAR_18);

  FUNC_30(FUNC_20(VAR_15),
         VAR_16->start,
         (void *) FUNC_19(VAR_16, VAR_9) - (void *) VAR_16->start);

  VAR_15->keys += VAR_9;
  VAR_6[VAR_7].keys = VAR_15->keys;

  FUNC_31(VAR_16->start,
   FUNC_19(VAR_16, VAR_9),
   (void *) FUNC_20(VAR_16) -
   (void *) FUNC_19(VAR_16, VAR_9));

  VAR_16->keys -= VAR_9;

  if (FUNC_3(&VAR_12,
       FUNC_17(&VAR_11[VAR_7]->key)))
   goto out_nocoalesce;

  FUNC_7(VAR_11[VAR_7], &VAR_13);
  FUNC_8(&VAR_12, &VAR_11[VAR_7]->key);
 }

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  FUNC_34(&VAR_11[VAR_7]->write_lock);

 FUNC_28(&VAR_13);


 FUNC_0(FUNC_22(VAR_11[0])->keys);
 FUNC_26(VAR_11[0]);
 FUNC_35(1, VAR_11[0]);
 VAR_11[0] = ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  if (FUNC_3(&VAR_12, FUNC_17(&VAR_6[VAR_7].b->key)))
   goto out_nocoalesce;

  FUNC_29(VAR_6[VAR_7].b, VAR_12.top);
  FUNC_13(&VAR_12);
 }

 FUNC_6(VAR_3, VAR_4, &VAR_12, ((void*)0), ((void*)0));
 FUNC_0(!FUNC_9(&VAR_12));

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  FUNC_26(VAR_6[VAR_7].b);
  FUNC_35(1, VAR_6[VAR_7].b);

  VAR_6[VAR_7].b = VAR_11[VAR_7];
 }

 FUNC_31(VAR_6, VAR_6 + 1, sizeof(VAR_6[0]) * (VAR_8 - 1));
 VAR_6[VAR_8 - 1].b = FUNC_1(-VAR_0);

 FUNC_36(VAR_8);
 VAR_5->nodes--;

 FUNC_10(&VAR_12);


 return -VAR_0;

out_nocoalesce:
 FUNC_28(&VAR_13);

 while ((VAR_14 = FUNC_12(&VAR_12)))
  if (!FUNC_14(VAR_14, &VAR_2))
   FUNC_5(&VAR_3->c->prio_blocked);
 FUNC_10(&VAR_12);

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  if (!FUNC_2(VAR_11[VAR_7])) {
   FUNC_26(VAR_11[VAR_7]);
   FUNC_35(1, VAR_11[VAR_7]);
  }
 return 0;
}
