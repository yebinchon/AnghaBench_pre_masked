
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* right; struct TYPE_5__* left; } ;
typedef TYPE_1__ tree_num_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1 (tree_num_t *VAR_1) {
  if (VAR_1 != VAR_0) {
    FUNC_1 (VAR_1->left);
    FUNC_1 (VAR_1->right);
    FUNC_0 (VAR_1);
  }
}
