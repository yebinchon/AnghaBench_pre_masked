
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct pt_regs {int * regs; int pc; int sp; int compat_lr; int compat_sp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;

u64 FUNC_2(struct pt_regs *VAR_4, int VAR_5)
{
 if (FUNC_0((u32)VAR_5 >= VAR_1))
  return 0;






 if (FUNC_1(VAR_4)) {
  if ((u32)VAR_5 == VAR_3)
   return VAR_4->compat_sp;
  if ((u32)VAR_5 == VAR_0)
   return VAR_4->compat_lr;
 }

 if ((u32)VAR_5 == VAR_3)
  return VAR_4->sp;

 if ((u32)VAR_5 == VAR_2)
  return VAR_4->pc;

 return VAR_4->regs[VAR_5];
}
