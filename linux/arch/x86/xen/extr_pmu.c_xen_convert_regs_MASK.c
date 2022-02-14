
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct xen_pmu_regs {int cs; scalar_t__ cpl; int sp; int ip; } ;
struct pt_regs {int cs; int sp; int ip; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(const struct xen_pmu_regs *VAR_2,
        struct pt_regs *VAR_3, uint64_t VAR_4)
{
 VAR_3->ip = VAR_2->ip;
 VAR_3->cs = VAR_2->cs;
 VAR_3->sp = VAR_2->sp;

 if (VAR_4 & VAR_0) {
  if (VAR_4 & VAR_1)
   VAR_3->cs |= 3;
  else
   VAR_3->cs &= ~3;
 } else {
  if (VAR_2->cpl)
   VAR_3->cs |= 3;
  else
   VAR_3->cs &= ~3;
 }
}
