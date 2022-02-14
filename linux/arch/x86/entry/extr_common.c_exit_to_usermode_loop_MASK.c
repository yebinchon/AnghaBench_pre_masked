
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pt_regs {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (struct pt_regs*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *,struct pt_regs*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct pt_regs*) ;
 int FUNC_11 (struct pt_regs*) ;

__attribute__((used)) static void FUNC_12(struct pt_regs *VAR_9, u32 VAR_10)
{







 while (1) {

  FUNC_7();

  if (VAR_10 & VAR_2)
   FUNC_9();

  if (VAR_10 & VAR_6)
   FUNC_11(VAR_9);

  if (VAR_10 & VAR_4)
   FUNC_5(VAR_8);


  if (VAR_10 & VAR_5)
   FUNC_3(VAR_9);

  if (VAR_10 & VAR_3) {
   FUNC_1(VAR_1);
   FUNC_10(VAR_9);
   FUNC_8(((void*)0), VAR_9);
  }

  if (VAR_10 & VAR_7)
   FUNC_4();


  FUNC_6();

  VAR_10 = FUNC_0(FUNC_2()->flags);

  if (!(VAR_10 & VAR_0))
   break;
 }
}
