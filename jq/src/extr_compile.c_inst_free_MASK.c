
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int constant; } ;
struct inst {TYPE_1__ imm; int op; scalar_t__ locfile; int arglist; int subfn; struct inst* symbol; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inst*) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_2__* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct inst* VAR_1) {
  FUNC_2(VAR_1->symbol);
  FUNC_0(VAR_1->subfn);
  FUNC_0(VAR_1->arglist);
  if (VAR_1->locfile)
    FUNC_3(VAR_1->locfile);
  if (FUNC_4(VAR_1->op)->flags & VAR_0) {
    FUNC_1(VAR_1->imm.constant);
  }
  FUNC_2(VAR_1);
}
