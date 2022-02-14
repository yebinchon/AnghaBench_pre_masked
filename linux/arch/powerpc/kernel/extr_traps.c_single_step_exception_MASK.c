
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int nip; } ;
typedef enum ctx_state { ____Placeholder_ctx_state } ctx_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct pt_regs*,int ,int ) ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (struct pt_regs*) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct pt_regs*) ;
 scalar_t__ FUNC_7 (int ,char*,struct pt_regs*,int,int,int ) ;

void FUNC_8(struct pt_regs *VAR_4)
{
 enum ctx_state VAR_5 = FUNC_4();

 FUNC_2(VAR_4);
 FUNC_1(VAR_4);

 if (FUNC_6(VAR_4))
  return;

 if (FUNC_7(VAR_0, "single_step", VAR_4, 5,
     5, VAR_2) == VAR_1)
  goto bail;
 if (FUNC_3(VAR_4))
  goto bail;

 FUNC_0(VAR_2, VAR_4, VAR_3, VAR_4->nip);

bail:
 FUNC_5(VAR_5);
}
