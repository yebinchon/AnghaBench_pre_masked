
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int jv ;
struct TYPE_11__ {TYPE_1__* target; int constant; } ;
struct TYPE_13__ {scalar_t__ op; TYPE_2__ imm; struct TYPE_13__* next; } ;
typedef TYPE_4__ inst ;
struct TYPE_14__ {int member_1; int member_0; TYPE_3__* last; TYPE_4__* first; } ;
typedef TYPE_5__ block ;
struct TYPE_12__ {scalar_t__ op; } ;
struct TYPE_10__ {scalar_t__ op; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_5__) ;
 TYPE_5__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static block FUNC_7(block VAR_3) {
  int VAR_4 = 1;
  int VAR_5 = 0;
  int VAR_6 = 1;
  jv VAR_7 = FUNC_2();
  for (inst *VAR_8 = VAR_3.first; VAR_8; VAR_8 = VAR_8->next) {
    if (VAR_8->op == VAR_0) {
      VAR_5++;
      if (VAR_8->imm.target == ((void*)0) || VAR_8->imm.target->op != VAR_1 ||
          FUNC_4(FUNC_5(VAR_7)) > 0) {
        VAR_6 = 0;
        break;
      }
    } else if (VAR_4 && VAR_8->op == VAR_2) {
      if (VAR_8->next != ((void*)0) && VAR_8->next->op != VAR_1) {
        VAR_6 = 0;
        break;
      }
      VAR_7 = FUNC_3(VAR_7, FUNC_5(VAR_8->imm.constant));
    } else if (VAR_8->op != VAR_1 || VAR_8->imm.target == ((void*)0) ||
               VAR_8->imm.target->op != VAR_2) {
      VAR_4 = 0;
    }
  }

  if (VAR_4 && VAR_6 &&
      (VAR_3.last == ((void*)0) || VAR_3.last->op == VAR_2) &&
      FUNC_4(FUNC_5(VAR_7)) == VAR_5 + 1) {
    FUNC_0(VAR_3);
    return FUNC_1(VAR_7);
  }

  FUNC_6(VAR_7);
  block VAR_9 = {0,0};
  return VAR_9;
}
