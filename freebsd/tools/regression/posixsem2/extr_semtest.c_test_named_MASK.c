
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sem_t ;
typedef int pid_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int ,int ,int,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,int*,int ) ;

int
FUNC_14(void)
{
 sem_t *VAR_3, *VAR_4;
 pid_t VAR_5;
 int VAR_6;

 FUNC_6("testing named process-shared semaphore\n");
 FUNC_10(VAR_2);
 VAR_3 = FUNC_8(VAR_2, VAR_0, 0777, 0);
 if (VAR_3 == VAR_1)
  FUNC_2(1, "sem_open failed");
 VAR_4 = FUNC_8(VAR_2, VAR_0, 0777, 0);
 if (VAR_4 == VAR_1)
  FUNC_2(2, "second sem_open call failed");
 if (VAR_3 != VAR_4)
  FUNC_3(3,
"two sem_open calls for same semaphore do not return same address");
 if (FUNC_7(VAR_4))
  FUNC_2(4, "sem_close failed");
 if ((VAR_5 = FUNC_5()) == 0) {
  FUNC_6("child: sem_wait()\n");
  if (FUNC_11(VAR_3))
   FUNC_2(5, "sem_wait failed");
  FUNC_6("child: sem_wait() returned\n");
  FUNC_4(0);
 } else {
  FUNC_12(1);
  FUNC_6("parent: sem_post()\n");
  if (FUNC_9(VAR_3))
   FUNC_2(6, "sem_post failed");
  FUNC_13(VAR_5, &VAR_6, 0);
  if (FUNC_1(VAR_6) && FUNC_0(VAR_6) == 0)
   FUNC_6("OK.\n");
  else
   FUNC_6("Failure.");
 }

 if (FUNC_7(VAR_3))
  FUNC_2(7, "sem_close failed");

 return (0);
}
