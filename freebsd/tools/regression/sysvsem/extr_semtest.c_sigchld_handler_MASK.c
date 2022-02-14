
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union semun {struct semid_ds* buf; } ;
struct semid_ds {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct semid_ds*,int) ;
 int FUNC_6 (int ,int ,int ,union semun) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int*) ;

void
FUNC_8(int VAR_4)
{
 union semun VAR_5;
 struct semid_ds VAR_6;
 int VAR_7;





 if (FUNC_7(&VAR_7) == -1)
  FUNC_2(1, "wait");

 if (FUNC_1(VAR_7) == 0)
  FUNC_3(1, "receiver exited abnormally");

 if (FUNC_0(VAR_7) != 0)
  FUNC_3(1, "receiver exited with status %d",
      FUNC_0(VAR_7));







 VAR_5.buf = &VAR_6;
 if (FUNC_6(VAR_2, 0, VAR_0, VAR_5) == -1)
  FUNC_2(1, "semctl IPC_STAT");

 FUNC_5(&VAR_6, 0600);

 if (--VAR_1 != 0) {
  VAR_3 = 1;
  return;
 }

 FUNC_4(0);
}
