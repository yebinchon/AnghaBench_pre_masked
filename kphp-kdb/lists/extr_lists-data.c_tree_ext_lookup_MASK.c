
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* right; struct TYPE_5__* left; int x; } ;
typedef TYPE_1__ tree_ext_small_t ;
typedef int object_id_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline tree_ext_small_t *FUNC_1 (tree_ext_small_t *VAR_1, object_id_t VAR_2) {
  int VAR_3 = 0;
  while (VAR_1 != VAR_0 && (VAR_3 = FUNC_0 (VAR_2, VAR_1->x)) != 0) {
    VAR_1 = (VAR_3 < 0) ? VAR_1->left : VAR_1->right;
  }
  return VAR_1;
}
