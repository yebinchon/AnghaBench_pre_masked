
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct test_mymsg {int mtext; int mtype; } ;
struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;
struct TYPE_2__ {int mode; } ;
struct msqid_ds {TYPE_1__ msg_perm; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct msqid_ds*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 () ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int,int ,struct msqid_ds*) ;
 int FUNC_8 (int ,int) ;
 int VAR_13 ;
 scalar_t__ FUNC_9 (int,struct test_mymsg*,int,int ,int ) ;
 int FUNC_10 (int,struct test_mymsg*,scalar_t__,int ) ;
 int FUNC_11 (struct msqid_ds*,int) ;
 int FUNC_12 () ;
 int VAR_14 ;
 int FUNC_13 (int ,struct sigaction*,int *) ;
 int VAR_15 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int VAR_16 ;
 int FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 () ;

int
FUNC_19(int VAR_17, char *VAR_18[])
{
 struct sigaction VAR_19;
 struct msqid_ds VAR_20;
 struct test_mymsg VAR_21;
 sigset_t VAR_22;

 if (VAR_17 != 2)
  FUNC_18();





 VAR_19.sa_handler = VAR_16;
 FUNC_14(&VAR_19.sa_mask);
 VAR_19.sa_flags = 0;
 if (FUNC_13(VAR_8, &VAR_19, ((void*)0)) == -1)
  FUNC_2(1, "sigaction SIGSYS");





 VAR_19.sa_handler = VAR_15;
 FUNC_14(&VAR_19.sa_mask);
 VAR_19.sa_flags = 0;
 if (FUNC_13(VAR_7, &VAR_19, ((void*)0)) == -1)
  FUNC_2(1, "sigaction SIGCHLD");

 VAR_13 = FUNC_5(VAR_18[1], 4160);





 VAR_9 = FUNC_6();





 if (FUNC_0(VAR_10) == -1)
  FUNC_2(1, "atexit");

 if ((VAR_14 = FUNC_8(VAR_13, VAR_0 | 0640)) == -1)
  FUNC_2(1, "msgget");

 if (FUNC_7(VAR_14, VAR_2, &VAR_20) == -1)
  FUNC_2(1, "msgctl IPC_STAT");

 FUNC_11(&VAR_20, 0640);

 VAR_20.msg_perm.mode = (VAR_20.msg_perm.mode & ~0777) | 0600;

 if (FUNC_7(VAR_14, VAR_1, &VAR_20) == -1)
  FUNC_2(1, "msgctl IPC_SET");

 FUNC_1(&VAR_20, sizeof VAR_20);

 if (FUNC_7(VAR_14, VAR_2, &VAR_20) == -1)
  FUNC_2(1, "msgctl IPC_STAT");

 if ((VAR_20.msg_perm.mode & 0777) != 0600)
  FUNC_2(1, "IPC_SET of mode didn't hold");

 FUNC_11(&VAR_20, 0600);

 switch ((VAR_9 = FUNC_4())) {
 case -1:
  FUNC_2(1, "fork");


 case 0:
  FUNC_12();
  break;

 default:
  break;
 }




 VAR_21.mtype = VAR_3;
 FUNC_16(VAR_21.mtext, VAR_11);
 if (FUNC_10(VAR_14, &VAR_21, FUNC_17(VAR_11) + 1, 0) == -1)
  FUNC_2(1, "sender: msgsnd 1");

 if (FUNC_9(VAR_14, &VAR_21, sizeof(VAR_21.mtext), VAR_4, 0) !=
     FUNC_17(VAR_11) + 1)
  FUNC_2(1, "sender: msgrcv 1 ack");

 FUNC_11(&VAR_20, 0600);




 VAR_21.mtype = VAR_5;
 FUNC_16(VAR_21.mtext, VAR_12);
 if (FUNC_10(VAR_14, &VAR_21, FUNC_17(VAR_12) + 1, 0) == -1)
  FUNC_2(1, "sender: msgsnd 2");

 if (FUNC_9(VAR_14, &VAR_21, sizeof(VAR_21.mtext), VAR_6, 0) !=
     FUNC_17(VAR_12) + 1)
  FUNC_2(1, "sender: msgrcv 2 ack");




 FUNC_14(&VAR_22);
 (void) FUNC_15(&VAR_22);




 FUNC_3(1, "sender: received unexpected signal");
}
