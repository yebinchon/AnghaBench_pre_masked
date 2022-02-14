
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* x; struct TYPE_10__* right; struct TYPE_10__* left; } ;
typedef TYPE_2__ tree_t ;
struct wildcard_entry {int dummy; } ;
struct TYPE_9__ {int key_len; int key; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct wildcard_entry*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (char const*,int,int ,int,scalar_t__) ;
 TYPE_2__* FUNC_6 (TYPE_2__*,TYPE_2__*) ;

tree_t *FUNC_7 (tree_t *VAR_0, const char *VAR_1, int VAR_2, int VAR_3, int VAR_4) {

  if (!VAR_0) {
    return 0;
  }
  int VAR_5 = FUNC_5 (VAR_1, VAR_2, VAR_0->x->key, VAR_0->x->key_len, FUNC_4 (FUNC_0 (VAR_3), FUNC_0 (VAR_4)) - 1);
  FUNC_1 (VAR_3 > 0);
  if (VAR_5 == 0) {
    VAR_5 = VAR_2 + 2;
  }
  if (VAR_5 < 0 || VAR_5 > VAR_3) {
    VAR_0->left = FUNC_7 (VAR_0->left, VAR_1, VAR_2, VAR_3, -VAR_5);
  }
  if (VAR_5 > 0 && (VAR_4 > 0 || -VAR_4 > VAR_5)) {
    VAR_0->right = FUNC_7 (VAR_0->right, VAR_1, VAR_2, VAR_5, VAR_4);
  }
  if (VAR_5 == 0 || VAR_5 < -VAR_0->x->key_len || VAR_5 > VAR_0->x->key_len) {
    tree_t *VAR_6 = FUNC_6 (VAR_0->left, VAR_0->right);
    FUNC_3 ((struct wildcard_entry *)VAR_0->x);
    FUNC_2 (VAR_0);
    return VAR_6;
  } else {
    return VAR_0;
  }
}
