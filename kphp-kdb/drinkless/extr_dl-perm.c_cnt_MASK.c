
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* dl_prm_ptr ;
struct TYPE_3__ {struct TYPE_3__* r; struct TYPE_3__* l; } ;



int FUNC_0 (dl_prm_ptr VAR_0) {
  if (VAR_0) {
    return 1 + FUNC_0 (VAR_0->l) + FUNC_0 (VAR_0->r);
  }
  return 0;
}
