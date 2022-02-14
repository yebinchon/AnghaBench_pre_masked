
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree_var_value_t ;
struct tl_combinator_tree {int type; int act; struct tl_combinator_tree* right; TYPE_1__* left; } ;
struct TYPE_2__ {int type_flags; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tl_combinator_tree*) ;
 int VAR_4 ;
 int FUNC_1 (int **,int ) ;

 int FUNC_2 (int) ;
 int FUNC_3 (struct tl_combinator_tree*,int **,int*) ;
 int FUNC_4 (struct tl_combinator_tree*,int ,int **,int*) ;

void FUNC_5 (struct tl_combinator_tree *VAR_5, tree_var_value_t **VAR_6, int *VAR_7) {
  if (VAR_4 >= 1) {
  } else {
    FUNC_2 (-20);
  }
  FUNC_2 (FUNC_1 (VAR_6, VAR_5->left->data));
  FUNC_2 (VAR_5->left->type_flags);

  FUNC_0 (VAR_5);
  VAR_5 = VAR_5->right;
  switch (VAR_5->type) {
  case 128:
    if (VAR_5->act == VAR_1) {
      FUNC_3 (VAR_5, VAR_6, VAR_7);
    } else if (VAR_5->act == VAR_2 || VAR_5->act == VAR_3 || VAR_5->act == VAR_0) {
      FUNC_4 (VAR_5, 0, VAR_6, VAR_7);
    } else {
      FUNC_0 (0);
    }
    break;
  default:
    FUNC_0 (0);
  }
}
