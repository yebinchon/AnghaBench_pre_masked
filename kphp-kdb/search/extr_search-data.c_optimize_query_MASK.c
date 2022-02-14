
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int op; struct TYPE_4__* left; struct TYPE_4__* right; int priority; } ;
typedef TYPE_1__ query_node_t ;


 int FUNC_0 (int ) ;







query_node_t *FUNC_1 (query_node_t *VAR_0) {
  if (!VAR_0) {
    return 0;
  }
  VAR_0->left = FUNC_1 (VAR_0->left);
  VAR_0->right = FUNC_1 (VAR_0->right);
  switch (VAR_0->op) {
    case 132:
    case 129:
    case 128:
      return VAR_0;
    case 133:
      if (VAR_0->left->op == 132) {
        return VAR_0->left;
      }
      if (VAR_0->left->op == 129) {
        return VAR_0->right;
      }
      if (VAR_0->right->op == 132) {
        return VAR_0->right;
      }
      if (VAR_0->right->op == 129) {
        return VAR_0->left;
      }
      return VAR_0;
    case 130:
      if (VAR_0->left->op == 129) {
        return VAR_0->left;
      }
      if (VAR_0->left->op == 132) {
        return VAR_0->right;
      }
      if (VAR_0->right->op == 129) {
        return VAR_0->right;
      }
      if (VAR_0->right->op == 132) {
        return VAR_0->left;
      }
      return VAR_0;
    case 131:
      if (VAR_0->left->op == 132) {
        return VAR_0->left;
      }
      if (VAR_0->right->op == 129) {
        VAR_0->op = 132;
        VAR_0->left = VAR_0->right = 0;
        VAR_0->priority = 0;
        return VAR_0;
      }
      if (VAR_0->right->op == 132) {
        return VAR_0->left;
      }
      return VAR_0;
  }
  FUNC_0 (0);
}
