
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; } ;
typedef int sigset_t ;
typedef int reapchildren ;
typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int,char*) ;
 int FUNC_2 (struct sigaction*,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *,int ,int*) ;
 int FUNC_5 (int ,struct sigaction*,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int FUNC_8 (int ,int *,int *) ;
 int VAR_4 ;

int
FUNC_9(void)
{
 pthread_t VAR_5[VAR_0];
 struct sigaction VAR_6;
 sigset_t VAR_7;
 int VAR_8, VAR_9;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.sa_handler = VAR_3;
 if (FUNC_5(VAR_1, &VAR_6, ((void*)0)) == -1)
  FUNC_0(1, "Could not sigaction(SIGCHLD)");

 FUNC_7(&VAR_7);
 FUNC_6(&VAR_7, VAR_1);
 if (FUNC_8(VAR_2, &VAR_7, ((void*)0)) == -1)
  FUNC_0(1, "sigprocmask");

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_8 = FUNC_4(&VAR_5[VAR_9], ((void*)0), VAR_4, &VAR_9);
  if (VAR_8)
   FUNC_1(1, VAR_8, "pthread_create");
 }
 FUNC_3();
 return (0);
}
