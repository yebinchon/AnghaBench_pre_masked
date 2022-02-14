
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef TYPE_1__* dl_prm_ptr ;
struct TYPE_18__ {int len; int rv; TYPE_1__* v; } ;
typedef TYPE_2__ dl_perm ;
struct TYPE_17__ {int a; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__**,TYPE_1__**,TYPE_1__**,int) ;
 int FUNC_4 (TYPE_1__**,TYPE_1__*,TYPE_1__*,int *) ;
 TYPE_1__* FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__**,TYPE_1__**,int,int *) ;

int FUNC_7 (dl_perm *VAR_0, int VAR_1) {
  if (!(0 <= VAR_1 && VAR_1 < VAR_0->len)) {
    return -1;
  }



  dl_prm_ptr VAR_2[6] = {((void*)0)}, VAR_3;
  FUNC_3 (VAR_0->v, &VAR_2[0], &VAR_2[3], &VAR_2[1], VAR_1);
  VAR_1 -= FUNC_0(VAR_2[0]);

  FUNC_6 (VAR_2[1], &VAR_2[1], &VAR_3, VAR_1, &VAR_0->rv);
  FUNC_6 (VAR_3, &VAR_3, &VAR_2[2], 1, &VAR_0->rv);

  int VAR_4;
  for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
    FUNC_4 (&VAR_2[VAR_4 + 1], VAR_2[VAR_4], VAR_2[VAR_4 + 1], &VAR_0->rv);
  }

  VAR_0->v = VAR_2[3];

  FUNC_1 (FUNC_5 (&VAR_0->rv, VAR_3->a) == VAR_3);
  FUNC_2 (VAR_3);
  VAR_0->len--;

  return 0;
}
