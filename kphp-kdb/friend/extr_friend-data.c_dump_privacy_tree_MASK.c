
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* right; struct TYPE_4__* left; int x; } ;
typedef TYPE_1__ privacy_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3 (privacy_t *VAR_0) {
  if (VAR_0) {
    FUNC_2 (3);
  } else {
    FUNC_2 (2);
    return;
  }
  FUNC_1 (&VAR_0->x, FUNC_0 (VAR_0) - 2 * sizeof (privacy_t *));
  FUNC_3 (VAR_0->left);
  FUNC_3 (VAR_0->right);
}
