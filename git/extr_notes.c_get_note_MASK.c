
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int hash; } ;
struct notes_tree {int root; int initialized; } ;
struct leaf_node {struct object_id const val_oid; } ;


 int FUNC_0 (int ) ;
 struct notes_tree VAR_0 ;
 struct leaf_node* FUNC_1 (struct notes_tree*,int ,int ,int ) ;

const struct object_id *FUNC_2(struct notes_tree *VAR_1,
  const struct object_id *VAR_2)
{
 struct leaf_node *VAR_3;

 if (!VAR_1)
  VAR_1 = &VAR_0;
 FUNC_0(VAR_1->initialized);
 VAR_3 = FUNC_1(VAR_1, VAR_1->root, 0, VAR_2->hash);
 return VAR_3 ? &VAR_3->val_oid : ((void*)0);
}
