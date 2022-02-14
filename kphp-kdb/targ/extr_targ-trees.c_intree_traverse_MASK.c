
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int treespace_t ;
typedef scalar_t__ treeref_t ;
struct intree_node {scalar_t__ right; scalar_t__ left; } ;
typedef int (* intree_traverse_func_t ) (struct intree_node*) ;


 struct intree_node* FUNC_0 (scalar_t__) ;

int FUNC_1 (treespace_t VAR_0, treeref_t VAR_1, intree_traverse_func_t VAR_2) {
  if (VAR_1) {
    struct intree_node *VAR_3 = FUNC_0(VAR_1);
    return FUNC_1 (VAR_0, VAR_3->left, VAR_2) + VAR_2 (VAR_3) + FUNC_1 (VAR_0, VAR_3->right, VAR_2);
  } else {
    return 0;
  }
}
