
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long* gprs; } ;


 unsigned int VAR_0 ;

unsigned long FUNC_0(struct pt_regs *VAR_1, unsigned int VAR_2)
{
 if (VAR_2 >= VAR_0)
  return 0;
 return VAR_1->gprs[VAR_2];
}
