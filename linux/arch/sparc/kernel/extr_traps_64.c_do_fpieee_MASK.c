
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
typedef enum ctx_state { ____Placeholder_ctx_state } ctx_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,char*,struct pt_regs*,int ,int,int ) ;

void FUNC_4(struct pt_regs *VAR_3)
{
 enum ctx_state VAR_4 = FUNC_1();

 if (FUNC_3(VAR_0, "fpu exception ieee", VAR_3,
         0, 0x24, VAR_2) == VAR_1)
  goto out;

 FUNC_0(VAR_3);
out:
 FUNC_2(VAR_4);
}
