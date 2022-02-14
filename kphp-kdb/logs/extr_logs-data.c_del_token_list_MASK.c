
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int param_set; } ;
typedef TYPE_1__ token ;


 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;

void FUNC_2 (token *VAR_2) {
  if (VAR_2 == ((void*)0)) {
    return;
  }

  token *VAR_3 = VAR_2;
  while (VAR_3->type != VAR_0) {
    if (VAR_3->type == VAR_1) {
      FUNC_1 (&VAR_3->param_set);
    }

    VAR_3++;
  }

  FUNC_0 (VAR_2, (VAR_3 - VAR_2 + 1) * sizeof (token));
}
