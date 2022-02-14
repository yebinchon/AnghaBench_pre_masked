
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int opcode ;
struct TYPE_10__ {int target; } ;
struct TYPE_11__ {TYPE_1__ imm; } ;
typedef TYPE_2__ inst ;
struct TYPE_12__ {int last; } ;
typedef TYPE_3__ block ;
struct TYPE_13__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_3__ FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (int ) ;

block FUNC_4(opcode VAR_1, block VAR_2) {
  FUNC_0(FUNC_3(VAR_1)->flags & VAR_0);
  FUNC_0(VAR_2.last);
  inst* VAR_3 = FUNC_2(VAR_1);
  VAR_3->imm.target = VAR_2.last;
  return FUNC_1(VAR_3);
}
