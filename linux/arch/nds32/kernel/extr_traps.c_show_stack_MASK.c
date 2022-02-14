
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fp; scalar_t__ sp; } ;
struct TYPE_4__ {TYPE_1__ cpu_context; } ;
struct task_struct {TYPE_2__ thread; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*,unsigned long*) ;
 int FUNC_2 () ;
 struct task_struct* VAR_1 ;

void FUNC_3(struct task_struct *VAR_2, unsigned long *VAR_3)
{
 unsigned long *VAR_4;

 if (!VAR_2)
  VAR_2 = VAR_1;
 if (!FUNC_0(VAR_0)) {
  if (VAR_2 != VAR_1)
   VAR_4 = (unsigned long *)(VAR_2->thread.cpu_context.sp);
  else
   __asm__ __volatile__("\tori\t%0, $sp, #0\n":"=r"(VAR_4));
 } else {
  if (VAR_2 != VAR_1)
   VAR_4 = (unsigned long *)(VAR_2->thread.cpu_context.fp);
  else
   __asm__ __volatile__("\tori\t%0, $fp, #0\n":"=r"(VAR_4));
 }
 FUNC_1(VAR_2, VAR_4);
 FUNC_2();
}
