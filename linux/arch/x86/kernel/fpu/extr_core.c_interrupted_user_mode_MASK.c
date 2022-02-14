
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 struct pt_regs* FUNC_0 () ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;

__attribute__((used)) static bool FUNC_2(void)
{
 struct pt_regs *VAR_0 = FUNC_0();
 return VAR_0 && FUNC_1(VAR_0);
}
