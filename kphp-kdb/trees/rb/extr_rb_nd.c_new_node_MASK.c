
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int extra; scalar_t__ right; scalar_t__ left; } ;
typedef TYPE_1__ rbtree_t ;


 int FUNC_0 (int ,void const*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static rbtree_t *FUNC_2 (int VAR_1, int VAR_2, const void *VAR_3) {

  rbtree_t *VAR_4 = (rbtree_t *) FUNC_1 (sizeof (rbtree_t) + 4*VAR_2);
  VAR_4->x = VAR_1;
  VAR_4->left = VAR_4->right = 0;
  VAR_0++;
  if (VAR_2 > 0) {
    FUNC_0 (VAR_4->extra, VAR_3, VAR_2 * 4);
  }

  return VAR_4;
}
