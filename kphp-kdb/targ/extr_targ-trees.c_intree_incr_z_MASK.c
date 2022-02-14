
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int treespace_t ;
typedef int treeref_t ;
struct intree_node {int x; int z; int right; int left; } ;


 struct intree_node* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;

inline treeref_t FUNC_5 (treespace_t VAR_0, treeref_t VAR_1, int VAR_2, int VAR_3, int *VAR_4) {
  treeref_t VAR_5 = VAR_1, *VAR_6 = &VAR_5;
  if (!VAR_3) {
    return VAR_1;
  }
  while (VAR_1) {
    struct intree_node *VAR_7 = FUNC_0(VAR_1);
    if (VAR_2 == VAR_7->x) {
      break;
    }
    if (VAR_2 < VAR_7->x) {
      VAR_6 = &VAR_7->left;
      VAR_1 = VAR_7->left;
    } else {
      VAR_6 = &VAR_7->right;
      VAR_1 = VAR_7->right;
    }
  }
  if (VAR_1) {
    struct intree_node *VAR_8 = FUNC_0(VAR_1);
    VAR_8->z += VAR_3;
    if (!VAR_8->z) {
      *VAR_6 = FUNC_3 (VAR_0, VAR_8->left, VAR_8->right);
      FUNC_1 (VAR_0, VAR_1);
      --*VAR_4;
    }
    return VAR_5;
  }

  VAR_1 = FUNC_4 (VAR_0);
  struct intree_node *VAR_9 = FUNC_0(VAR_1);
  VAR_9->x = VAR_2;
  VAR_9->z = VAR_3;
  ++*VAR_4;
  return FUNC_2 (VAR_0, VAR_5, VAR_1);
}
