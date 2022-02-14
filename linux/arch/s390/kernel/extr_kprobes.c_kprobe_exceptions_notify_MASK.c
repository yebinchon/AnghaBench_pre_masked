
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; } ;
struct pt_regs {TYPE_1__ psw; } ;
struct notifier_block {int dummy; } ;
struct die_args {int trapnr; struct pt_regs* regs; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct pt_regs*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct pt_regs*) ;
 int FUNC_6 () ;

int FUNC_7(struct notifier_block *VAR_5,
        unsigned long VAR_6, void *VAR_7)
{
 struct die_args *VAR_8 = (struct die_args *) VAR_7;
 struct pt_regs *VAR_9 = VAR_8->regs;
 int VAR_10 = VAR_0;

 if (VAR_9->psw.mask & (VAR_3 | VAR_2))
  FUNC_3();

 switch (VAR_6) {
 case 130:
  if (FUNC_0(VAR_9))
   VAR_10 = VAR_1;
  break;
 case 129:
  if (FUNC_5(VAR_9))
   VAR_10 = VAR_1;
  break;
 case 128:
  if (!FUNC_6() && FUNC_1() &&
      FUNC_2(VAR_9, VAR_8->trapnr))
   VAR_10 = VAR_1;
  break;
 default:
  break;
 }

 if (VAR_9->psw.mask & (VAR_3 | VAR_2))
  FUNC_4(VAR_9->psw.mask & ~VAR_4);

 return VAR_10;
}
