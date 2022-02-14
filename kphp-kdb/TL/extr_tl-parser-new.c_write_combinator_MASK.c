
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree_var_value_t ;
struct tl_constructor {int name; scalar_t__ right; scalar_t__ left; int id; TYPE_1__* type; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int,int **,int*) ;
 int FUNC_4 (int ) ;

void FUNC_5 (struct tl_constructor *VAR_5) {
  FUNC_2 (VAR_5->name);
  FUNC_4 (VAR_5->id);
  FUNC_2 (VAR_5->type ? VAR_5->type->name : 0);
  tree_var_value_t *VAR_6 = 0;
  int VAR_7 = 0;
  FUNC_0 (VAR_5->right);
  if (VAR_5->left) {
    if (VAR_4 >= 1 && FUNC_1 (VAR_5->id)) {
      FUNC_2 (VAR_1);
    } else {
      if (VAR_4 >= 1) {
        FUNC_2 (VAR_0);
      }

      FUNC_3 (VAR_5->left, 0, &VAR_6, &VAR_7);
    }
  } else {
    if (VAR_4 >= 1) {
      FUNC_2 (VAR_0);
      FUNC_2 (0);
    } else {
      FUNC_2 (-11);
    }
  }
  if (VAR_4 >= 1) {
    FUNC_2 (VAR_4 >= 2 ? VAR_3 : VAR_2);
  }
  FUNC_3 (VAR_5->right, 1, &VAR_6, &VAR_7);
}
