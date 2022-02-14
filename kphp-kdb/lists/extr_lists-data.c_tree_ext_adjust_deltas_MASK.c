
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int delta; struct TYPE_5__* right; struct TYPE_5__* left; int x; } ;
typedef TYPE_1__ tree_ext_small_t ;
typedef int object_id_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline tree_ext_small_t *FUNC_2 (tree_ext_small_t *VAR_1, object_id_t VAR_2, int VAR_3) {
  int VAR_4;
  while (VAR_1 != VAR_0 && (VAR_4 = FUNC_1 (VAR_2, VAR_1->x)) != 0) {
    VAR_1->delta += VAR_3;
    VAR_1 = (VAR_4 < 0) ? VAR_1->left : VAR_1->right;
  }
  FUNC_0 (VAR_1 != VAR_0);
  VAR_1->delta += VAR_3;
  return VAR_1;
}
