
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree_var_value_t ;
struct tl_type {int name; } ;
struct tl_combinator_tree {scalar_t__ act; int flags; struct tl_type* data; TYPE_1__* right; struct tl_combinator_tree* left; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int FUNC_1 (int **,struct tl_type*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int **,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6 (struct tl_combinator_tree *VAR_12, int VAR_13, tree_var_value_t **VAR_14, int *VAR_15) {
  if (VAR_12->act == VAR_6) {
    FUNC_6 (VAR_12->left, VAR_13 + 1, VAR_14, VAR_15);
    if (VAR_9 >= 2) {
      if (VAR_12->right->type == VAR_11 || VAR_12->right->type == VAR_10) {
        FUNC_2 (VAR_0);
      } else {
        FUNC_2 (VAR_1);
      }
    }
    FUNC_3 (VAR_12->right, 0, VAR_14, VAR_15);
  } else {
    FUNC_0 (VAR_12->act == VAR_8 || VAR_12->act == VAR_7);
    if (VAR_12->act == VAR_8) {
      FUNC_0 (!VAR_13);
      if (VAR_9 == 1) {
        FUNC_2 (VAR_3);
      } else if (VAR_9 == 2) {
        FUNC_2 (VAR_5);
      } else {
        FUNC_2 (-6);
      }
      FUNC_2 (FUNC_1 (VAR_14, VAR_12->data));
      FUNC_5 (VAR_12->flags);

    } else {
      if (VAR_9 == 1) {
        FUNC_2 (VAR_2);
      } else if (VAR_9 == 2) {
        FUNC_2 (VAR_4);
      } else {
        FUNC_2 (-7);
      }
      struct tl_type *VAR_16 = VAR_12->data;
      FUNC_2 (VAR_16->name);
      FUNC_4 (VAR_12->flags);

      FUNC_2 (VAR_13);

    }
  }
}
