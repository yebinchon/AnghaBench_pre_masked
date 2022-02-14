
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct pt_regs {int user_regs; } ;
struct TYPE_4__ {int sa_flags; } ;
struct TYPE_3__ {TYPE_2__ sa; } ;
struct ksignal {int sig; TYPE_1__ ka; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int FUNC_0 (int,struct ksignal*,int *,struct pt_regs*) ;
 int FUNC_1 (int,struct ksignal*,int *,struct pt_regs*) ;
 struct task_struct* VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct ksignal*,struct pt_regs*) ;
 int FUNC_4 (int,struct ksignal*,int *,struct pt_regs*) ;
 int * FUNC_5 () ;
 int FUNC_6 (int,struct ksignal*,int ) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 (int *,struct task_struct*) ;

__attribute__((used)) static void FUNC_9(struct ksignal *VAR_2, struct pt_regs *VAR_3)
{
 struct task_struct *VAR_4 = VAR_1;
 sigset_t *VAR_5 = FUNC_5();
 int VAR_6 = VAR_2->sig;
 int VAR_7;

 FUNC_3(VAR_2, VAR_3);




 if (FUNC_2()) {
  if (VAR_2->ka.sa.sa_flags & VAR_0)
   VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_5, VAR_3);
  else
   VAR_7 = FUNC_0(VAR_6, VAR_2, VAR_5, VAR_3);
 } else {
  VAR_7 = FUNC_4(VAR_6, VAR_2, VAR_5, VAR_3);
 }




 VAR_7 |= !FUNC_8(&VAR_3->user_regs, VAR_1);





 if (!VAR_7)
  FUNC_7(VAR_4);

 FUNC_6(VAR_7, VAR_2, 0);
}
