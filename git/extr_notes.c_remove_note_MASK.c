
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notes_tree {int dirty; int root; int initialized; } ;
struct TYPE_2__ {int hash; } ;
struct leaf_node {int val_oid; TYPE_1__ key_oid; } ;


 int FUNC_0 (int ) ;
 struct notes_tree VAR_0 ;
 int FUNC_1 (int ,unsigned char const*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct notes_tree*,int ,int ,struct leaf_node*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct notes_tree *VAR_1, const unsigned char *VAR_2)
{
 struct leaf_node VAR_3;

 if (!VAR_1)
  VAR_1 = &VAR_0;
 FUNC_0(VAR_1->initialized);
 FUNC_1(VAR_3.key_oid.hash, VAR_2);
 FUNC_4(&VAR_3.val_oid);
 FUNC_3(VAR_1, VAR_1->root, 0, &VAR_3);
 if (FUNC_2(&VAR_3.val_oid))
  return 1;
 VAR_1->dirty = 1;
 return 0;
}
