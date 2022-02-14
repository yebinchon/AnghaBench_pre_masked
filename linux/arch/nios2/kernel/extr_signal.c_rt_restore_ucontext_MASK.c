
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long* gregs; unsigned long version; } ;
struct ucontext {int uc_stack; TYPE_2__ uc_mcontext; } ;
struct switch_stack {int r16; int r17; int r18; int r19; int r20; int r21; int r22; int r23; int fp; int gp; } ;
struct pt_regs {int r1; int r2; int r3; int r4; int r5; int r6; int r7; int r8; int r9; int r10; int r11; int r12; int r13; int r14; int r15; int ea; int ra; int sp; int orig_r2; } ;
struct TYPE_4__ {int fn; } ;
struct TYPE_6__ {TYPE_1__ restart_block; } ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned long*) ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct pt_regs *VAR_3,
     struct switch_stack *VAR_4,
     struct ucontext *VAR_5, int *VAR_6)
{
 int VAR_7;
 unsigned long *VAR_8 = VAR_5->uc_mcontext.gregs;
 int VAR_9;


 VAR_1->restart_block.fn = VAR_2;

 VAR_9 = FUNC_0(VAR_7, &VAR_5->uc_mcontext.version);
 if (VAR_7 != VAR_0)
  goto badframe;

 VAR_9 |= FUNC_0(VAR_3->r1, &VAR_8[0]);
 VAR_9 |= FUNC_0(VAR_3->r2, &VAR_8[1]);
 VAR_9 |= FUNC_0(VAR_3->r3, &VAR_8[2]);
 VAR_9 |= FUNC_0(VAR_3->r4, &VAR_8[3]);
 VAR_9 |= FUNC_0(VAR_3->r5, &VAR_8[4]);
 VAR_9 |= FUNC_0(VAR_3->r6, &VAR_8[5]);
 VAR_9 |= FUNC_0(VAR_3->r7, &VAR_8[6]);
 VAR_9 |= FUNC_0(VAR_3->r8, &VAR_8[7]);
 VAR_9 |= FUNC_0(VAR_3->r9, &VAR_8[8]);
 VAR_9 |= FUNC_0(VAR_3->r10, &VAR_8[9]);
 VAR_9 |= FUNC_0(VAR_3->r11, &VAR_8[10]);
 VAR_9 |= FUNC_0(VAR_3->r12, &VAR_8[11]);
 VAR_9 |= FUNC_0(VAR_3->r13, &VAR_8[12]);
 VAR_9 |= FUNC_0(VAR_3->r14, &VAR_8[13]);
 VAR_9 |= FUNC_0(VAR_3->r15, &VAR_8[14]);
 VAR_9 |= FUNC_0(VAR_4->r16, &VAR_8[15]);
 VAR_9 |= FUNC_0(VAR_4->r17, &VAR_8[16]);
 VAR_9 |= FUNC_0(VAR_4->r18, &VAR_8[17]);
 VAR_9 |= FUNC_0(VAR_4->r19, &VAR_8[18]);
 VAR_9 |= FUNC_0(VAR_4->r20, &VAR_8[19]);
 VAR_9 |= FUNC_0(VAR_4->r21, &VAR_8[20]);
 VAR_9 |= FUNC_0(VAR_4->r22, &VAR_8[21]);
 VAR_9 |= FUNC_0(VAR_4->r23, &VAR_8[22]);

 VAR_9 |= FUNC_0(VAR_4->fp, &VAR_8[24]);

 VAR_9 |= FUNC_0(VAR_4->gp, &VAR_8[25]);


 VAR_9 |= FUNC_0(VAR_7, &VAR_8[26]);

 VAR_9 |= FUNC_0(VAR_3->ea, &VAR_8[27]);

 VAR_9 |= FUNC_0(VAR_3->ra, &VAR_8[23]);
 VAR_9 |= FUNC_0(VAR_3->sp, &VAR_8[28]);

 VAR_3->orig_r2 = -1;

 VAR_9 |= FUNC_1(&VAR_5->uc_stack);
 if (VAR_9)
  goto badframe;

 *VAR_6 = VAR_3->r2;
 return VAR_9;

badframe:
 return 1;
}
