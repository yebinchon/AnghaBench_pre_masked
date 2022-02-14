
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct notifier_block {int dummy; } ;
struct die_args {struct pt_regs* regs; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_regs*,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_1, unsigned long VAR_2,
       void *VAR_3)
{
 struct die_args *VAR_4 = (struct die_args *)VAR_3;
 struct pt_regs *VAR_5 = VAR_4->regs;

 FUNC_0(VAR_5, VAR_2);
 return VAR_0;
}
