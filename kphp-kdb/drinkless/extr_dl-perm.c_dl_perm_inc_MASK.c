
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* dl_prm_ptr ;
struct TYPE_8__ {int n; int len; int rv; int v; } ;
typedef TYPE_2__ dl_perm ;
struct TYPE_7__ {int a; int b; int len; int y; } ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int *,int ,TYPE_1__*,int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5 (dl_perm *VAR_0, int VAR_1) {
  if (FUNC_4 (VAR_1 <= 0)) {
    return;
  }
  dl_prm_ptr VAR_2 = FUNC_0();
  VAR_2->a = VAR_0->n;
  VAR_0->n += VAR_1;
  VAR_0->len += VAR_1;
  VAR_2->b = VAR_0->n;
  VAR_2->len = VAR_2->b - VAR_2->a;
  VAR_2->y = FUNC_3();
  FUNC_2 (&VAR_0->rv, VAR_2);
  FUNC_1 (&VAR_0->v, VAR_0->v, VAR_2, &VAR_0->rv);
}
