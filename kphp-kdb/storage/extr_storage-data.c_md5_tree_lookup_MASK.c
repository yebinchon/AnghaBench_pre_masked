
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* right; struct TYPE_4__* left; int * x; } ;
typedef TYPE_1__ md5_tree_t ;


 int FUNC_0 (unsigned char*,int *,int) ;

__attribute__((used)) static md5_tree_t *FUNC_1 (md5_tree_t *VAR_0, unsigned char VAR_1[16]) {
  while (VAR_0) {
    int VAR_2 = FUNC_0 (&VAR_1[0], &VAR_0->x[0], 16);
    if (VAR_2 < 0) {
      VAR_0 = VAR_0->left;
    } else if (VAR_2 > 0) {
      VAR_0 = VAR_0->right;
    } else {
      return VAR_0;
    }
  }
  return VAR_0;
}
