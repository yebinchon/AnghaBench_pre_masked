
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
typedef enum ctx_state { ____Placeholder_ctx_state } ctx_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct pt_regs*,int ,unsigned long) ;
 int FUNC_1 (struct pt_regs*,unsigned long,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct pt_regs*) ;

void FUNC_5(struct pt_regs *VAR_4, unsigned long VAR_5, int VAR_6)
{
 enum ctx_state VAR_7 = FUNC_2();

 if (FUNC_4(VAR_4)) {





   FUNC_0(VAR_2, VAR_4, VAR_0, VAR_5);
 } else
  FUNC_1(VAR_4, VAR_5, VAR_2);

 FUNC_3(VAR_7);
}
