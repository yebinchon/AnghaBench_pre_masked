
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned long FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (struct pt_regs*,unsigned long) ;

unsigned long
FUNC_2(unsigned long VAR_0,
      struct pt_regs *VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1, VAR_0);

 return VAR_2;
}
