
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int opcode ;
struct TYPE_5__ {int any_unbound; int symbol; } ;
typedef TYPE_1__ inst ;
typedef int block ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;

block FUNC_5(opcode VAR_1, const char* VAR_2) {
  FUNC_0(FUNC_3(VAR_1)->flags & VAR_0);
  inst* VAR_3 = FUNC_2(VAR_1);
  VAR_3->symbol = FUNC_4(VAR_2);
  VAR_3->any_unbound = 1;
  return FUNC_1(VAR_3);
}
