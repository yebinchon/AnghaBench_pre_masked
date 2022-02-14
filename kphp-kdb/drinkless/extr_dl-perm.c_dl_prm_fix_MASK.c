
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* dl_prm_ptr ;
struct TYPE_3__ {struct TYPE_3__* p; int r; int l; scalar_t__ a; scalar_t__ b; scalar_t__ len; } ;


 scalar_t__ FUNC_0 (int ) ;

void FUNC_1 (dl_prm_ptr VAR_0) {
  while (VAR_0 != ((void*)0)) {
    VAR_0->len = VAR_0->b - VAR_0->a + FUNC_0(VAR_0->l) + FUNC_0(VAR_0->r);
    VAR_0 = VAR_0->p;
  }
}
