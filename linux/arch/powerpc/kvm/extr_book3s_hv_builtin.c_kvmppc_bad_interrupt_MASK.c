
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int in_nmi; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (char*,struct pt_regs*,int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (struct pt_regs*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct pt_regs*) ;

void FUNC_6(struct pt_regs *VAR_1)
{




 if (FUNC_0(VAR_1) == 0x100) {
  FUNC_2()->in_nmi++;
  FUNC_5(VAR_1);
  FUNC_2()->in_nmi--;
 } else if (FUNC_0(VAR_1) == 0x200) {
  FUNC_3(VAR_1);
 } else {
  FUNC_1("Bad interrupt in KVM entry/exit code", VAR_1, VAR_0);
 }
 FUNC_4("Bad KVM trap");
}
