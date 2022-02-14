
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* first; } ;
typedef TYPE_3__ block ;
struct TYPE_6__ {int constant; } ;
struct TYPE_7__ {scalar_t__ op; TYPE_1__ imm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(block VAR_2) {
  return (FUNC_0(VAR_2) && VAR_2.first->op == VAR_1 &&
          FUNC_2(VAR_2.first->imm.constant) == VAR_0 &&
          FUNC_1(FUNC_3(VAR_2.first->imm.constant)));
}
