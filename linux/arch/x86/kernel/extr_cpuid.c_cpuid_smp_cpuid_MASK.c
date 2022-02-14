
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int edx; int ecx; int ebx; int eax; } ;
struct cpuid_regs_done {int done; TYPE_1__ regs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct cpuid_regs_done *VAR_1 = VAR_0;

 FUNC_1(VAR_1->regs.eax, VAR_1->regs.ecx,
      &VAR_1->regs.eax, &VAR_1->regs.ebx,
      &VAR_1->regs.ecx, &VAR_1->regs.edx);

 FUNC_0(&VAR_1->done);
}
