
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* first; } ;
struct TYPE_4__ {scalar_t__ op; TYPE_2__ subfn; struct TYPE_4__* next; } ;
typedef TYPE_1__ inst ;
typedef TYPE_2__ block ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(block VAR_1) {
  int VAR_2 = 0;
  for (inst* VAR_3 = VAR_1.first; VAR_3; VAR_3 = VAR_3->next) {
    if (VAR_3->op == VAR_0) VAR_2++;
    VAR_2 += FUNC_0(VAR_3->subfn);
  }
  return VAR_2;
}
