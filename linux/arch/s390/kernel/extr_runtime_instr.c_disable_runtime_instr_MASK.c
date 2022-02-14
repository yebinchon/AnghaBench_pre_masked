
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ri_cb; } ;
struct task_struct {TYPE_1__ thread; } ;
struct TYPE_4__ {int mask; } ;
struct pt_regs {TYPE_2__ psw; } ;


 int VAR_0 ;
 struct task_struct* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 struct pt_regs* FUNC_4 (struct task_struct*) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct task_struct *VAR_3 = VAR_1;
 struct pt_regs *VAR_4;

 if (!VAR_3->thread.ri_cb)
  return;
 VAR_4 = FUNC_4(VAR_3);
 FUNC_2();
 FUNC_1(&VAR_2);
 FUNC_0(VAR_3->thread.ri_cb);
 VAR_3->thread.ri_cb = ((void*)0);
 FUNC_3();






 VAR_4->psw.mask &= ~VAR_0;
}
