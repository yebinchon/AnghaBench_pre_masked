
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_combinator_tree {struct tl_combinator_tree* right; struct tl_combinator_tree* left; } ;


 int FUNC_0 (struct tl_combinator_tree*,struct tl_combinator_tree*,int) ;
 struct tl_combinator_tree* FUNC_1 (int) ;

struct tl_combinator_tree *FUNC_2 (struct tl_combinator_tree *VAR_0) {
  if (!VAR_0) { return 0; }
  struct tl_combinator_tree *VAR_1 = FUNC_1 (sizeof (*VAR_1));
  FUNC_0 (VAR_1, VAR_0, sizeof (*VAR_1));
  VAR_1->left = FUNC_2 (VAR_0->left);
  VAR_1->right = FUNC_2 (VAR_0->right);
  return VAR_1;
}
