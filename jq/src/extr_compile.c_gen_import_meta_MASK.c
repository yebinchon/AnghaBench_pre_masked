
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int constant; } ;
struct TYPE_13__ {scalar_t__ op; TYPE_1__ imm; } ;
typedef TYPE_2__ inst ;
struct TYPE_14__ {TYPE_2__* first; } ;
typedef TYPE_3__ block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__) ;
 scalar_t__ FUNC_2 (TYPE_3__) ;
 int FUNC_3 (TYPE_3__) ;
 scalar_t__ FUNC_4 (TYPE_3__) ;
 scalar_t__ FUNC_5 (TYPE_3__) ;
 int FUNC_6 (int ,int ) ;

block FUNC_7(block VAR_2, block VAR_3) {
  FUNC_0(FUNC_5(VAR_2) && VAR_2.first->op == VAR_0);
  FUNC_0(FUNC_4(VAR_3) && FUNC_2(VAR_3) == VAR_1);
  inst *VAR_4 = VAR_2.first;
  VAR_4->imm.constant = FUNC_6(FUNC_1(VAR_3), VAR_4->imm.constant);
  FUNC_3(VAR_3);
  return VAR_2;
}
