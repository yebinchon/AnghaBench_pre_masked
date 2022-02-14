
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef TYPE_1__* dl_prm_ptr ;
struct TYPE_19__ {int n; int len; TYPE_1__* v; int rv; } ;
typedef TYPE_2__ dl_perm ;
struct TYPE_18__ {int a; int b; int len; int y; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__**,TYPE_1__**,TYPE_1__**,int) ;
 int FUNC_5 (TYPE_1__**,TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__**,TYPE_1__**,int,int *) ;
 int FUNC_8 () ;

int FUNC_9 (dl_perm *VAR_0, int VAR_1, int VAR_2) {
  if (!(0 <= VAR_1 && VAR_1 < VAR_0->n)) {
    return -1;
  }
  if (!(0 <= VAR_2 && VAR_2 <= VAR_0->len)) {
    return -1;
  }

  FUNC_1 (FUNC_3 (VAR_0, VAR_1) == -1);




  dl_prm_ptr VAR_3[10] = {((void*)0)};
  if (VAR_2 == VAR_0->len) {
    VAR_3[0] = VAR_0->v;
  } else {
    FUNC_4 (VAR_0->v, &VAR_3[0], &VAR_3[4], &VAR_3[1], VAR_2);
    VAR_2 -= FUNC_0 (VAR_3[0]);
    FUNC_7 (VAR_3[1], &VAR_3[1], &VAR_3[3], VAR_2, &VAR_0->rv);
  }

  dl_prm_ptr VAR_4 = FUNC_2();
  VAR_4->a = VAR_1;
  VAR_4->b = VAR_1 + 1;
  VAR_4->len = VAR_4->b - VAR_4->a;
  VAR_4->y = FUNC_8();
  FUNC_6 (&VAR_0->rv, VAR_4);

  VAR_3[2] = VAR_4;

  int VAR_5;
  for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
    FUNC_5 (&VAR_3[VAR_5 + 1], VAR_3[VAR_5], VAR_3[VAR_5 + 1], &VAR_0->rv);
  }

  VAR_0->v = VAR_3[4];
  VAR_0->len++;

  return 0;
}
