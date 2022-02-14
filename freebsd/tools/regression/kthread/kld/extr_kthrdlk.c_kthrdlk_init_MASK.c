
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct proc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct thread*,struct proc**,struct thread**,int ,int ,char*,char*) ;
 int FUNC_1 (int *,char*,int *,int ) ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct proc *VAR_7;
 struct thread *VAR_8;
 int VAR_9;

 VAR_1 = 0;
 VAR_3 = 3;
 FUNC_1(&VAR_2, "kthrdlk_lock", ((void*)0), VAR_0);
 VAR_7 = ((void*)0);
 VAR_9 = FUNC_0(VAR_4, ((void*)0), &VAR_7, &VAR_8,
     0, 0, "kthrdlk", "thr_getsuspended");
 if (VAR_9 != 0)
  FUNC_2("cannot start thr_getsuspended error: %d\n", VAR_9);

 VAR_9 = FUNC_0(VAR_5, VAR_8, &VAR_7, ((void*)0), 0, 0,
     "kthrdlk", "thr_resumer");
 if (VAR_9 != 0)
  FUNC_2("cannot start thr_resumer error: %d\n", VAR_9);

 VAR_9 = FUNC_0(VAR_6, VAR_8, &VAR_7, ((void*)0), 0, 0,
     "kthrdlk", "thr_suspender");
 if (VAR_9 != 0)
  FUNC_2("cannot start thr_suspender error: %d\n", VAR_9);
}
