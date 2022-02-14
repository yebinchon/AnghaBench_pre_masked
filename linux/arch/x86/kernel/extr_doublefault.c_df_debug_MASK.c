
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,long) ;
 int FUNC_2 (struct pt_regs*) ;

void FUNC_3(struct pt_regs *VAR_0, long VAR_1)
{
 FUNC_1("PANIC: double fault, error_code: 0x%lx\n", VAR_1);
 FUNC_2(VAR_0);
 FUNC_0("Machine halted.");
}
