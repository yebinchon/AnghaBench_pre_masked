
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pt_regs {scalar_t__* regs; int pmr_save; scalar_t__ pc; scalar_t__ sp; scalar_t__ compat_sp; scalar_t__ compat_lr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct pt_regs*) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct pt_regs*) ;

void FUNC_7(struct pt_regs *VAR_1)
{
 int VAR_2, VAR_3;
 u64 VAR_4, VAR_5;

 if (FUNC_0(VAR_1)) {
  VAR_4 = VAR_1->compat_lr;
  VAR_5 = VAR_1->compat_sp;
  VAR_3 = 12;
 } else {
  VAR_4 = VAR_1->regs[30];
  VAR_5 = VAR_1->sp;
  VAR_3 = 29;
 }

 FUNC_4(VAR_0);
 FUNC_2(VAR_1);

 if (!FUNC_6(VAR_1)) {
  FUNC_3("pc : %pS\n", (void *)VAR_1->pc);
  FUNC_3("lr : %pS\n", (void *)VAR_4);
 } else {
  FUNC_3("pc : %016llx\n", VAR_1->pc);
  FUNC_3("lr : %016llx\n", VAR_4);
 }

 FUNC_3("sp : %016llx\n", VAR_5);

 if (FUNC_5())
  FUNC_3("pmr_save: %08llx\n", VAR_1->pmr_save);

 VAR_2 = VAR_3;

 while (VAR_2 >= 0) {
  FUNC_3("x%-2d: %016llx ", VAR_2, VAR_1->regs[VAR_2]);
  VAR_2--;

  if (VAR_2 % 2 == 0) {
   FUNC_1("x%-2d: %016llx ", VAR_2, VAR_1->regs[VAR_2]);
   VAR_2--;
  }

  FUNC_1("\n");
 }
}
