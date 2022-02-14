
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int cp0_cause; unsigned long long cp0_epc; } ;
struct TYPE_2__ {int toea; int ccfg; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,unsigned long long,unsigned long long) ;
 int FUNC_4 (struct pt_regs*) ;
 int FUNC_5 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_6(struct pt_regs *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_1->cp0_cause & 4;
 FUNC_1();
 FUNC_3("%cBE exception at %#lx\n", VAR_3 ? 'D' : 'I', VAR_1->cp0_epc);
 FUNC_3("ccfg:%llx, toea:%llx\n",
        (unsigned long long)FUNC_0(&VAR_0->ccfg),
        (unsigned long long)FUNC_0(&VAR_0->toea));



 FUNC_4(VAR_1);
 FUNC_2("BusError!");
}
