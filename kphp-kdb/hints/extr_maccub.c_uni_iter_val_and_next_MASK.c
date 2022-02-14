
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ val; int n; TYPE_3__* it; } ;
typedef TYPE_1__ uni_iterator ;
struct TYPE_5__ {int val; } ;


 int FUNC_0 (TYPE_3__*) ;

int FUNC_1 (uni_iterator *VAR_0) {
  if (VAR_0->val == 0) {
    return 0;
  }
  while (1) {
    int VAR_1 = -1, VAR_2 = 0, VAR_3 = 0;
    for (VAR_3 = 0; VAR_3 < VAR_0->n; VAR_3++) {
      if (VAR_0->it[VAR_3].val > VAR_2) {
        VAR_2 = VAR_0->it[VAR_3].val;
        VAR_1 = VAR_3;
      }
    }

    if (VAR_1 >= 0) {
      FUNC_0 (&VAR_0->it[VAR_1]);
    }
    if (VAR_2 != VAR_0->val) {
      VAR_0->val = VAR_2;
      return VAR_2;
    }
  }
}
