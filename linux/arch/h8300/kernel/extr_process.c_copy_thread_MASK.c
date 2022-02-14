
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long ksp; int usp; } ;
struct task_struct {int flags; TYPE_1__ thread; } ;
struct pt_regs {unsigned long retpc; unsigned long er4; unsigned long er5; scalar_t__ er0; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pt_regs* FUNC_0 () ;
 int FUNC_1 (struct pt_regs*,int ,int) ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(unsigned long VAR_4,
  unsigned long VAR_5, unsigned long VAR_6,
  struct task_struct *VAR_7)
{
 struct pt_regs *VAR_8;

 VAR_8 = (struct pt_regs *) (VAR_1 + FUNC_3(VAR_7)) - 1;

 if (FUNC_4(VAR_7->flags & VAR_0)) {
  FUNC_1(VAR_8, 0, sizeof(struct pt_regs));
  VAR_8->retpc = (unsigned long) VAR_3;
  VAR_8->er4 = VAR_6;
  VAR_8->er5 = VAR_5;
 } else {
  *VAR_8 = *FUNC_0();
  VAR_8->er0 = 0;
  VAR_8->retpc = (unsigned long) VAR_2;
  VAR_7->thread.usp = VAR_5 ?: FUNC_2();
 }
 VAR_7->thread.ksp = (unsigned long)VAR_8;

 return 0;
}
