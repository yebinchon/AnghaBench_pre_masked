
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct pt_regs {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (struct pt_regs*) ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;

unsigned long FUNC_2(struct pt_regs *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2);

 if (VAR_3)
  return VAR_3;
 return FUNC_1(VAR_2) ? VAR_1 :
  VAR_0;
}
