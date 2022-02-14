
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* gregs; unsigned long version; } ;
struct ucontext {TYPE_1__ uc_mcontext; } ;
struct switch_stack {int gp; int fp; int r23; int r22; int r21; int r20; int r19; int r18; int r17; int r16; } ;
struct pt_regs {int sp; int ea; int ra; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; int r7; int r6; int r5; int r4; int r3; int r2; int r1; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long*) ;

__attribute__((used)) static inline int FUNC_1(struct ucontext *VAR_1, struct pt_regs *VAR_2)
{
 struct switch_stack *VAR_3 = (struct switch_stack *)VAR_2 - 1;
 unsigned long *VAR_4 = VAR_1->uc_mcontext.gregs;
 int VAR_5 = 0;

 VAR_5 |= FUNC_0(VAR_0, &VAR_1->uc_mcontext.version);
 VAR_5 |= FUNC_0(VAR_2->r1, &VAR_4[0]);
 VAR_5 |= FUNC_0(VAR_2->r2, &VAR_4[1]);
 VAR_5 |= FUNC_0(VAR_2->r3, &VAR_4[2]);
 VAR_5 |= FUNC_0(VAR_2->r4, &VAR_4[3]);
 VAR_5 |= FUNC_0(VAR_2->r5, &VAR_4[4]);
 VAR_5 |= FUNC_0(VAR_2->r6, &VAR_4[5]);
 VAR_5 |= FUNC_0(VAR_2->r7, &VAR_4[6]);
 VAR_5 |= FUNC_0(VAR_2->r8, &VAR_4[7]);
 VAR_5 |= FUNC_0(VAR_2->r9, &VAR_4[8]);
 VAR_5 |= FUNC_0(VAR_2->r10, &VAR_4[9]);
 VAR_5 |= FUNC_0(VAR_2->r11, &VAR_4[10]);
 VAR_5 |= FUNC_0(VAR_2->r12, &VAR_4[11]);
 VAR_5 |= FUNC_0(VAR_2->r13, &VAR_4[12]);
 VAR_5 |= FUNC_0(VAR_2->r14, &VAR_4[13]);
 VAR_5 |= FUNC_0(VAR_2->r15, &VAR_4[14]);
 VAR_5 |= FUNC_0(VAR_3->r16, &VAR_4[15]);
 VAR_5 |= FUNC_0(VAR_3->r17, &VAR_4[16]);
 VAR_5 |= FUNC_0(VAR_3->r18, &VAR_4[17]);
 VAR_5 |= FUNC_0(VAR_3->r19, &VAR_4[18]);
 VAR_5 |= FUNC_0(VAR_3->r20, &VAR_4[19]);
 VAR_5 |= FUNC_0(VAR_3->r21, &VAR_4[20]);
 VAR_5 |= FUNC_0(VAR_3->r22, &VAR_4[21]);
 VAR_5 |= FUNC_0(VAR_3->r23, &VAR_4[22]);
 VAR_5 |= FUNC_0(VAR_2->ra, &VAR_4[23]);
 VAR_5 |= FUNC_0(VAR_3->fp, &VAR_4[24]);
 VAR_5 |= FUNC_0(VAR_3->gp, &VAR_4[25]);
 VAR_5 |= FUNC_0(VAR_2->ea, &VAR_4[27]);
 VAR_5 |= FUNC_0(VAR_2->sp, &VAR_4[28]);
 return VAR_5;
}
