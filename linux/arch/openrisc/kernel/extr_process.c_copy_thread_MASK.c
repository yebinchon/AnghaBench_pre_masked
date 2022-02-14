
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int flags; } ;
struct pt_regs {unsigned long* gpr; unsigned long sp; } ;
struct TYPE_2__ {unsigned long ksp; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 struct pt_regs* FUNC_0 () ;
 int FUNC_1 (struct pt_regs*,int ,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct task_struct*) ;
 TYPE_1__* FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (int) ;

int
FUNC_5(unsigned long VAR_5, unsigned long VAR_6,
     unsigned long VAR_7, struct task_struct *VAR_8)
{
 struct pt_regs *VAR_9;
 struct pt_regs *VAR_10;
 unsigned long VAR_11 = (unsigned long)FUNC_2(VAR_8) + VAR_3;
 unsigned long VAR_12;

 VAR_12 = VAR_11;


 VAR_11 -= VAR_2;
 VAR_11 -= sizeof(struct pt_regs);
 VAR_9 = (struct pt_regs *) VAR_11;


 VAR_11 -= VAR_2;
 VAR_11 -= sizeof(struct pt_regs);
 VAR_10 = (struct pt_regs *)VAR_11;

 if (FUNC_4(VAR_8->flags & VAR_1)) {
  FUNC_1(VAR_10, 0, sizeof(struct pt_regs));
  VAR_10->gpr[20] = VAR_6;
  VAR_10->gpr[22] = VAR_7;
 } else {
  *VAR_9 = *FUNC_0();

  if (VAR_6)
   VAR_9->sp = VAR_6;
  if (VAR_5 & VAR_0)
   VAR_9->gpr[10] = VAR_9->gpr[7];

  VAR_9->gpr[11] = 0;

  VAR_10->gpr[20] = 0;
 }





 VAR_10->sp = VAR_12;
 VAR_10->gpr[9] = (unsigned long)VAR_4;

 FUNC_3(VAR_8)->ksp = (unsigned long)VAR_10;

 return 0;
}
