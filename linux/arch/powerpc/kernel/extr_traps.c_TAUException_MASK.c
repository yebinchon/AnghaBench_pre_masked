
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int trap; int msr; int nip; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;

void FUNC_2(struct pt_regs *VAR_0)
{
 FUNC_1("TAU trap at PC: %lx, MSR: %lx, vector=%lx    %s\n",
        VAR_0->nip, VAR_0->msr, VAR_0->trap, FUNC_0());
}
