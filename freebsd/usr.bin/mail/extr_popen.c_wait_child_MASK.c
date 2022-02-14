
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child {int status; int done; } ;
typedef int sigset_t ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct child*) ;
 struct child* FUNC_3 (int,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int *) ;
 int VAR_3 ;
 int FUNC_7 (int,int *,int ) ;

int
FUNC_8(pid_t VAR_4)
{
 struct child *VAR_5;
 sigset_t VAR_6, VAR_7;
 pid_t VAR_8 = 0;

 (void)FUNC_5(&VAR_6);
 (void)FUNC_4(&VAR_6, VAR_0);
 (void)FUNC_6(VAR_1, &VAR_6, &VAR_7);





 VAR_5 = FUNC_3(VAR_4, 1);
 if (VAR_5 == ((void*)0) || !VAR_5->done)
  VAR_8 = FUNC_7(VAR_4, &VAR_3, 0);
 else
  VAR_3 = VAR_5->status;
 if (VAR_5 != ((void*)0))
  FUNC_2(VAR_5);
 (void)FUNC_6(VAR_2, &VAR_7, ((void*)0));
 if (VAR_8 == -1 || (FUNC_1(VAR_3) && FUNC_0(VAR_3)))
  return -1;
 else
  return 0;
}
