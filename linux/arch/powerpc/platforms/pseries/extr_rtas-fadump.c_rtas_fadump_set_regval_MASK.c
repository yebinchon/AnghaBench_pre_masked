
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pt_regs {unsigned long* gpr; unsigned long nip; unsigned long msr; unsigned long ctr; unsigned long link; unsigned long xer; unsigned long ccr; unsigned long dar; unsigned long dsisr; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct pt_regs *VAR_0, u64 VAR_1, u64 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 >= 0)
  VAR_0->gpr[VAR_3] = (unsigned long)VAR_2;
 else if (VAR_1 == FUNC_0("NIA"))
  VAR_0->nip = (unsigned long)VAR_2;
 else if (VAR_1 == FUNC_0("MSR"))
  VAR_0->msr = (unsigned long)VAR_2;
 else if (VAR_1 == FUNC_0("CTR"))
  VAR_0->ctr = (unsigned long)VAR_2;
 else if (VAR_1 == FUNC_0("LR"))
  VAR_0->link = (unsigned long)VAR_2;
 else if (VAR_1 == FUNC_0("XER"))
  VAR_0->xer = (unsigned long)VAR_2;
 else if (VAR_1 == FUNC_0("CR"))
  VAR_0->ccr = (unsigned long)VAR_2;
 else if (VAR_1 == FUNC_0("DAR"))
  VAR_0->dar = (unsigned long)VAR_2;
 else if (VAR_1 == FUNC_0("DSISR"))
  VAR_0->dsisr = (unsigned long)VAR_2;
}
