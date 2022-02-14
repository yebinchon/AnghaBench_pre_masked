
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int jv ;
struct TYPE_5__ {TYPE_1__* first; } ;
struct TYPE_4__ {scalar_t__ op; int symbol; int * bound_by; TYPE_2__ subfn; struct TYPE_4__* next; } ;
typedef TYPE_1__ inst ;
typedef TYPE_2__ block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(block VAR_3, jv *VAR_4) {
  FUNC_0(VAR_4 != ((void*)0));
  FUNC_0(FUNC_1(*VAR_4) == VAR_0);
  for (inst* VAR_5 = VAR_3.first; VAR_5; VAR_5 = VAR_5->next) {
    if (VAR_5->subfn.first) {
      FUNC_5(VAR_5->subfn, VAR_4);
      continue;
    }
    if ((VAR_5->op == VAR_1 || VAR_5->op == VAR_2) && VAR_5->bound_by == ((void*)0)) {
      *VAR_4 = FUNC_2(*VAR_4, FUNC_3(VAR_5->symbol), FUNC_4());
    }
  }
}
