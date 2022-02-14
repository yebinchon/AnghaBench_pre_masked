
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* left; } ;
typedef TYPE_1__ tree_t ;
struct TYPE_7__ {int Sp; TYPE_1__** St; } ;
typedef TYPE_2__ tree_iterator_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static tree_t *FUNC_1 (tree_iterator_t *VAR_1, tree_t *VAR_2) {
  int VAR_3 = VAR_1->Sp;
  while (1) {
    VAR_1->St[VAR_3++] = VAR_2;
    FUNC_0 (VAR_3 < VAR_0);
    if (!VAR_2->left) {
      VAR_1->Sp = VAR_3;
      return VAR_2;
    }
    VAR_2 = VAR_2->left;
  }
}
