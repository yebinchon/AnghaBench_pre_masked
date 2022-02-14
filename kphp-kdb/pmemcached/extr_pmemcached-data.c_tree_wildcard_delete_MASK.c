
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* right; struct TYPE_9__* left; scalar_t__ x; } ;
typedef TYPE_1__ tree_t ;
struct wildcard_entry {int dummy; } ;
typedef int hash_entry_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct wildcard_entry*) ;
 int FUNC_3 (int *,scalar_t__) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static tree_t *FUNC_5 (tree_t *VAR_0, hash_entry_t *VAR_1) {
  int VAR_2;
  FUNC_0 (VAR_0);
  if (!(VAR_2 = FUNC_3 (VAR_1, VAR_0->x))) {
    tree_t *VAR_3 = FUNC_4 (VAR_0->left, VAR_0->right);
    FUNC_2 ((struct wildcard_entry *)VAR_0->x);
    FUNC_1 (VAR_0);
    return VAR_3;
  }
  if (VAR_2 < 0) {
    VAR_0->left = FUNC_5 (VAR_0->left, VAR_1);
  } else {
    VAR_0->right = FUNC_5 (VAR_0->right, VAR_1);
  }
  return VAR_0;
}
