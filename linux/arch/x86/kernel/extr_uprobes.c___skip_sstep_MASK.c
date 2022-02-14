
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct arch_uprobe {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* emulate ) (struct arch_uprobe*,struct pt_regs*) ;} ;


 int FUNC_0 (struct arch_uprobe*,struct pt_regs*) ;

__attribute__((used)) static bool FUNC_1(struct arch_uprobe *VAR_0, struct pt_regs *VAR_1)
{
 if (VAR_0->ops->emulate)
  return VAR_0->ops->emulate(VAR_0, VAR_1);
 return 0;
}
