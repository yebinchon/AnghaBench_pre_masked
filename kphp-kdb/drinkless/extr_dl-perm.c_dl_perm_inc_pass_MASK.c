
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* dl_prm_ptr ;
struct TYPE_8__ {int len; int rv; int v; scalar_t__ n; } ;
typedef TYPE_2__ dl_perm ;
struct TYPE_7__ {int y; scalar_t__ a; scalar_t__ b; scalar_t__ len; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int *,int ,TYPE_1__*,int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6 (dl_perm *VAR_0, int VAR_1, int VAR_2) {
  if (FUNC_5 (VAR_1 <= 0)) {
    return;
  }
  FUNC_0 (VAR_2 <= VAR_1);

  if (VAR_2 == VAR_1) {
    VAR_0->n += VAR_1;
    return;
  }

  dl_prm_ptr VAR_3 = FUNC_1();
  VAR_3->a = VAR_0->n + VAR_2;
  VAR_0->n += VAR_1;
  VAR_0->len += VAR_1 - VAR_2;
  VAR_3->b = VAR_0->n;
  VAR_3->len = VAR_3->b - VAR_3->a;
  VAR_3->y = FUNC_4();
  FUNC_3 (&VAR_0->rv, VAR_3);
  FUNC_2 (&VAR_0->v, VAR_0->v, VAR_3, &VAR_0->rv);
}
