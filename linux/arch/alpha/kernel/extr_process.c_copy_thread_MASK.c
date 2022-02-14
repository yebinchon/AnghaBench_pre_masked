
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long ksp; int flags; int unique; scalar_t__ usp; } ;
struct thread_info {TYPE_1__ pcb; } ;
struct task_struct {int flags; } ;
struct switch_stack {unsigned long r26; unsigned long r9; unsigned long r10; } ;
struct pt_regs {int r20; scalar_t__ r19; scalar_t__ r0; int hae; } ;
struct TYPE_4__ {int hae_cache; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 struct pt_regs* FUNC_0 () ;
 int FUNC_1 (struct switch_stack*,int ,int) ;
 scalar_t__ FUNC_2 () ;
 struct pt_regs* FUNC_3 (struct task_struct*) ;
 struct thread_info* FUNC_4 (struct task_struct*) ;
 scalar_t__ FUNC_5 (int) ;

int
FUNC_6(unsigned long VAR_3, unsigned long VAR_4,
     unsigned long VAR_5,
     struct task_struct *VAR_6)
{
 extern void FUNC_7(void);
 extern void FUNC_8(void);

 struct thread_info *VAR_7 = FUNC_4(VAR_6);
 struct pt_regs *VAR_8 = FUNC_3(VAR_6);
 struct pt_regs *VAR_9 = FUNC_0();
 struct switch_stack *VAR_10, *VAR_11;

 VAR_10 = ((struct switch_stack *) VAR_8) - 1;
 VAR_7->pcb.ksp = (unsigned long) VAR_10;
 VAR_7->pcb.flags = 1;

 if (FUNC_5(VAR_6->flags & VAR_1)) {

  FUNC_1(VAR_10, 0,
   sizeof(struct switch_stack) + sizeof(struct pt_regs));
  VAR_10->r26 = (unsigned long) FUNC_8;
  VAR_10->r9 = VAR_4;
  VAR_10->r10 = VAR_5;
  VAR_8->hae = VAR_2.hae_cache,
  VAR_7->pcb.usp = 0;
  return 0;
 }





 if (VAR_3 & VAR_0)
  VAR_7->pcb.unique = VAR_9->r20;
 else
  VAR_9->r20 = 0;
 VAR_7->pcb.usp = VAR_4 ?: FUNC_2();
 *VAR_8 = *VAR_9;
 VAR_8->r0 = 0;
 VAR_8->r19 = 0;
 VAR_8->r20 = 1;
 VAR_11 = ((struct switch_stack *) VAR_9) - 1;
 *VAR_10 = *VAR_11;
 VAR_10->r26 = (unsigned long) FUNC_7;
 return 0;
}
