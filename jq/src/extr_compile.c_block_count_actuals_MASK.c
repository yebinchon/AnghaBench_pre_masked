
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int op; struct TYPE_4__* next; } ;
typedef TYPE_1__ inst ;
struct TYPE_5__ {TYPE_1__* first; } ;
typedef TYPE_2__ block ;





 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(block VAR_0) {
  int VAR_1 = 0;
  for (inst* VAR_2 = VAR_0.first; VAR_2; VAR_2 = VAR_2->next) {
    switch (VAR_2->op) {
    default: FUNC_0(0 && "Unknown function type"); break;
    case 130:
    case 128:
    case 129:
      VAR_1++;
      break;
    }
  }
  return VAR_1;
}
