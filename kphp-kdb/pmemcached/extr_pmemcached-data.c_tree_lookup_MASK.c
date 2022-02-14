
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
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char const*,int,int ,int ,scalar_t__) ;

__attribute__((used)) static tree_t *FUNC_3 (tree_t *VAR_0, const char *VAR_1, int VAR_2) {
  int VAR_3;
  int VAR_4 = 1;
  int VAR_5 = 1;
  while (VAR_0 && (VAR_3 = FUNC_2 (VAR_1, VAR_2, VAR_0->x->key, VAR_0->x->key_len, FUNC_1 (VAR_4, VAR_5) - 1))) {
    VAR_0 = (VAR_3 < 0) ? VAR_0->left : VAR_0->right;
    if (VAR_3 < 0) {
      VAR_5 = -VAR_3;
    } else {
      FUNC_0 (VAR_3 > 0);
      VAR_4 = VAR_3;
    }
  }
  return VAR_0;
}
