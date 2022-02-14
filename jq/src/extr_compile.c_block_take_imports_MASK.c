
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
struct TYPE_12__ {int constant; } ;
struct TYPE_13__ {scalar_t__ op; TYPE_3__ imm; } ;
typedef TYPE_4__ inst ;
struct TYPE_14__ {TYPE_2__* first; } ;
typedef TYPE_5__ block ;
struct TYPE_11__ {scalar_t__ op; TYPE_1__* next; } ;
struct TYPE_10__ {scalar_t__ op; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

jv FUNC_6(block* VAR_3) {
  jv VAR_4 = FUNC_3();


  FUNC_0(!(VAR_3->first && VAR_3->first->op == VAR_2 && VAR_3->first->next &&
        (VAR_3->first->next->op == VAR_1 || VAR_3->first->next->op == VAR_0)));

  while (VAR_3->first && (VAR_3->first->op == VAR_1 || VAR_3->first->op == VAR_0)) {
    inst* VAR_5 = FUNC_1(VAR_3);
    if (VAR_5->op == VAR_0) {
      VAR_4 = FUNC_4(VAR_4, FUNC_5(VAR_5->imm.constant));
    }
    FUNC_2(VAR_5);
  }
  return VAR_4;
}
