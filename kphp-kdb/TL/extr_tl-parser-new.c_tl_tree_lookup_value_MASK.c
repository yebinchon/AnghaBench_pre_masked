
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_var_value_t ;
struct tl_combinator_tree {scalar_t__ act; void* data; struct tl_combinator_tree* right; struct tl_combinator_tree* left; } ;


 scalar_t__ VAR_0 ;
 struct tl_combinator_tree* FUNC_0 (int **,void*) ;

int FUNC_1 (struct tl_combinator_tree *VAR_1, void *VAR_2, tree_var_value_t **VAR_3) {
  if (!VAR_1) {
    return -1;
  }
  if (VAR_1->act == VAR_0 && VAR_1->data == VAR_2) {
    return 0;
  }
  if (VAR_1->act == VAR_0) {
    struct tl_combinator_tree *VAR_4 = FUNC_0 (VAR_3, VAR_1->data);
    if (!VAR_4) { return -1;}
    else { return FUNC_1 (VAR_4, VAR_2, VAR_3); }
  }
  if (FUNC_1 (VAR_1->left, VAR_2, VAR_3) >= 0) { return 1; }
  if (FUNC_1 (VAR_1->right, VAR_2, VAR_3) >= 0) { return 1; }
  return -1;
}
