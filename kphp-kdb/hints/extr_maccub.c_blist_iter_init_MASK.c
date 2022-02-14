
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* x; int i; } ;
typedef TYPE_1__ blist_iterator ;
typedef int* blist ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1 (blist_iterator *VAR_0, blist VAR_1, int VAR_2, int VAR_3, int VAR_4) {
  VAR_0->x = VAR_1;

  int VAR_5;

  if (VAR_1 == ((void*)0)) {
    VAR_5 = 0;
  } else {
    VAR_5 = VAR_0->x[0];
  }

  int VAR_6 = 0, VAR_7 = VAR_5 + 1;

  while (VAR_6 + 1 < VAR_7) {
    int VAR_8 = (VAR_6 + VAR_7) >> 1;
    if (VAR_0->x[VAR_8] <= VAR_4) {
      VAR_7 = VAR_8;
    } else {
      VAR_6 = VAR_8;
    }
  }
  VAR_0->i = VAR_7 - 1;
  FUNC_0 (VAR_0);
}
