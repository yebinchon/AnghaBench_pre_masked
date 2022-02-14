
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_keys {int page_order; } ;
struct btree_iter {int dummy; } ;
struct bset_sort_state {int dummy; } ;


 int FUNC_0 (struct btree_keys*,struct btree_iter*,int ,int ,int,struct bset_sort_state*) ;

void FUNC_1(struct btree_keys *VAR_0,
        struct btree_iter *VAR_1,
        struct bset_sort_state *VAR_2)
{
 FUNC_0(VAR_0, VAR_1, 0, VAR_0->page_order, 1, VAR_2);
}
