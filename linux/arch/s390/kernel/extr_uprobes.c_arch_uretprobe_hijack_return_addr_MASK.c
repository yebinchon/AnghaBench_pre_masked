
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long* gprs; } ;



unsigned long FUNC_0(unsigned long VAR_0,
      struct pt_regs *VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = VAR_1->gprs[14];
 VAR_1->gprs[14] = VAR_0;
 return VAR_2;
}
