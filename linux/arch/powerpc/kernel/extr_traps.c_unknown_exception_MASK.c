
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int trap; int msr; int nip; } ;
typedef enum ctx_state { ____Placeholder_ctx_state } ctx_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct pt_regs*,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int ,int ) ;

void FUNC_4(struct pt_regs *VAR_2)
{
 enum ctx_state VAR_3 = FUNC_1();

 FUNC_3("Bad trap at PC: %lx, SR: %lx, vector=%lx\n",
        VAR_2->nip, VAR_2->msr, VAR_2->trap);

 FUNC_0(VAR_0, VAR_2, VAR_1, 0);

 FUNC_2(VAR_3);
}
