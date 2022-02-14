
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* last; } ;
struct TYPE_4__ {int referenced; scalar_t__ op; TYPE_2__ subfn; TYPE_2__ arglist; struct TYPE_4__* bound_by; struct TYPE_4__* prev; } ;
typedef TYPE_1__ inst ;
typedef TYPE_2__ block ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(block VAR_1) {
  int VAR_2 = 0;
  for (inst* VAR_3 = VAR_1.last; VAR_3; VAR_3 = VAR_3->prev) {
    if (VAR_2 && VAR_3->bound_by == VAR_3 && !VAR_3->referenced)
      continue;
    if (VAR_3->op == VAR_0) {
      VAR_2 = 1;
    }
    if (VAR_3->bound_by) {
      VAR_3->bound_by->referenced = 1;
    }

    FUNC_0(VAR_3->arglist);
    FUNC_0(VAR_3->subfn);
  }
}
