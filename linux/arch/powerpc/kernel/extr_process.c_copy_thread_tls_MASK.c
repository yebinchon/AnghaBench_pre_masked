
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread_info {int flags; } ;
struct TYPE_5__ {unsigned long ksp; unsigned long ksp_limit; scalar_t__ tidr; int dscr; int dscr_inherit; int * vr_save_area; int * fp_save_area; int ** ptrace_bps; struct pt_regs* regs; } ;
struct task_struct {int flags; TYPE_2__ thread; } ;
struct pt_regs {unsigned long* gpr; int msr; void* nip; int ppr; int softe; } ;
struct TYPE_4__ {int dscr_inherit; } ;
struct TYPE_6__ {TYPE_1__ thread; } ;


 int FUNC_0 (struct pt_regs*) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned long VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct task_struct*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* VAR_14 ;
 struct pt_regs* FUNC_3 () ;
 scalar_t__ FUNC_4 (struct task_struct*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (struct pt_regs*,int ,int) ;
 int FUNC_8 (int ) ;
 void* FUNC_9 (void (*) ()) ;
 int FUNC_10 (struct task_struct*,unsigned long) ;
 scalar_t__ FUNC_11 (struct task_struct*) ;
 struct thread_info* FUNC_12 (struct task_struct*) ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(unsigned long VAR_15, unsigned long VAR_16,
  unsigned long VAR_17, struct task_struct *VAR_18,
  unsigned long VAR_19)
{
 struct pt_regs *VAR_20, *VAR_21;
 extern void FUNC_15(void);
 extern void FUNC_16(void);
 void (*VAR_22)(void);
 unsigned long VAR_23 = (unsigned long)FUNC_11(VAR_18) + VAR_11;
 struct thread_info *VAR_24 = FUNC_12(VAR_18);

 FUNC_6(VAR_18);


 VAR_23 -= sizeof(struct pt_regs);
 VAR_20 = (struct pt_regs *) VAR_23;
 if (FUNC_13(VAR_18->flags & VAR_8)) {

  FUNC_7(VAR_20, 0, sizeof(struct pt_regs));
  VAR_20->gpr[1] = VAR_23 + sizeof(struct pt_regs);

  if (VAR_16)
   VAR_20->gpr[14] = FUNC_9((void *)VAR_16);




  VAR_20->gpr[15] = VAR_17;
  VAR_18->thread.regs = ((void*)0);
  VAR_24->flags |= VAR_13;
  VAR_22 = FUNC_16;
 } else {

  struct pt_regs *VAR_25 = FUNC_3();
  FUNC_0(VAR_25);
  *VAR_20 = *VAR_25;
  if (VAR_16)
   VAR_20->gpr[1] = VAR_16;
  VAR_18->thread.regs = VAR_20;
  VAR_20->gpr[3] = 0;
  if (VAR_15 & VAR_0) {





    VAR_20->gpr[2] = VAR_19;
  }

  VAR_22 = FUNC_15;
 }
 VAR_20->msr &= ~(VAR_5|VAR_6|VAR_7);
 VAR_23 -= VAR_10;
 ((unsigned long *)VAR_23)[0] = 0;
 VAR_23 -= sizeof(struct pt_regs);
 VAR_21 = (struct pt_regs *) VAR_23;
 VAR_23 -= VAR_10;
 VAR_18->thread.ksp = VAR_23;







 VAR_18->thread.fp_save_area = ((void*)0);




 FUNC_10(VAR_18, VAR_23);
 VAR_21->nip = FUNC_9(VAR_22);
 return 0;
}
