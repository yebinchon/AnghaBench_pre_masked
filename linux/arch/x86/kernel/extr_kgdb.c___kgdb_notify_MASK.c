
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct die_args {int signr; int trapnr; struct pt_regs* regs; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,unsigned long,struct pt_regs*) ;
 int FUNC_2 (struct pt_regs*,struct die_args*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_6(struct die_args *VAR_4, unsigned long VAR_5)
{
 struct pt_regs *VAR_6 = VAR_4->regs;

 switch (VAR_5) {
 case 128:
  if (FUNC_0(&VAR_3) != -1) {
   if (FUNC_5(VAR_6))
    return FUNC_2(VAR_6, VAR_4);
   break;
  } else if (FUNC_3(VAR_2))



   return VAR_0;

 default:
  if (FUNC_5(VAR_6))
   return VAR_0;
 }

 if (FUNC_1(VAR_4->trapnr, VAR_4->signr, VAR_5, VAR_6))
  return VAR_0;


 FUNC_4();
 return VAR_1;
}
