
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btree_keys {int last_set_unwritten; TYPE_2__* set; } ;
struct bset_tree {scalar_t__ tree; int size; TYPE_1__* data; int * prev; } ;
struct TYPE_4__ {scalar_t__ tree; } ;
struct TYPE_3__ {int start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bset_tree*,int ,int ) ;
 int FUNC_2 (struct btree_keys*,struct bset_tree*) ;
 struct bset_tree* FUNC_3 (struct btree_keys*) ;
 scalar_t__ FUNC_4 (struct btree_keys*) ;

__attribute__((used)) static void FUNC_5(struct btree_keys *VAR_0)
{
 struct bset_tree *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_0->last_set_unwritten);
 VAR_0->last_set_unwritten = 1;

 FUNC_2(VAR_0, VAR_1);

 if (VAR_1->tree != VAR_0->set->tree + FUNC_4(VAR_0)) {
  VAR_1->prev[0] = FUNC_1(VAR_1, 0, VAR_1->data->start);
  VAR_1->size = 1;
 }
}
