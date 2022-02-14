
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_pt_regs {int pstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct user_pt_regs*) ;

__attribute__((used)) static int FUNC_1(struct user_pt_regs *VAR_10)
{
 VAR_10->pstate &= ~VAR_9;

 if (FUNC_0(VAR_10) && !(VAR_10->pstate & VAR_5) &&
     (VAR_10->pstate & VAR_2) == 0 &&
     (VAR_10->pstate & VAR_0) == 0 &&
     (VAR_10->pstate & VAR_4) == 0 &&
     (VAR_10->pstate & VAR_3) == 0) {
  return 1;
 }


 VAR_10->pstate &= VAR_6 | VAR_8 | VAR_1 | VAR_7;

 return 0;
}
