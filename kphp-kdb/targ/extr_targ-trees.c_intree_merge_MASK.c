
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int treespace_t ;
typedef void* treeref_t ;
struct intree_node {void* right; void* left; } ;


 unsigned int FUNC_0 (struct intree_node*,void*) ;
 struct intree_node* FUNC_1 (void*) ;

inline treeref_t FUNC_2 (treespace_t VAR_0, treeref_t VAR_1, treeref_t VAR_2) {
  treeref_t VAR_3, *VAR_4 = &VAR_3;
  struct intree_node *VAR_5, *VAR_6;
  unsigned VAR_7, VAR_8;
  if (!VAR_1) {
    return VAR_2;
  }
  if (!VAR_2) {
    return VAR_1;
  }
  VAR_5 = FUNC_1(VAR_1);
  VAR_7 = FUNC_0(VAR_5, VAR_1);
  VAR_6 = FUNC_1(VAR_2);
  VAR_8 = FUNC_0(VAR_6, VAR_2);
  while (1) {
    if (VAR_7 > VAR_8) {
      *VAR_4 = VAR_1;
      VAR_1 = VAR_5->right;
      if (!VAR_1) {
        VAR_5->right = VAR_2;
        return VAR_3;
      }
      VAR_4 = &VAR_5->right;
      VAR_5 = FUNC_1(VAR_1);
      VAR_7 = FUNC_0(VAR_5, VAR_1);
    } else {
      *VAR_4 = VAR_2;
      VAR_2 = VAR_6->left;
      if (!VAR_2) {
        VAR_6->left = VAR_1;
        return VAR_3;
      }
      VAR_4 = &VAR_6->left;
      VAR_6 = FUNC_1(VAR_2);
      VAR_8 = FUNC_0(VAR_6, VAR_2);
    }
  }
}
