
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msqid_ds {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,struct msqid_ds*) ;
 int FUNC_6 (struct msqid_ds*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (scalar_t__,int*,int ) ;

void
FUNC_8(int VAR_3)
{
 struct msqid_ds VAR_4;
 int VAR_5;




 if (FUNC_7(VAR_1, &VAR_5, 0) != VAR_1)
  FUNC_2(1, "waitpid");

 if (FUNC_1(VAR_5) == 0)
  FUNC_3(1, "receiver exited abnormally");

 if (FUNC_0(VAR_5) != 0)
  FUNC_3(1, "receiver exited with status %d",
      FUNC_0(VAR_5));







 if (FUNC_5(VAR_2, VAR_0, &VAR_4) == -1)
  FUNC_2(1, "msgctl IPC_STAT");

 FUNC_6(&VAR_4, 0600);

 FUNC_4(0);
}
