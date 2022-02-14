
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long sp; unsigned long pc; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {unsigned long* regs; unsigned long pr; unsigned long gbr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pt_regs* FUNC_0 (struct task_struct*) ;

void FUNC_1(unsigned long *VAR_6, struct task_struct *VAR_7)
{
 struct pt_regs *VAR_8 = FUNC_0(VAR_7);
 int VAR_9;


 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  VAR_6[VAR_9] = 0;
 for (VAR_9 = VAR_5; VAR_9 < VAR_4; VAR_9++)
  VAR_6[VAR_9] = VAR_8->regs[VAR_9];

 VAR_6[VAR_4] = VAR_7->thread.sp;
 VAR_6[VAR_2] = VAR_7->thread.pc;




 VAR_6[VAR_3] = VAR_8->pr;
 VAR_6[VAR_1] = VAR_8->gbr;
}
