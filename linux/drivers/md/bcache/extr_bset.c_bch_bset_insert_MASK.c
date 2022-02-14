
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct btree_keys {int page_order; int last_set_unwritten; } ;
struct bset_tree {TYPE_1__* data; } ;
struct bkey {int dummy; } ;
struct TYPE_4__ {int keys; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct btree_keys*,struct bset_tree*,struct bkey*) ;
 int FUNC_3 (struct bkey*,struct bkey*) ;
 int FUNC_4 (struct bkey*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (struct btree_keys*,TYPE_1__*) ;
 struct bset_tree* FUNC_7 (struct btree_keys*) ;
 int FUNC_8 (int *,struct bkey*,int) ;

void FUNC_9(struct btree_keys *VAR_1, struct bkey *VAR_2,
       struct bkey *VAR_3)
{
 struct bset_tree *VAR_4 = FUNC_7(VAR_1);

 FUNC_0(!VAR_1->last_set_unwritten);
 FUNC_0(FUNC_6(VAR_1, VAR_4->data) +
        FUNC_1(VAR_4->data, VAR_4->data->keys + FUNC_4(VAR_3)) >
        VAR_0 << VAR_1->page_order);

 FUNC_8((uint64_t *) VAR_2 + FUNC_4(VAR_3),
  VAR_2,
  (void *) FUNC_5(VAR_4->data) - (void *) VAR_2);

 VAR_4->data->keys += FUNC_4(VAR_3);
 FUNC_3(VAR_2, VAR_3);
 FUNC_2(VAR_1, VAR_4, VAR_2);
}
