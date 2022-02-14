
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 scalar_t__ FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (struct pt_regs*,unsigned long) ;

unsigned long FUNC_2(struct pt_regs *VAR_0, unsigned int VAR_1)
{
 unsigned long *VAR_2 = (unsigned long *)FUNC_0(VAR_0);

 VAR_2 -= VAR_1;

 if (!FUNC_1(VAR_0, (unsigned long)VAR_2))
  return 0;

 return *VAR_2;
}
