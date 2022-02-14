
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_4__ {int noOfHosts; TYPE_1__* hosts; } ;
struct TYPE_3__ {int notifyReqd; int hostname; } ;
typedef TYPE_1__ HostInfo ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*,int ) ;

void FUNC_7(void)
{
  int VAR_5;
  int VAR_6;
  int VAR_7 = VAR_0;
  HostInfo *VAR_8;
  pid_t VAR_9;


  for (VAR_5 = VAR_4->noOfHosts, VAR_8 = VAR_4->hosts; VAR_5 ; VAR_5--, VAR_8++)
  {
    if (VAR_8->notifyReqd)
    {
      VAR_7 = VAR_2;
      break;
    }
  }

  if (!VAR_7) return;

  VAR_9 = FUNC_1();
  if (VAR_9 == -1)
  {
    FUNC_6(VAR_1, "Unable to fork notify process - %s", FUNC_4(VAR_3));
    return;
  }
  if (VAR_9) return;
  for (VAR_6 = 0; VAR_6 < 44; VAR_6++)
  {
    VAR_7 = VAR_0;
    for (VAR_5 = VAR_4->noOfHosts, VAR_8 = VAR_4->hosts; VAR_5 ; VAR_5--, VAR_8++)
    {
      if (VAR_8->notifyReqd)
      {
        if (FUNC_2(VAR_8->hostname, VAR_6 == 0))
 {
   VAR_8->notifyReqd = VAR_0;
          FUNC_5();
 }
 else VAR_7 = VAR_2;
      }
    }
    if (!VAR_7) break;
    if (VAR_6 < 10) FUNC_3(5);
    else if (VAR_6 < 20) FUNC_3(60);
    else FUNC_3(60*60);
  }
  FUNC_0(0);
}
