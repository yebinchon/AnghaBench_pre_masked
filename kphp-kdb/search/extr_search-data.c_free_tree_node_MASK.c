
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* left; struct TYPE_4__* right; } ;
typedef TYPE_1__ tree_t ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0 (tree_t *VAR_2) {
  (VAR_2->right = VAR_0.right)->left = VAR_2;
  VAR_0.right = VAR_2;
  VAR_2->left = &VAR_0;
  VAR_1++;
}
