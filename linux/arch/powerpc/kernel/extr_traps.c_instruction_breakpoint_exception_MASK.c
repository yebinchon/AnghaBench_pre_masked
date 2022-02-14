
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
 scalar_t__ FUNC_1 (struct pt_regs*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,char*,struct pt_regs*,int,int,int ) ;

void FUNC_5(struct pt_regs *VAR_4)
{
 enum ctx_state VAR_5 = FUNC_2();

 if (FUNC_4(VAR_0, "iabr_match", VAR_4, 5,
     5, VAR_2) == VAR_1)
  goto bail;
 if (FUNC_1(VAR_4))
  goto bail;
 FUNC_0(VAR_2, VAR_4, VAR_3, VAR_4->nip);

bail:
 FUNC_3(VAR_5);
}
