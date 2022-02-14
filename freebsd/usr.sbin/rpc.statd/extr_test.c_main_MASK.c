
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sm_stat_res {int dummy; } ;
struct TYPE_3__ {char* my_name; int my_proc; int my_vers; int my_prog; } ;
struct TYPE_4__ {char* mon_name; TYPE_1__ my_id; } ;
struct mon {TYPE_2__ mon_id; } ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 struct sm_stat_res* FUNC_4 (struct mon*,int *) ;
 void* FUNC_5 (char*,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (char*,char*) ;

int FUNC_7(int VAR_3, char **VAR_4)
{
  CLIENT *VAR_5;
  char VAR_6;
  void *VAR_7;
  struct mon VAR_8;

  if (VAR_3 < 2)
  {
    FUNC_2(VAR_2, "usage: test <hostname> | crash\n");
    FUNC_2(VAR_2, "always talks to statd at localhost\n");
    FUNC_1(1);
  }

  FUNC_3("Creating client for localhost\n" );
  VAR_5 = FUNC_0("localhost", VAR_0, VAR_1, "udp");
  if (!VAR_5)
  {
    FUNC_3("Failed to create client\n");
    FUNC_1(1);
  }

  VAR_8.mon_id.mon_name = VAR_4[1];
  VAR_8.mon_id.my_id.my_name = VAR_4[1];
  VAR_8.mon_id.my_id.my_prog = VAR_0;
  VAR_8.mon_id.my_id.my_vers = VAR_1;
  VAR_8.mon_id.my_id.my_proc = 1;

  if (FUNC_6(VAR_4[1], "crash"))
  {

    struct sm_stat_res *VAR_9;

    VAR_9 = FUNC_4(&VAR_8, VAR_5);
    if (VAR_9)
      FUNC_3("Success!\n");
    else
      FUNC_3("Fail\n");
  }
  else
  {
    VAR_7 = FUNC_5(&VAR_6, VAR_5);
    if (VAR_7)
      FUNC_3("Success!\n");
    else
      FUNC_3("Fail\n");
  }

  return 0;
}
