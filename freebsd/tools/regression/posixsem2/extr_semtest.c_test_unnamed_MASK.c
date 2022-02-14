
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sem_t ;
typedef int pid_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int,int,int,int,int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int *,int,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int*,int ) ;

int
FUNC_12(void)
{
 sem_t *VAR_5;
 pid_t VAR_6;
 int VAR_7;

 FUNC_6("testing unnamed process-shared semaphore\n");
 VAR_5 = (sem_t *)FUNC_5(((void*)0), sizeof(sem_t), VAR_3|VAR_4, VAR_0|VAR_2,
  -1, 0);
 if (VAR_5 == VAR_1)
  FUNC_2(1, "mmap failed");
 if (FUNC_7(VAR_5, 1, 0))
  FUNC_2(2, "sem_init failed");
 if ((VAR_6 = FUNC_4()) == 0) {
  FUNC_6("child: sem_wait()\n");
  if (FUNC_9(VAR_5))
   FUNC_2(3, "sem_wait failed");
  FUNC_6("child: sem_wait() returned\n");
  FUNC_3(0);
 } else {
  FUNC_10(1);
  FUNC_6("parent: sem_post()\n");
  if (FUNC_8(VAR_5))
   FUNC_2(4, "sem_post failed");
  FUNC_11(VAR_6, &VAR_7, 0);
  if (FUNC_1(VAR_7) && FUNC_0(VAR_7) == 0)
   FUNC_6("OK.\n");
  else
   FUNC_6("Failure.");
 }
 return (0);
}
