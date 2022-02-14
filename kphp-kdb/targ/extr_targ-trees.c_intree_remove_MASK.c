
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int treespace_t ;
typedef scalar_t__ treeref_t ;
struct intree_node {int x; scalar_t__ right; scalar_t__ left; } ;


 struct intree_node* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__) ;

inline treeref_t FUNC_2 (treespace_t VAR_0, treeref_t VAR_1, int VAR_2, treeref_t *VAR_3) {
  treeref_t VAR_4 = VAR_1, *VAR_5 = &VAR_4;
  while (VAR_1) {
    struct intree_node *VAR_6 = FUNC_0(VAR_1);
    if (VAR_2 == VAR_6->x) {
      break;
    }
    if (VAR_2 < VAR_6->x) {
      VAR_5 = &VAR_6->left;
      VAR_1 = VAR_6->left;
    } else {
      VAR_5 = &VAR_6->right;
      VAR_1 = VAR_6->right;
    }
  }
  if (VAR_1) {
    struct intree_node *VAR_7 = FUNC_0(VAR_1);
    *VAR_5 = FUNC_1 (VAR_0, VAR_7->left, VAR_7->right);
  }
  *VAR_3 = VAR_1;
  return VAR_4;
}
