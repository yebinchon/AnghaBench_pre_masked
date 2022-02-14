
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int y; struct TYPE_7__* x; scalar_t__ right; scalar_t__ left; } ;
typedef TYPE_1__ tree_t ;
typedef TYPE_1__ hash_entry_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static tree_t *FUNC_2 (hash_entry_t *VAR_2, int VAR_3) {
  FUNC_0 (VAR_2);
  tree_t *VAR_4;
  VAR_4 = FUNC_1 (sizeof (tree_t));
  FUNC_0 (VAR_4);
  VAR_0++;
  VAR_4->left = VAR_4->right = 0;
  VAR_4->x = VAR_2;
  VAR_4->y = VAR_3;
  VAR_1 += sizeof (tree_t);
  return VAR_4;
}
