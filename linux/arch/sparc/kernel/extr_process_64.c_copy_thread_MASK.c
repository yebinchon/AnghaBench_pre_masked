
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int new_child; int flags; struct pt_regs* kregs; int * utraps; int current_ds; scalar_t__* fpsaved; scalar_t__ ksp; } ;
struct task_struct {int flags; } ;
struct sparc_stackf {int dummy; } ;
struct pt_regs {int tstate; unsigned long* u_regs; } ;
struct TYPE_2__ {unsigned long pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 size_t VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int* FUNC_0 (struct thread_info*) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 TYPE_1__* VAR_19 ;
 struct pt_regs* FUNC_2 () ;
 int FUNC_3 (char*,struct sparc_stackf*,unsigned long) ;
 int FUNC_4 (char*,int ,unsigned long) ;
 char* FUNC_5 (struct task_struct*) ;
 struct thread_info* FUNC_6 (struct task_struct*) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(unsigned long VAR_20, unsigned long VAR_21,
  unsigned long VAR_22, struct task_struct *VAR_23)
{
 struct thread_info *VAR_24 = FUNC_6(VAR_23);
 struct pt_regs *VAR_25 = FUNC_2();
 struct sparc_stackf *VAR_26;
 unsigned long VAR_27;
 char *VAR_28;


 VAR_27 = (VAR_5 + VAR_9);
 VAR_28 = (FUNC_5(VAR_23) +
       (VAR_7 - VAR_27));

 VAR_24->new_child = 1;
 VAR_24->ksp = ((unsigned long) VAR_28) - VAR_6;
 VAR_24->kregs = (struct pt_regs *) (VAR_28 +
           sizeof(struct sparc_stackf));
 VAR_24->fpsaved[0] = 0;

 if (FUNC_7(VAR_23->flags & VAR_4)) {
  FUNC_4(VAR_28, 0, VAR_27);
  FUNC_0(VAR_24)[VAR_8] =
   (FUNC_2()->tstate + 1) & VAR_10;
  VAR_24->current_ds = VAR_1;
  VAR_24->kregs->u_regs[VAR_12] = VAR_21;
  VAR_24->kregs->u_regs[VAR_13] = VAR_22;
  return 0;
 }

 VAR_26 = ((struct sparc_stackf *) VAR_25) - 1;
 FUNC_3(VAR_28, VAR_26, VAR_27);
 if (VAR_24->flags & VAR_18) {
  VAR_21 &= 0x00000000ffffffffUL;
  VAR_25->u_regs[VAR_11] &= 0x00000000ffffffffUL;
 }
 VAR_24->kregs->u_regs[VAR_11] = VAR_21;
 FUNC_0(VAR_24)[VAR_8] =
  (VAR_25->tstate + 1) & VAR_10;
 VAR_24->current_ds = VAR_0;
 if (VAR_21 != VAR_25->u_regs[VAR_11]) {
  unsigned long VAR_29;

  VAR_29 = FUNC_1(VAR_21, VAR_25->u_regs[VAR_11]);
  if (!VAR_29)
   return -VAR_3;
  VAR_24->kregs->u_regs[VAR_11] = VAR_29;
 }
 if (VAR_24->utraps)
  VAR_24->utraps[0]++;


 VAR_24->kregs->u_regs[VAR_15] = VAR_19->pid;
 VAR_24->kregs->u_regs[VAR_16] = 1;


 VAR_25->u_regs[VAR_16] = 0;

 if (VAR_20 & VAR_2)
  VAR_24->kregs->u_regs[VAR_14] = VAR_25->u_regs[VAR_17];

 return 0;
}
