
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int constant; } ;
struct TYPE_6__ {TYPE_1__ imm; } ;
typedef TYPE_2__ inst ;
typedef int block ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char*) ;

block FUNC_8(block VAR_2) {
  inst* VAR_3 = FUNC_3(VAR_1);
  VAR_3->imm.constant = FUNC_0(VAR_2);
  if (FUNC_4(VAR_3->imm.constant) != VAR_0)
    VAR_3->imm.constant = FUNC_6(FUNC_5(), FUNC_7("metadata"), VAR_3->imm.constant);
  FUNC_1(VAR_2);
  return FUNC_2(VAR_3);
}
