
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int opcode ;
struct TYPE_6__ {scalar_t__ target; } ;
struct TYPE_7__ {TYPE_1__ imm; } ;
typedef TYPE_2__ inst ;
typedef int block ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ) ;

block FUNC_4(opcode VAR_1) {
  FUNC_0(FUNC_3(VAR_1)->flags & VAR_0);
  inst* VAR_2 = FUNC_2(VAR_1);
  VAR_2->imm.target = 0;
  return FUNC_1(VAR_2);
}
