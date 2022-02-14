
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_pt_regs {int dummy; } ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct pt_regs* FUNC_3 (struct pt_regs*) ;

unsigned int FUNC_4(int VAR_0, struct uml_pt_regs *VAR_1)
{
 struct pt_regs *VAR_2 = FUNC_3((struct pt_regs *)VAR_1);
 FUNC_1();
 FUNC_0(VAR_0);
 FUNC_2();
 FUNC_3(VAR_2);
 return 1;
}
