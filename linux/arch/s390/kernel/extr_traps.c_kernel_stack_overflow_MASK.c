
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct pt_regs*) ;

void FUNC_4(struct pt_regs *VAR_0)
{
 FUNC_0(1);
 FUNC_2("Kernel stack overflow.\n");
 FUNC_3(VAR_0);
 FUNC_0(0);
 FUNC_1("Corrupt kernel stack, can't continue.");
}
