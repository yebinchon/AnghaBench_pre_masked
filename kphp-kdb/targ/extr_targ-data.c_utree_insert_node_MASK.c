
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ y; scalar_t__ x; struct TYPE_8__* uplink; struct TYPE_8__* right; struct TYPE_8__* left; } ;
typedef TYPE_1__ utree_t ;


 int FUNC_0 (TYPE_1__**,TYPE_1__**,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static utree_t *FUNC_1 (utree_t *VAR_0, utree_t *VAR_1) {
  if (!VAR_0) {
    return VAR_1;
  }
  if (VAR_0->y >= VAR_1->y) {
    if (VAR_1->x < VAR_0->x) {
      VAR_0->left = FUNC_1 (VAR_0->left, VAR_1);
      if (VAR_0->left) {
        VAR_0->left->uplink = VAR_0;
      }
    } else {
      VAR_0->right = FUNC_1 (VAR_0->right, VAR_1);
      if (VAR_0->right) {
        VAR_0->right->uplink = VAR_0;
      }
    }
    return VAR_0;
  }
  FUNC_0 (&VAR_1->left, &VAR_1->right, VAR_0, VAR_1->x);
  if (VAR_1->left) {
    VAR_1->left->uplink = VAR_1;
  }
  if (VAR_1->right) {
    VAR_1->right->uplink = VAR_1;
  }
  return VAR_1;
}
