
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int opcode ;
struct TYPE_8__ {TYPE_1__* first; } ;
typedef TYPE_2__ block ;
struct TYPE_7__ {scalar_t__ any_unbound; struct TYPE_7__* bound_by; int symbol; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__) ;
 TYPE_2__ FUNC_2 (int ,int ) ;

block FUNC_3(opcode VAR_0, block VAR_1) {
  FUNC_0(FUNC_1(VAR_1));
  block VAR_2 = FUNC_2(VAR_0, VAR_1.first->symbol);
  VAR_2.first->bound_by = VAR_1.first;
  VAR_2.first->any_unbound = 0;
  return VAR_2;
}
