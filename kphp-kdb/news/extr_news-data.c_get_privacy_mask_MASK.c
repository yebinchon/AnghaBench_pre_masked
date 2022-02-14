
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int priv_mask; } ;
typedef TYPE_1__ user_t ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;

int FUNC_2 (int VAR_0) {
  user_t *VAR_1 = FUNC_1 (VAR_0);
  if (!VAR_1) {
    return FUNC_0 (VAR_0) < 0 ? -1 : 1;
  }
  return VAR_1->priv_mask;
}
