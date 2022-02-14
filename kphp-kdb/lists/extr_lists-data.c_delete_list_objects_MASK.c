
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int var_ltree_x_t ;
struct TYPE_6__ {struct TYPE_6__* right; struct TYPE_6__* left; int x; } ;
typedef TYPE_1__ tree_ext_large_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;


 int FUNC_2 (int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5 (tree_ext_large_t *VAR_4, int VAR_5) {
  static var_ltree_x_t VAR_6;
  if (FUNC_1(VAR_4) != VAR_0) {
    switch (FUNC_0(VAR_4)) {
    case 128:
      FUNC_2 (VAR_1, VAR_4->x, &VAR_6);
      if (VAR_5) {
        VAR_2 = FUNC_4 (VAR_2, VAR_6);
      }
      VAR_3--;
      break;
    case 129:
      VAR_3++;
    }
    FUNC_5 (VAR_4->left, VAR_5);
    FUNC_5 (VAR_4->right, VAR_5);
    FUNC_3 (VAR_4);
  }
}
