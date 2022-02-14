
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* right; struct TYPE_5__* left; } ;
typedef TYPE_1__ utree_t ;
struct TYPE_6__ {int user_id; int rate; } ;
typedef TYPE_2__ user_t ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1 (utree_t *VAR_3) {
  if (!VAR_3) {
    return;
  }

  FUNC_1 (VAR_3->left);

  if (VAR_2 >= VAR_0 * 2) {
    return;
  }

  user_t *VAR_4 = (user_t *)VAR_3;
  if (FUNC_0 (VAR_4)) {
    VAR_1[VAR_2++] = VAR_4->user_id;
    VAR_1[VAR_2++] = VAR_4->rate >> 8;
  }

  if (VAR_2 >= VAR_0 * 2) {
    return;
  }

  FUNC_1 (VAR_3->right);
}
