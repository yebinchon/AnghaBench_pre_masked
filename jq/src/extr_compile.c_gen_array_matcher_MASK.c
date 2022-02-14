
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int constant; } ;
struct TYPE_14__ {scalar_t__ op; TYPE_2__ imm; struct TYPE_14__* next; } ;
typedef TYPE_3__ inst ;
struct TYPE_15__ {TYPE_1__* first; } ;
typedef TYPE_4__ block ;
struct TYPE_12__ {scalar_t__ op; TYPE_3__* next; } ;


 TYPE_4__ FUNC_0 (int ,int ,int ,TYPE_4__,TYPE_4__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_4__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ) ;

block FUNC_8(block VAR_5, block VAR_6) {
  int VAR_7;
  if (FUNC_2(VAR_5))
    VAR_7 = 0;
  else {


    FUNC_1(VAR_5.first->op == VAR_0);
    FUNC_1(VAR_5.first->next != ((void*)0));
    inst *VAR_8 = ((void*)0);
    if (VAR_5.first->next->op == VAR_3) {
      VAR_8 = VAR_5.first->next;
    } else {
      FUNC_1(VAR_5.first->next->op == VAR_4);
      FUNC_1(VAR_5.first->next->next->op == VAR_2);
      VAR_8 = VAR_5.first->next->next;
    }
    VAR_7 = 1 + (int) FUNC_7(VAR_8->imm.constant);
  }


  return FUNC_0(FUNC_4(VAR_0), FUNC_5(FUNC_3(FUNC_6(VAR_7))),
               FUNC_4(VAR_1), VAR_6, VAR_5);
}
