
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct btree_keys {TYPE_1__* set; } ;
struct btree_iter {int dummy; } ;
struct bset_sort_state {int time; } ;
struct TYPE_2__ {scalar_t__ size; int data; } ;


 int FUNC_0 (struct btree_keys*,struct btree_iter*,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct btree_keys*,int ,struct btree_iter*,int,int) ;
 int FUNC_3 () ;

void FUNC_4(struct btree_keys *VAR_0, struct btree_keys *VAR_1,
    struct bset_sort_state *VAR_2)
{
 uint64_t VAR_3 = FUNC_3();
 struct btree_iter VAR_4;

 FUNC_0(VAR_0, &VAR_4, ((void*)0));

 FUNC_2(VAR_0, VAR_1->set->data, &VAR_4, 0, 1);

 FUNC_1(&VAR_2->time, VAR_3);

 VAR_1->set->size = 0;
}
