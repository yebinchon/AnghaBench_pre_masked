
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* first; } ;
struct TYPE_8__ {scalar_t__ op; TYPE_2__ subfn; struct TYPE_8__* next; } ;
typedef TYPE_1__ inst ;
typedef TYPE_2__ block ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;

block FUNC_2(block VAR_3) {
  for (inst *VAR_4 = VAR_3.first; VAR_4; VAR_4 = VAR_4->next) {
    if (VAR_4->op == VAR_1) {
      VAR_4->op = VAR_2;
    }
  }
  inst* VAR_5 = FUNC_1(VAR_0);
  VAR_5->subfn = VAR_3;
  return FUNC_0(VAR_5);
}
