
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* right; struct TYPE_3__* left; int x; } ;
typedef TYPE_1__ tree_t ;
typedef int rev_friends_t ;


 int * FUNC_0 (int *,int ,int) ;

__attribute__((used)) static rev_friends_t *FUNC_1 (rev_friends_t *VAR_0, int VAR_1, tree_t *VAR_2) {
  if (!VAR_2) {
    return VAR_0;
  }
  VAR_0 = FUNC_0 (VAR_0, VAR_2->x, VAR_1);
  VAR_0 = FUNC_1 (VAR_0, VAR_1, VAR_2->left);
  VAR_0 = FUNC_1 (VAR_0, VAR_1, VAR_2->right);
  return VAR_0;
}
