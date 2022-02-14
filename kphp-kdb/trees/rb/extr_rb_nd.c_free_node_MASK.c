
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ x; scalar_t__ right; scalar_t__ left; } ;
typedef TYPE_1__ rbtree_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1 (rbtree_t *VAR_1, int VAR_2) {

  VAR_1->left = VAR_1->right = 0;
  VAR_1->x = 0;
  ++VAR_0;
  FUNC_0 ((char *) VAR_1, sizeof (rbtree_t) + 4*VAR_2);
}
