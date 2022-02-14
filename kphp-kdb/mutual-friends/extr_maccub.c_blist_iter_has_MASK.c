
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* x; } ;
typedef TYPE_1__ blist_iterator ;



int FUNC_0 (blist_iterator *VAR_0, int VAR_1) {
  if (VAR_0->x == ((void*)0)) {
    return 0;
  }

  int VAR_2 = VAR_0->x[0];

  if (VAR_2 <= 8) {
    int VAR_3;
    for (VAR_3 = 1; VAR_3 <= VAR_2; VAR_3++) {
      if (VAR_0->x[VAR_3] == VAR_1) {
        return 1;
      }
    }
    return 0;
  } else {
    int VAR_4 = 1, VAR_5 = VAR_2 + 1, VAR_6;
    while (VAR_4 + 1 < VAR_5) {
      VAR_6 = (VAR_4 + VAR_5) / 2;
      if (VAR_0->x[VAR_6] >= VAR_1) {
        VAR_4 = VAR_6;
      } else {
        VAR_5 = VAR_6;
      }
    }
    return VAR_0->x[VAR_4] == VAR_1;
  }
}
