
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int jv ;
struct TYPE_8__ {int constant; } ;
struct TYPE_9__ {scalar_t__ op; struct TYPE_9__* next; TYPE_1__ imm; } ;
typedef TYPE_2__ inst ;
struct TYPE_10__ {int member_1; int member_0; TYPE_2__* first; } ;
typedef TYPE_3__ block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_3__) ;
 TYPE_3__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int ) ;

block FUNC_8(block VAR_6) {
  int VAR_7 = 1;
  jv VAR_8 = FUNC_6();
  jv VAR_9 = FUNC_5();
  jv VAR_10 = FUNC_5();
  for (inst *VAR_11 = VAR_6.first; VAR_11; VAR_11 = VAR_11->next) {
    if (VAR_11->op == VAR_3) {
      VAR_9 = FUNC_2(VAR_11->imm.constant);
      VAR_11 = VAR_11->next;
    } else if (VAR_11->op != VAR_4 ||
        VAR_11->next == ((void*)0) ||
        VAR_11->next->op != VAR_2 ||
        VAR_11->next->next == ((void*)0) ||
        VAR_11->next->next->op != VAR_5) {
      VAR_7 = 0;
      break;
    } else {
      VAR_9 = FUNC_2(VAR_11->next->imm.constant);
      VAR_11 = VAR_11->next->next->next;
    }
    if (VAR_11 != ((void*)0) && VAR_11->op == VAR_3) {
      VAR_10 = FUNC_2(VAR_11->imm.constant);
      VAR_11 = VAR_11->next;
    } else if (VAR_11 == ((void*)0) ||
        VAR_11->op != VAR_4 ||
        VAR_11->next == ((void*)0) ||
        VAR_11->next->op != VAR_2 ||
        VAR_11->next->next == ((void*)0) ||
        VAR_11->next->next->op != VAR_5) {
      VAR_7 = 0;
      break;
    } else {
      VAR_10 = FUNC_2(VAR_11->next->imm.constant);
      VAR_11 = VAR_11->next->next->next;
    }
    if (VAR_11 == ((void*)0) || VAR_11->op != VAR_0) {
      VAR_7 = 0;
      break;
    }
    if (FUNC_4(VAR_9) != VAR_1) {
      VAR_7 = 0;
      break;
    }
    VAR_8 = FUNC_7(VAR_8, VAR_9, VAR_10);
    VAR_9 = FUNC_5();
    VAR_10 = FUNC_5();
  }
  if (!VAR_7) {
    FUNC_3(VAR_8);
    FUNC_3(VAR_9);
    FUNC_3(VAR_10);
    block VAR_12 = {0,0};
    return VAR_12;
  }
  FUNC_0(VAR_6);
  return FUNC_1(VAR_8);
}
