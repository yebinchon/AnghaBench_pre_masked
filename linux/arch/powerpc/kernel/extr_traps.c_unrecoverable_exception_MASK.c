
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int msr; int nip; int trap; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct pt_regs*,int ) ;
 int FUNC_1 (char*,int ,int ,int ) ;

void FUNC_2(struct pt_regs *VAR_1)
{
 FUNC_1("Unrecoverable exception %lx at %lx (msr=%lx)\n",
   VAR_1->trap, VAR_1->nip, VAR_1->msr);
 FUNC_0("Unrecoverable exception", VAR_1, VAR_0);
}
