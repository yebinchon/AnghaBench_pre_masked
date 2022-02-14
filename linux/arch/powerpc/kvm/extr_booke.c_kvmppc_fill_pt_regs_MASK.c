
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* ulong ;
struct pt_regs {void* link; void* msr; void* nip; void** gpr; } ;


 int FUNC_0 (struct pt_regs*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct pt_regs *VAR_0)
{
 ulong VAR_1, VAR_2, VAR_3, VAR_4;

 asm("mr %0, 1" : "=r"(VAR_1));
 asm("mflr %0" : "=r"(VAR_4));
 asm("mfmsr %0" : "=r"(VAR_3));
 asm("bl 1f; 1: mflr %0" : "=r"(VAR_2));

 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->gpr[1] = VAR_1;
 VAR_0->nip = VAR_2;
 VAR_0->msr = VAR_3;
 VAR_0->link = VAR_4;
}
