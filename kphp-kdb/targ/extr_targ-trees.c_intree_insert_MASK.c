
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int treespace_t ;
typedef scalar_t__ treeref_t ;
struct intree_node {int x; scalar_t__ right; scalar_t__ left; } ;


 unsigned int FUNC_0 (struct intree_node*,scalar_t__) ;
 struct intree_node* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int,scalar_t__*,scalar_t__*) ;

inline treeref_t FUNC_3 (treespace_t VAR_0, treeref_t VAR_1, treeref_t VAR_2) {
  treeref_t VAR_3 = VAR_1, *VAR_4 = &VAR_3;
  struct intree_node *VAR_5 = FUNC_1(VAR_2);
  int VAR_6 = VAR_5->x;
  unsigned VAR_7 = FUNC_0(VAR_5, VAR_2);
  while (VAR_1) {
    struct intree_node *VAR_8 = FUNC_1(VAR_1);
    unsigned VAR_9 = FUNC_0(VAR_8, VAR_1);
    if (VAR_7 >= VAR_9) {
      break;
    }
    if (VAR_6 < VAR_8->x) {
      VAR_4 = &VAR_8->left;
      VAR_1 = VAR_8->left;
    } else {
      VAR_4 = &VAR_8->right;
      VAR_1 = VAR_8->right;
    }
  }
  FUNC_2 (VAR_0, VAR_1, VAR_6, &VAR_5->left, &VAR_5->right);
  *VAR_4 = VAR_2;
  return VAR_3;
}
