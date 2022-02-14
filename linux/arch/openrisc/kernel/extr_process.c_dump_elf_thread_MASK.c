
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__ sr; scalar_t__ pc; scalar_t__ gpr; } ;
typedef scalar_t__ elf_greg_t ;


 int FUNC_0 (scalar_t__*,scalar_t__,int) ;

void FUNC_1(elf_greg_t *VAR_0, struct pt_regs* VAR_1)
{
 VAR_0[0] = 0;
 FUNC_0(VAR_0+1, VAR_1->gpr+1, 31*sizeof(unsigned long));
 VAR_0[32] = VAR_1->pc;
 VAR_0[33] = VAR_1->sr;
 VAR_0[34] = 0;
 VAR_0[35] = 0;
}
