
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct TYPE_6__ {int svid; } ;
struct TYPE_7__ {TYPE_1__ holder; } ;
struct TYPE_8__ {TYPE_2__ nlm4_testrply_u; int stat; } ;
struct TYPE_9__ {TYPE_3__ stat; int cookie; } ;
typedef TYPE_4__ nlm4_testres ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int *,int ,int*,int ) ;
 int FUNC_1 (char*,struct svc_req*) ;

void *
FUNC_2(nlm4_testres *VAR_2, struct svc_req *VAR_3)
{
 if (VAR_1)
  FUNC_1("nlm4_test_res", VAR_3);

 (void)FUNC_0(-1, &VAR_2->cookie, VAR_2->stat.stat,
  (int *)&VAR_2->stat.nlm4_testrply_u.holder.svid,
  VAR_0);
 return (((void*)0));
}
