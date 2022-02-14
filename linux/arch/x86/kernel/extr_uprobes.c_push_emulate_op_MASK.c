
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int ip; } ;
struct TYPE_2__ {int reg_offset; scalar_t__ ilen; } ;
struct arch_uprobe {TYPE_1__ push; } ;


 scalar_t__ FUNC_0 (struct pt_regs*,unsigned long) ;

__attribute__((used)) static bool FUNC_1(struct arch_uprobe *VAR_0, struct pt_regs *VAR_1)
{
 unsigned long *VAR_2 = (void *)VAR_1 + VAR_0->push.reg_offset;

 if (FUNC_0(VAR_1, *VAR_2))
  return 0;
 VAR_1->ip += VAR_0->push.ilen;
 return 1;
}
