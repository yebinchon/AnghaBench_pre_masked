
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct svc_req {int rq_xprt; } ;
struct sockaddr {int dummy; } ;
struct sm_stat_res {int state; void* res_stat; } ;
struct addrinfo {int dummy; } ;
typedef struct sm_stat_res sm_stat_res ;
struct TYPE_5__ {int mon_name; } ;
typedef TYPE_1__ sm_name ;
struct TYPE_7__ {int ourState; } ;
struct TYPE_6__ {scalar_t__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (struct sockaddr*) ;
 scalar_t__ FUNC_2 (int ,int *,int *,struct addrinfo**) ;
 int FUNC_3 (struct svc_req*,int ) ;
 void* VAR_3 ;
 void* VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ,...) ;

struct sm_stat_res *FUNC_6(sm_name *VAR_6, struct svc_req *VAR_7)
{
  static sm_stat_res VAR_8;
  struct addrinfo *VAR_9;
  struct sockaddr *VAR_10;
  static int VAR_11;

  VAR_11 = 1;
  if ((VAR_11 = FUNC_3(VAR_7, VAR_6->mon_name)) == 0)
  {
    VAR_8.res_stat = VAR_3;
  }
  if (VAR_11 != 0)
  {
    if (VAR_2)
     FUNC_5(VAR_0, "stat called for host %s", VAR_6->mon_name);
    if (FUNC_2(VAR_6->mon_name, ((void*)0), ((void*)0), &VAR_9) == 0) {
     VAR_8.res_stat = VAR_4;
     FUNC_0(VAR_9);
    }
    else
    {
      VAR_10 = (struct sockaddr *) (FUNC_4(VAR_7->rq_xprt)->buf) ;
      FUNC_5(VAR_1, "invalid hostname to sm_stat from %s: %s",
   FUNC_1(VAR_10), VAR_6->mon_name);
      VAR_8.res_stat = VAR_3;
    }
  }
  VAR_8.state = VAR_5->ourState;
  return (&VAR_8);
}
