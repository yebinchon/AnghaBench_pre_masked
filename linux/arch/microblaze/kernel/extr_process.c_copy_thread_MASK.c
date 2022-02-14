
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long r1; unsigned long r20; unsigned long r19; int pt_mode; int msr; unsigned long r15; int r10; int r21; } ;
struct thread_info {struct pt_regs cpu_context; } ;
struct task_struct {int flags; } ;
struct cpu_context {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct pt_regs* FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pt_regs*,int ,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct pt_regs* FUNC_3 (struct task_struct*) ;
 struct thread_info* FUNC_4 (struct task_struct*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(unsigned long VAR_10, unsigned long VAR_11,
  unsigned long VAR_12, struct task_struct *VAR_13)
{
 struct pt_regs *VAR_14 = FUNC_3(VAR_13);
 struct thread_info *VAR_15 = FUNC_4(VAR_13);

 if (FUNC_5(VAR_13->flags & VAR_7)) {


  FUNC_2(VAR_14, 0, sizeof(struct pt_regs));
  FUNC_2(&VAR_15->cpu_context, 0, sizeof(struct cpu_context));
  VAR_15->cpu_context.r1 = (unsigned long)VAR_14;
  VAR_15->cpu_context.r20 = (unsigned long)VAR_11;
  VAR_15->cpu_context.r19 = (unsigned long)VAR_12;
  VAR_14->pt_mode = 1;
  FUNC_1(VAR_14->msr);



  VAR_15->cpu_context.r15 = (unsigned long)VAR_9 - 8;
  return 0;
 }
 *VAR_14 = *FUNC_0();
 if (VAR_11)
  VAR_14->r1 = VAR_11;

 FUNC_2(&VAR_15->cpu_context, 0, sizeof(struct cpu_context));
 VAR_15->cpu_context.r1 = (unsigned long)VAR_14;

 VAR_15->cpu_context.msr = (unsigned long)VAR_14->msr;
 VAR_15->cpu_context.r15 = (unsigned long)VAR_8 - 8;





 if (VAR_10 & VAR_0)
  VAR_14->r21 = VAR_14->r10;

 return 0;
}
