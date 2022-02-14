
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* mf; } ;
typedef TYPE_2__ user_t ;
struct TYPE_4__ {int len; scalar_t__ aio; } ;


 TYPE_2__* FUNC_0 (long long) ;

int FUNC_1 (long long VAR_0, int *VAR_1) {
  user_t *VAR_2 = FUNC_0 (VAR_0);

  if (!VAR_2 || !VAR_2->mf || VAR_2->mf->aio) {
    return 0;
  }

  if (VAR_1) {
    VAR_1[0] = VAR_2->mf->len;
  }

  return 1;
}
