
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct sm_stat_res {void* res_stat; int state; } ;
struct addrinfo {int dummy; } ;
typedef struct sm_stat_res sm_stat_res ;
struct TYPE_9__ {int my_proc; int my_vers; int my_prog; int my_name; } ;
struct TYPE_10__ {TYPE_1__ my_id; int mon_name; } ;
struct TYPE_11__ {int priv; TYPE_2__ mon_id; } ;
typedef TYPE_3__ mon ;
struct TYPE_14__ {int ourState; } ;
struct TYPE_13__ {TYPE_4__* monList; } ;
struct TYPE_12__ {struct TYPE_12__* next; int notifyData; int notifyProc; int notifyVers; int notifyProg; int notifyHost; } ;
typedef TYPE_4__ MonList ;
typedef TYPE_5__ HostInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_5__* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct addrinfo*) ;
 scalar_t__ FUNC_2 (int ,int *,int *,struct addrinfo**) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct svc_req*,int ) ;
 void* VAR_5 ;
 void* VAR_6 ;
 TYPE_6__* VAR_7 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,...) ;

struct sm_stat_res *FUNC_9(mon *VAR_8, struct svc_req *VAR_9)
{
  static sm_stat_res VAR_10;
  HostInfo *VAR_11;
  static int VAR_12;
  MonList *VAR_13;
  struct addrinfo *VAR_14;

  if ((VAR_12 = FUNC_5(VAR_9, VAR_8->mon_id.mon_name)) == 0)
  {
    VAR_10.res_stat = VAR_5;
  }

  if (VAR_12 != 0)
  {
    if (VAR_4)
    {
      FUNC_8(VAR_0, "monitor request for host %s", VAR_8->mon_id.mon_name);
      FUNC_8(VAR_0, "recall host: %s prog: %d ver: %d proc: %d",
      VAR_8->mon_id.my_id.my_name,
      VAR_8->mon_id.my_id.my_prog,
      VAR_8->mon_id.my_id.my_vers,
      VAR_8->mon_id.my_id.my_proc);
    }
    VAR_10.res_stat = VAR_5;
    VAR_10.state = VAR_7->ourState;



    if (FUNC_2(VAR_8->mon_id.mon_name, ((void*)0), ((void*)0), &VAR_14) != 0)
    {
      FUNC_8(VAR_1, "Invalid hostname to sm_mon: %s", VAR_8->mon_id.mon_name);
      return (&VAR_10);
    }
    FUNC_1(VAR_14);
    if ((VAR_11 = FUNC_0(VAR_8->mon_id.mon_name, VAR_3)))
    {
      VAR_13 = (MonList *)FUNC_3(sizeof(MonList));
      if (!VAR_13)
      {
        FUNC_8(VAR_1, "Out of memory");
      }
      else
      {
        FUNC_6(VAR_13->notifyHost, VAR_8->mon_id.my_id.my_name, VAR_2);
        VAR_13->notifyProg = VAR_8->mon_id.my_id.my_prog;
        VAR_13->notifyVers = VAR_8->mon_id.my_id.my_vers;
        VAR_13->notifyProc = VAR_8->mon_id.my_id.my_proc;
        FUNC_4(VAR_13->notifyData, VAR_8->priv, sizeof(VAR_13->notifyData));

        VAR_13->next = VAR_11->monList;
        VAR_11->monList = VAR_13;
        FUNC_7();

        VAR_10.res_stat = VAR_6;
      }
    }
  }
  return (&VAR_10);
}
