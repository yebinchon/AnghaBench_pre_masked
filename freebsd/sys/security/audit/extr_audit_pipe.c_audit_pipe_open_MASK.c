
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct cdev {int dummy; } ;
struct audit_pipe {int ap_sigio; } ;
struct TYPE_2__ {int p_pid; } ;


 int VAR_0 ;
 struct audit_pipe* FUNC_0 () ;
 int FUNC_1 (struct audit_pipe*) ;
 int FUNC_2 (struct audit_pipe*,int (*) (struct audit_pipe*)) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct audit_pipe *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0();
 if (VAR_5 == ((void*)0))
  return (VAR_0);
 FUNC_3(VAR_4->td_proc->p_pid, &VAR_5->ap_sigio);
 VAR_6 = FUNC_2(VAR_5, FUNC_1);
 if (VAR_6 != 0)
  FUNC_1(VAR_5);
 return (VAR_6);
}
