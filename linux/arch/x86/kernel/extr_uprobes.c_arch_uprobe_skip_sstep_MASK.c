
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int flags; } ;
struct arch_uprobe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct arch_uprobe*,struct pt_regs*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;

bool FUNC_2(struct arch_uprobe *VAR_3, struct pt_regs *VAR_4)
{
 bool VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5 && (VAR_4->flags & VAR_1))
  FUNC_1(VAR_0, VAR_2, 0);
 return VAR_5;
}
