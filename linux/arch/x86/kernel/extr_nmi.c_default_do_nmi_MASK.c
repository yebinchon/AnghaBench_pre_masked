
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int ip; } ;
struct TYPE_4__ {int swallow; int external; int normal; } ;
struct TYPE_3__ {unsigned char (* get_nmi_reason ) () ;} ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned char,struct pt_regs*) ;
 int VAR_4 ;
 int FUNC_5 (int ,struct pt_regs*) ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_6 (unsigned char,struct pt_regs*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (struct pt_regs*) ;
 unsigned char FUNC_11 () ;
 int VAR_7 ;
 int FUNC_12 (unsigned char,struct pt_regs*) ;
 TYPE_1__ VAR_8 ;

__attribute__((used)) static void FUNC_13(struct pt_regs *VAR_9)
{
 unsigned char VAR_10 = 0;
 int VAR_11;
 bool VAR_12 = 0;
 if (VAR_9->ip == FUNC_1(VAR_4))
  VAR_12 = 1;
 else
  FUNC_2(VAR_7, 0);

 FUNC_2(VAR_4, VAR_9->ip);

 VAR_11 = FUNC_5(VAR_0, VAR_9);
 FUNC_0(VAR_6.normal, VAR_11);
 if (VAR_11) {
  if (VAR_11 > 1)
   FUNC_2(VAR_7, 1);
  return;
 }
 while (!FUNC_7(&VAR_5)) {
  FUNC_10(VAR_9);
  FUNC_3();
 }

 VAR_10 = VAR_8.get_nmi_reason();

 if (VAR_10 & VAR_2) {
  if (VAR_10 & VAR_3)
   FUNC_6(VAR_10, VAR_9);
  else if (VAR_10 & VAR_1)
   FUNC_4(VAR_10, VAR_9);







  FUNC_0(VAR_6.external, 1);
  FUNC_8(&VAR_5);
  return;
 }
 FUNC_8(&VAR_5);
 if (VAR_12 && FUNC_1(VAR_7))
  FUNC_0(VAR_6.swallow, 1);
 else
  FUNC_12(VAR_10, VAR_9);
}
