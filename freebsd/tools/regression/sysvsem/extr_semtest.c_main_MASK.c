
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union semun {int val; struct semid_ds* buf; } ;
struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;
struct TYPE_2__ {int mode; } ;
struct semid_ds {TYPE_1__ sem_perm; } ;
typedef int sigset_t ;
typedef int s_ds ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (struct semid_ds*,int ,int) ;
 int FUNC_7 (struct semid_ds*,int) ;
 int FUNC_8 (int,int ,int ,...) ;
 int FUNC_9 (int ,int,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (int ,struct sigaction*,int *) ;
 int VAR_15 ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_16 ;
 int FUNC_12 (int *) ;
 int VAR_17 ;
 int FUNC_13 () ;
 int FUNC_14 () ;

int
FUNC_15(int VAR_18, char *VAR_19[])
{
 struct sigaction VAR_20;
 union semun VAR_21;
 struct semid_ds VAR_22;
 sigset_t VAR_23;
 int VAR_24;

 if (VAR_18 != 2)
  FUNC_13();





 VAR_20.sa_handler = VAR_17;
 FUNC_11(&VAR_20.sa_mask);
 VAR_20.sa_flags = 0;
 if (FUNC_10(VAR_8, &VAR_20, ((void*)0)) == -1)
  FUNC_1(1, "sigaction SIGSYS");





 VAR_20.sa_handler = VAR_15;
 FUNC_11(&VAR_20.sa_mask);
 VAR_20.sa_flags = 0;
 if (FUNC_10(VAR_7, &VAR_20, ((void*)0)) == -1)
  FUNC_1(1, "sigaction SIGCHLD");

 VAR_13 = FUNC_4(VAR_19[1], 4160);





 VAR_10 = FUNC_5();





 if (FUNC_0(VAR_11) == -1)
  FUNC_1(1, "atexit");

 if ((VAR_14 = FUNC_9(VAR_13, 1, VAR_2 | 0640)) == -1)
  FUNC_1(1, "semget");


 VAR_21.buf = &VAR_22;
 if (FUNC_8(VAR_14, 0, VAR_5, VAR_21) == -1)
  FUNC_1(1, "semctl IPC_STAT");

 FUNC_7(&VAR_22, 0640);

 VAR_22.sem_perm.mode = (VAR_22.sem_perm.mode & ~0777) | 0600;

 VAR_21.buf = &VAR_22;
 if (FUNC_8(VAR_14, 0, VAR_4, VAR_21) == -1)
  FUNC_1(1, "semctl IPC_SET");

 FUNC_6(&VAR_22, 0, sizeof(VAR_22));

 VAR_21.buf = &VAR_22;
 if (FUNC_8(VAR_14, 0, VAR_5, VAR_21) == -1)
  FUNC_1(1, "semctl IPC_STAT");

 if ((VAR_22.sem_perm.mode & 0777) != 0600)
  FUNC_1(1, "IPC_SET of mode didn't hold");

 FUNC_7(&VAR_22, 0600);

 VAR_12 = 0;
 if (FUNC_9(VAR_13, 1, VAR_2 | VAR_3 | 0600) != -1 ||
     VAR_12 != VAR_0)
  FUNC_1(1, "semget IPC_EXCL 1 did not fail with [EEXIST]");
 VAR_12 = 0;
 if (FUNC_9(VAR_13, 2, VAR_2 | VAR_3 | 0600) != -1 ||
     VAR_12 != VAR_0)
  FUNC_1(1, "semget IPC_EXCL 2 did not fail with [EEXIST]");

 for (VAR_9 = 0; VAR_9 < 5; VAR_9++) {
  switch ((VAR_10 = FUNC_3())) {
  case -1:
   FUNC_1(1, "fork");


  case 0:
   FUNC_14();
   break;

  default:
   break;
  }
 }





 for (;;) {
  VAR_24 = FUNC_8(VAR_14, 0, VAR_1);
  if (VAR_24 == -1)
   FUNC_1(1, "semctl GETNCNT");
  if (VAR_24 == 5)
   break;
 }





 VAR_21.val = 1;
 if (FUNC_8(VAR_14, 0, VAR_6, VAR_21) == -1)
  FUNC_1(1, "sender: semctl SETVAL to 1");




 FUNC_11(&VAR_23);
 for (;;) {
  (void) FUNC_12(&VAR_23);
  if (VAR_16)
   VAR_16 = 0;
  else
   break;
 }




 FUNC_2(1, "sender: received unexpected signal");
}
