
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long pc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;

void FUNC_2(struct pt_regs *VAR_1, unsigned long VAR_2)
{
 VAR_1->pc += VAR_2;





 if (FUNC_1(VAR_1))
  FUNC_0(VAR_0);
}
