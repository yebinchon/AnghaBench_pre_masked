
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ op; struct TYPE_4__* next; } ;
typedef TYPE_1__ inst ;
struct TYPE_5__ {TYPE_1__* first; } ;
typedef TYPE_2__ block ;


 scalar_t__ VAR_0 ;

int FUNC_0(block VAR_1) {
  for (inst *VAR_2 = VAR_1.first; VAR_2; VAR_2 = VAR_2->next) {
    if (VAR_2->op == VAR_0)
      return 1;
  }
  return 0;
}
