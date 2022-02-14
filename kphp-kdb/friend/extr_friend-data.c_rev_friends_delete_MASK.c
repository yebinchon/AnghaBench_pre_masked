
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int x1; int x2; struct TYPE_9__* right; struct TYPE_9__* left; } ;
typedef TYPE_1__ rev_friends_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static rev_friends_t *FUNC_3 (rev_friends_t *VAR_0, int VAR_1, int VAR_2) {
  FUNC_0 (VAR_0);
  if (VAR_0->x1 == VAR_1 && VAR_0->x2 == VAR_2) {
    rev_friends_t *VAR_3 = FUNC_2 (VAR_0->left, VAR_0->right);
    FUNC_1 (VAR_0);
    return VAR_3;
  }
  if (VAR_1 < VAR_0->x1 || (VAR_1 == VAR_0->x1 && VAR_2 < VAR_0->x2)) {
    VAR_0->left = FUNC_3 (VAR_0->left, VAR_1, VAR_2);
  } else {
    VAR_0->right = FUNC_3 (VAR_0->right, VAR_1, VAR_2);
  }
  return VAR_0;
}
