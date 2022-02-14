
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_combinator_tree {scalar_t__ type; struct tl_combinator_tree* right; struct tl_combinator_tree* left; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_1 (struct tl_combinator_tree *VAR_2) {
  FUNC_0 (VAR_2->type == VAR_0 || VAR_2->type == VAR_1);
  if (VAR_2->type == VAR_1) {
    return 1;
  } else {
    return FUNC_1 (VAR_2->left) + FUNC_1 (VAR_2->right);
  }
}
