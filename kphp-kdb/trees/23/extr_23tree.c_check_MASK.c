
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x1; int x2; struct TYPE_3__* middle; struct TYPE_3__* right; struct TYPE_3__* left; } ;
typedef TYPE_1__ tree23_t ;



__attribute__((used)) static int FUNC_0 (tree23_t *VAR_0, int VAR_1, int VAR_2) {
  if (!VAR_0) return 0;
  if (VAR_0->x1 < VAR_1 || VAR_0->x1 > VAR_2 || VAR_0->x2 < VAR_1 || VAR_0->x2 > VAR_2) return -239017;
  if (VAR_0->x1 & 1) {
    if (VAR_0->x2 & 1) {
      if (VAR_0->x2 != VAR_0->x1) return -239017;
    } else {
      if (VAR_0->x2 < VAR_0->x1) return -239017;
    }
    return 1;
  }
  int VAR_3 = FUNC_0 (VAR_0->left, VAR_1, VAR_0->x1 - 1);
  int VAR_4 = FUNC_0 (VAR_0->right, (VAR_0->x2 | 1) + 1, VAR_2);
  if (VAR_3 != VAR_4) VAR_3 = -239017;
  if (!(VAR_0->x2 & 1)) {
    VAR_4 = FUNC_0 (VAR_0->middle, VAR_0->x1 + 2, VAR_0->x2 - 1);
    if (VAR_3 != VAR_4) VAR_3 = -239017;
    if (VAR_0->x2 < VAR_0->x1) return -239017;
  } else {
    if (VAR_0->x2 != VAR_0->x1 + 1) return -239017;
  }
  return ++VAR_3;
}
