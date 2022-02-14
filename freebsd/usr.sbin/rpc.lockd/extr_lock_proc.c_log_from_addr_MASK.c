
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_req {int rq_xprt; } ;
struct sockaddr {int sa_len; } ;
struct TYPE_2__ {struct sockaddr* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sockaddr*,int ,char*,int,int *,int ,int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char const*,char*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, struct svc_req *VAR_3)
{
 struct sockaddr *VAR_4;
 char VAR_5[VAR_1];

 VAR_4 = FUNC_1(VAR_3->rq_xprt)->buf;
 if (FUNC_0(VAR_4 , VAR_4->sa_len, VAR_5, sizeof VAR_5,
     ((void*)0), 0, 0) != 0)
  return;

 FUNC_2(VAR_0, "%s from %s", VAR_2, VAR_5);
}
