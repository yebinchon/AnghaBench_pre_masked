
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int text; int extra; struct tree* right; struct tree* left; } ;



unsigned FUNC_0 (struct tree *VAR_0, int VAR_1) {
  if (!VAR_0) {
    return 0;
  }
  if (VAR_0->text == VAR_1) {
    return VAR_0->extra;
  }
  if (VAR_0->text != 0) {
    return 0;
  }
  return FUNC_0 (VAR_0->left, VAR_1) + FUNC_0 (VAR_0->right, VAR_1);
}
