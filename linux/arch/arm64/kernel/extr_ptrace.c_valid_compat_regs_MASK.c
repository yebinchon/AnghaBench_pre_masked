
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_pt_regs {int pstate; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct user_pt_regs*) ;

__attribute__((used)) static int FUNC_3(struct user_pt_regs *VAR_15)
{
 VAR_15->pstate &= ~VAR_14;

 if (!FUNC_1()) {
  if (FUNC_0(VAR_0))
   VAR_15->pstate |= VAR_3;
  else
   VAR_15->pstate &= ~VAR_3;
 }

 if (FUNC_2(VAR_15) && (VAR_15->pstate & VAR_13) &&
     (VAR_15->pstate & VAR_1) == 0 &&
     (VAR_15->pstate & VAR_7) == 0 &&
     (VAR_15->pstate & VAR_4) == 0) {
  return 1;
 }





 VAR_15->pstate &= VAR_8 | VAR_12 |
   VAR_2 | VAR_11 |
   VAR_9 | VAR_6 |
   VAR_5 | VAR_3 |
   VAR_10;
 VAR_15->pstate |= VAR_13;

 return 0;
}
