
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int sp; } ;
struct arch_uprobe {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct arch_uprobe*) ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_3(struct arch_uprobe *VAR_1, struct pt_regs *VAR_2)
{
 FUNC_0(!FUNC_1(VAR_1));






 VAR_2->sp += FUNC_2(VAR_2);
 return -VAR_0;
}
