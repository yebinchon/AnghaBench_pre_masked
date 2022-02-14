
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ right; } ;
typedef TYPE_1__ tree_t ;
struct TYPE_8__ {int Sp; TYPE_1__** St; } ;
typedef TYPE_2__ tree_iterator_t ;


 TYPE_1__* FUNC_0 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static tree_t *FUNC_1 (tree_iterator_t *VAR_0) {
  int VAR_1 = VAR_0->Sp;
  if (!VAR_1) {
    return 0;
  }
  tree_t *VAR_2 = VAR_0->St[--VAR_1];
  VAR_0->Sp = VAR_1;
  if (VAR_2->right) {
    return FUNC_0 (VAR_0, VAR_2->right);
  } else if (VAR_1) {
    return VAR_0->St[VAR_1 - 1];
  } else {
    return 0;
  }
}
