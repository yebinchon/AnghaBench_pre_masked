
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* right; struct TYPE_3__* left; int x1; } ;
typedef TYPE_1__ rev_friends_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2 (rev_friends_t *VAR_0) {
  if (VAR_0) {
    FUNC_1 (4);
  } else {
    FUNC_1 (3);
    return;
  }
  FUNC_0 (&VAR_0->x1, 16);
  FUNC_2 (VAR_0->left);
  FUNC_2 (VAR_0->right);
}
