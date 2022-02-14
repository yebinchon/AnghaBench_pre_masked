
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x1; int x2; struct TYPE_5__* right; struct TYPE_5__* left; } ;
typedef TYPE_1__ tree23_t ;


 int * VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static tree23_t *FUNC_0 (int VAR_2, tree23_t *VAR_3, tree23_t *VAR_4) {

  tree23_t *VAR_5 = (tree23_t *)&VAR_0[VAR_1++];
  VAR_5->x1 = VAR_2;
  VAR_5->x2 = VAR_2 | 1;
  VAR_5->left = VAR_3;
  VAR_5->right = VAR_4;

  return VAR_5;
}
