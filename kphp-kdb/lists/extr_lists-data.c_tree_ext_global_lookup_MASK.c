
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ x; struct TYPE_5__* right; struct TYPE_5__* left; } ;
typedef TYPE_1__ tree_ext_global_t ;
typedef scalar_t__ global_id_t ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline tree_ext_global_t *FUNC_0 (tree_ext_global_t *VAR_1, global_id_t VAR_2) {
  while (VAR_1 != VAR_0 && VAR_2 != VAR_1->x) {
    VAR_1 = (VAR_2 < VAR_1->x) ? VAR_1->left : VAR_1->right;
  }
  return VAR_1;
}
