
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long cp0_epc; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(struct pt_regs *VAR_1)
{
 unsigned long VAR_2 = (unsigned long)FUNC_0();

 if (VAR_1->cp0_epc < VAR_2)
  return 0;
 if (VAR_1->cp0_epc >= (VAR_2 + VAR_0))
  return 0;

 return 1;
}
