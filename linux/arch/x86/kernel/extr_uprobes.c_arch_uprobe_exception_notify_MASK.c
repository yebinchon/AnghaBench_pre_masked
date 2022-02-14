
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct notifier_block {int dummy; } ;
struct die_args {struct pt_regs* regs; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (struct pt_regs*) ;

int FUNC_3(struct notifier_block *VAR_2, unsigned long VAR_3, void *VAR_4)
{
 struct die_args *VAR_5 = VAR_4;
 struct pt_regs *VAR_6 = VAR_5->regs;
 int VAR_7 = VAR_0;


 if (VAR_6 && !FUNC_2(VAR_6))
  return VAR_0;

 switch (VAR_3) {
 case 128:
  if (FUNC_1(VAR_6))
   VAR_7 = VAR_1;

  break;

 case 129:
  if (FUNC_0(VAR_6))
   VAR_7 = VAR_1;

 default:
  break;
 }

 return VAR_7;
}
