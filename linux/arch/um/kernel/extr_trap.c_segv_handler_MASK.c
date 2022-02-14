
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_pt_regs {int dummy; } ;
struct siginfo {int dummy; } ;
struct faultinfo {int dummy; } ;


 int FUNC_0 (struct faultinfo*) ;
 struct faultinfo* FUNC_1 (struct uml_pt_regs*) ;
 int FUNC_2 (struct uml_pt_regs*) ;
 scalar_t__ FUNC_3 (struct uml_pt_regs*) ;
 int FUNC_4 (struct faultinfo,int ) ;
 int FUNC_5 (struct faultinfo,int ,scalar_t__,struct uml_pt_regs*) ;
 int FUNC_6 (struct uml_pt_regs*) ;

void FUNC_7(int VAR_0, struct siginfo *VAR_1, struct uml_pt_regs *VAR_2)
{
 struct faultinfo * VAR_3 = FUNC_1(VAR_2);

 if (FUNC_3(VAR_2) && !FUNC_0(VAR_3)) {
  FUNC_6(VAR_2);
  FUNC_4(*VAR_3, FUNC_2(VAR_2));
  return;
 }
 FUNC_5(*VAR_3, FUNC_2(VAR_2), FUNC_3(VAR_2), VAR_2);
}
