
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cat; struct TYPE_3__* right; struct TYPE_3__* left; } ;
typedef TYPE_1__ tree_t ;



__attribute__((used)) static void FUNC_0 (tree_t *VAR_0, int VAR_1) {
  if (VAR_0) {
    VAR_0->cat &= VAR_1;
    FUNC_0 (VAR_0->left, VAR_1);
    FUNC_0 (VAR_0->right, VAR_1);
  }
}
