
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ y; struct TYPE_5__* uplink; struct TYPE_5__* left; struct TYPE_5__* right; } ;
typedef TYPE_1__ utree_t ;



__attribute__((used)) static utree_t *FUNC_0 (utree_t *VAR_0, utree_t *VAR_1) {
  if (!VAR_0) { return VAR_1; }
  if (!VAR_1) { return VAR_0; }
  if (VAR_0->y > VAR_1->y) {
    VAR_0->right = FUNC_0 (VAR_0->right, VAR_1);
    if (VAR_0->right) {
      VAR_0->right->uplink = VAR_0;
    }
    return VAR_0;
  } else {
    VAR_1->left = FUNC_0 (VAR_0, VAR_1->left);
    if (VAR_1->left) {
      VAR_1->left->uplink = VAR_1;
    }
    return VAR_1;
  }
}
