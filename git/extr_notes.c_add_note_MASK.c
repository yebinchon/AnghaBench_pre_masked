
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct notes_tree {int dirty; int root; scalar_t__ combine_notes; int initialized; } ;
struct leaf_node {int val_oid; int key_oid; } ;
typedef scalar_t__ combine_notes_fn ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct notes_tree VAR_1 ;
 int FUNC_1 (struct notes_tree*,int ,int ,struct leaf_node*,int ,scalar_t__) ;
 int FUNC_2 (int *,struct object_id const*) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct notes_tree *VAR_2, const struct object_id *VAR_3,
  const struct object_id *VAR_4, combine_notes_fn VAR_5)
{
 struct leaf_node *VAR_6;

 if (!VAR_2)
  VAR_2 = &VAR_1;
 FUNC_0(VAR_2->initialized);
 VAR_2->dirty = 1;
 if (!VAR_5)
  VAR_5 = VAR_2->combine_notes;
 VAR_6 = (struct leaf_node *) FUNC_3(sizeof(struct leaf_node));
 FUNC_2(&VAR_6->key_oid, VAR_3);
 FUNC_2(&VAR_6->val_oid, VAR_4);
 return FUNC_1(VAR_2, VAR_2->root, 0, VAR_6, VAR_0, VAR_5);
}
