
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct TYPE_4__ {int stat; } ;
struct TYPE_5__ {TYPE_1__ stat; int cookie; } ;
typedef TYPE_2__ nlm4_res ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int *,int ,int *,int ) ;
 int FUNC_1 (char*,struct svc_req*) ;

void *
FUNC_2(nlm4_res *VAR_2, struct svc_req *VAR_3)
{
 if (VAR_1)
  FUNC_1("nlm4_lock_res", VAR_3);

 (void)FUNC_0(-1, &VAR_2->cookie, VAR_2->stat.stat, ((void*)0), VAR_0);

 return (((void*)0));
}
