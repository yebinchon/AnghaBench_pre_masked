
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_req {int rq_xprt; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {scalar_t__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct sockaddr*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,char*) ;

int FUNC_7(struct svc_req *VAR_2, char *VAR_3)
{
  int VAR_4, VAR_5, VAR_6;
  struct sockaddr *VAR_7;
  char *VAR_8;

  VAR_4 = FUNC_3(VAR_3);
  VAR_5 = (4 * VAR_4) + 1;
  VAR_8 = FUNC_2(VAR_5);
  VAR_7 = (struct sockaddr *) (FUNC_5(VAR_2->rq_xprt)->buf) ;
  VAR_6 = 1;

  if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
  {
    VAR_6 = 0;
  }
  else if (FUNC_4(VAR_8, VAR_3, VAR_1) != VAR_4)
  {
    FUNC_6(VAR_0,
 "sm_stat: client %s hostname %s contained invalid characters.",
 FUNC_1(VAR_7),
 VAR_8);
    VAR_6 = 0;
  }
  FUNC_0(VAR_8);
  return (VAR_6);
}
