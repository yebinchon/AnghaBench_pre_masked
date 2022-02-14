
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* right; struct TYPE_5__* left; int * x; } ;
typedef TYPE_1__ md5_tree_t ;


 scalar_t__ FUNC_0 (unsigned char*,int *,int) ;

__attribute__((used)) static void FUNC_1 (md5_tree_t **VAR_0, md5_tree_t **VAR_1, md5_tree_t *VAR_2, unsigned char VAR_3[16]) {
  if (!VAR_2) { *VAR_0 = *VAR_1 = 0; return; }
  if (FUNC_0 (&VAR_3[0], &VAR_2->x[0], 16) < 0) {
    *VAR_1 = VAR_2;
    FUNC_1 (VAR_0, &VAR_2->left, VAR_2->left, VAR_3);
  } else {
    *VAR_0 = VAR_2;
    FUNC_1 (&VAR_2->right, VAR_1, VAR_2->right, VAR_3);
  }
}
