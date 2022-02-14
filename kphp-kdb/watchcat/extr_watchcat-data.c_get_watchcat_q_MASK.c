
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long long id; struct TYPE_4__* prev; struct TYPE_4__* next; scalar_t__ vn; } ;
typedef TYPE_1__ watchcat ;


 TYPE_1__* FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,long long*) ;
 scalar_t__ FUNC_2 (int *,long long*) ;

inline watchcat *FUNC_3 (long long VAR_1, int VAR_2) {
  watchcat **VAR_3;
  if (VAR_2) {
    VAR_3 = (watchcat **)FUNC_1 (&VAR_0, &VAR_1);
    if (*VAR_3 == (watchcat *)&VAR_1) {
      watchcat *VAR_4 = FUNC_0();

      VAR_4->id = VAR_1;
      VAR_4->vn = 0;
      VAR_4->next = VAR_4->prev = VAR_4;

      *VAR_3 = VAR_4;
    }
    return *VAR_3;
  } else {
    VAR_3 = (watchcat **)FUNC_2 (&VAR_0, &VAR_1);
    return VAR_3 == ((void*)0) ? ((void*)0) : *VAR_3;
  }
}
