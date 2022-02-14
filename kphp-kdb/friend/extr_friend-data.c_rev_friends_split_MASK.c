
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x1; int x2; struct TYPE_5__* right; struct TYPE_5__* left; } ;
typedef TYPE_1__ rev_friends_t ;



__attribute__((used)) static void FUNC_0 (rev_friends_t **VAR_0, rev_friends_t **VAR_1, rev_friends_t *VAR_2, int VAR_3, int VAR_4) {
  if (!VAR_2) { *VAR_0 = *VAR_1 = 0; return; }
  if (VAR_3 < VAR_2->x1 || (VAR_3 == VAR_2->x1 && VAR_4 < VAR_2->x2)) {
    *VAR_1 = VAR_2;
    FUNC_0 (VAR_0, &VAR_2->left, VAR_2->left, VAR_3, VAR_4);
  } else {
    *VAR_0 = VAR_2;
    FUNC_0 (&VAR_2->right, VAR_1, VAR_2->right, VAR_3, VAR_4);
  }
}
