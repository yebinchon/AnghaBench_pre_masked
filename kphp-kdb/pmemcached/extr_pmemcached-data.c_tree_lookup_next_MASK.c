
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* right; struct TYPE_6__* left; TYPE_1__* x; } ;
typedef TYPE_2__ tree_t ;
struct TYPE_5__ {int key_len; int key; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char const*,int,int ,int ,int) ;

__attribute__((used)) static tree_t *FUNC_3 (tree_t *VAR_0, const char *VAR_1, int VAR_2, int VAR_3, int VAR_4) {

  if (!VAR_0) {
    return 0;
  }
  int VAR_5 = FUNC_2 (VAR_1, VAR_2, VAR_0->x->key, VAR_0->x->key_len, FUNC_1 (VAR_3, VAR_4) - 1);
  if (VAR_5 < 0) {
    FUNC_0 (-VAR_5 >= FUNC_1 (VAR_3, VAR_4));
    tree_t *VAR_6 = FUNC_3 (VAR_0->left, VAR_1, VAR_2, VAR_3, -VAR_5);
    return VAR_6 ? VAR_6 : VAR_0;
  } else {
    if (VAR_5 == 0) { VAR_5 = 2000; }
    FUNC_0 (VAR_5 >= FUNC_1 (VAR_3, VAR_4));
    return FUNC_3 (VAR_0->right, VAR_1, VAR_2, VAR_5, VAR_4);
  }
}
