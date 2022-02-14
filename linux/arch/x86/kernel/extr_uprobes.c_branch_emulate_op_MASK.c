
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {unsigned long ip; } ;
struct TYPE_2__ {unsigned long ilen; scalar_t__ offs; } ;
struct arch_uprobe {TYPE_1__ branch; } ;


 scalar_t__ FUNC_0 (struct arch_uprobe*) ;
 int FUNC_1 (struct arch_uprobe*,struct pt_regs*) ;
 scalar_t__ FUNC_2 (struct pt_regs*,unsigned long) ;

__attribute__((used)) static bool FUNC_3(struct arch_uprobe *VAR_0, struct pt_regs *VAR_1)
{
 unsigned long VAR_2 = VAR_1->ip += VAR_0->branch.ilen;
 unsigned long VAR_3 = (long)VAR_0->branch.offs;

 if (FUNC_0(VAR_0)) {
  if (FUNC_2(VAR_1, VAR_2))
   return 0;
 } else if (!FUNC_1(VAR_0, VAR_1)) {
  VAR_3 = 0;
 }

 VAR_1->ip = VAR_2 + VAR_3;
 return 1;
}
