
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btree_keys {struct bset_tree* set; } ;
struct bset_tree {scalar_t__ prev; scalar_t__ tree; int size; } ;
struct bkey_float {int dummy; } ;
struct TYPE_2__ {scalar_t__ size; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct btree_keys *VAR_1, struct bset_tree *VAR_2)
{
 if (VAR_2 != VAR_1->set) {
  unsigned int VAR_3 = FUNC_0(VAR_2[-1].size,
         64 / sizeof(struct bkey_float));

  VAR_2->tree = VAR_2[-1].tree + VAR_3;
  VAR_2->prev = VAR_2[-1].prev + VAR_3;
 }

 while (VAR_2 < VAR_1->set + VAR_0)
  VAR_2++->size = 0;
}
