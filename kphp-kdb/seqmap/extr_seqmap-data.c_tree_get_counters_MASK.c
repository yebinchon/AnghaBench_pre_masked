
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {scalar_t__ plus_unsure; struct item* left; scalar_t__ minus_unsure; scalar_t__ delta; struct item* right; } ;


 int FUNC_0 (struct item*,struct item*) ;
 int FUNC_1 (struct item*,int*) ;

__attribute__((used)) static void FUNC_2 (struct item *VAR_0, struct item *VAR_1, int VAR_2[3]) {
  if (!VAR_0) { return; }
  int VAR_3 = FUNC_0 (VAR_0, VAR_1);
  if (VAR_3 > 0) {
    FUNC_2 (VAR_0->left, VAR_1, VAR_2);
  } else {
    if (VAR_3) {
      FUNC_2 (VAR_0->right, VAR_1, VAR_2);
      FUNC_1 (VAR_0, VAR_2);
    }
    if (VAR_0->left) {
      VAR_2[0] += VAR_0->left->delta;
      VAR_2[1] += VAR_0->left->minus_unsure;
      VAR_2[2] += VAR_0->left->plus_unsure;
    }
  }
}
