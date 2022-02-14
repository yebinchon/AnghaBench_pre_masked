
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* positions; struct TYPE_4__* left; struct TYPE_4__* right; } ;
typedef TYPE_1__ tree_t ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int) ;

__attribute__((used)) static void FUNC_1 (tree_t *VAR_3) {
  if (VAR_3->positions) {
    int VAR_4 = 4 * (VAR_3->positions[0] + 1);
    VAR_2 -= VAR_4;
    FUNC_0 (VAR_3->positions, VAR_4);
    VAR_3->positions = ((void*)0);
  }
  (VAR_3->right = VAR_0.right)->left = VAR_3;
  VAR_0.right = VAR_3;
  VAR_3->left = &VAR_0;
  VAR_1++;
}
