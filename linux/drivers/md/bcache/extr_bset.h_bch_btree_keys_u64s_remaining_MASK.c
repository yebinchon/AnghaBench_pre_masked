
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btree_keys {int page_order; int last_set_unwritten; } ;
struct bset_tree {int data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct btree_keys*,int ) ;
 struct bset_tree* FUNC_2 (struct btree_keys*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline size_t FUNC_4(struct btree_keys *VAR_1)
{
 struct bset_tree *VAR_2 = FUNC_2(VAR_1);

 FUNC_0((VAR_0 << VAR_1->page_order) <
        (FUNC_1(VAR_1, VAR_2->data) + FUNC_3(VAR_2->data)));

 if (!VAR_1->last_set_unwritten)
  return 0;

 return ((VAR_0 << VAR_1->page_order) -
  (FUNC_1(VAR_1, VAR_2->data) + FUNC_3(VAR_2->data))) /
  sizeof(u64);
}
