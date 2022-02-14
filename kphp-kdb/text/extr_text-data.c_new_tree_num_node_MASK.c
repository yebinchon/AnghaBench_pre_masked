
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x; int y; int z; int right; int left; } ;
typedef TYPE_1__ tree_num_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static inline tree_num_t *FUNC_2 (int VAR_1, int VAR_2, int VAR_3) {
  tree_num_t *VAR_4;
  VAR_4 = FUNC_1 (sizeof (tree_num_t));
  FUNC_0 (VAR_4);
  VAR_4->left = VAR_4->right = VAR_0;
  VAR_4->x = VAR_1;
  VAR_4->y = VAR_2;
  VAR_4->z = VAR_3;
  return VAR_4;
}
