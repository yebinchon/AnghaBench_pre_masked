
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* right; TYPE_3__* x; struct TYPE_4__* left; } ;
typedef TYPE_1__ tree_t ;
struct TYPE_5__ {int key_len; int key; } ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char const*,int,int ,int ,scalar_t__) ;

int FUNC_3 (tree_t *VAR_0, const char *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6) {

  if (!VAR_0) {
    return 0;
  }
  int VAR_7 = FUNC_2 (VAR_1, VAR_2, VAR_0->x->key, VAR_0->x->key_len, FUNC_1 (VAR_5, VAR_6) - 1);
  if (VAR_7 < 0 || VAR_7 > VAR_3) {
    int VAR_8 = FUNC_3 (VAR_0->left, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_7 < 0 ? -VAR_7 : VAR_7);
    if (VAR_8 < 0) { return VAR_8; }
  }
  if ((VAR_7 == 0 && !VAR_4) || VAR_7 < -VAR_3 || VAR_7 > VAR_3) {
    int VAR_9 = FUNC_0 (VAR_0->x);
    if (VAR_9 < 0) { return VAR_9; }
  }
  if (VAR_7 > 0 || VAR_7 < -VAR_3) {
    int VAR_10 = FUNC_3 (VAR_0->right, VAR_1, VAR_2, VAR_3, VAR_4, VAR_7 < 0 ? -VAR_7 : VAR_7, VAR_6);
    if (VAR_10 < 0) { return VAR_10; }
  }
  return 0;
}
