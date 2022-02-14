
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {scalar_t__ y; struct item* left; struct item* right; } ;


 int FUNC_0 (struct item*) ;

__attribute__((used)) static struct item *FUNC_1 (struct item *VAR_0, struct item *VAR_1) {
  if (!VAR_0) { return VAR_1; }
  if (!VAR_1) { return VAR_0; }
  if (VAR_0->y > VAR_1->y) {
    VAR_0->right = FUNC_1 (VAR_0->right, VAR_1);
    FUNC_0 (VAR_0);
    return VAR_0;
  } else {
    VAR_1->left = FUNC_1 (VAR_0, VAR_1->left);
    FUNC_0 (VAR_1);
    return VAR_1;
  }
}
