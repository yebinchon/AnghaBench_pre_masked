
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct die_args {scalar_t__ regs; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3(struct notifier_block *VAR_2,
     unsigned long VAR_3, void *VAR_4)
{
 int VAR_5 = VAR_0;
 struct die_args *VAR_6 = (struct die_args *)VAR_4;


 if (VAR_6->regs && !FUNC_2(VAR_6->regs))
  return VAR_0;

 switch (VAR_3) {
 case 129:
  if (FUNC_1(VAR_6->regs))
   VAR_5 = VAR_1;
  break;

 case 128:
  if (FUNC_0(VAR_6->regs))
   VAR_5 = VAR_1;

 default:
  break;
 }

 return VAR_5;
}
