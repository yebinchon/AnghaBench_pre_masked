
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_keys {int page_order; struct bset_tree* set; } ;
struct bset_tree {int * data; int * tree; int * prev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct btree_keys*) ;
 scalar_t__ FUNC_1 (struct btree_keys*) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct btree_keys *VAR_1)
{
 struct bset_tree *VAR_2 = VAR_1->set;

 if (FUNC_0(VAR_1) < VAR_0)
  FUNC_4(VAR_2->prev);
 else
  FUNC_2((unsigned long) VAR_2->prev,
      FUNC_3(FUNC_0(VAR_1)));

 if (FUNC_1(VAR_1) < VAR_0)
  FUNC_4(VAR_2->tree);
 else
  FUNC_2((unsigned long) VAR_2->tree,
      FUNC_3(FUNC_1(VAR_1)));

 FUNC_2((unsigned long) VAR_2->data, VAR_1->page_order);

 VAR_2->prev = ((void*)0);
 VAR_2->tree = ((void*)0);
 VAR_2->data = ((void*)0);
}
