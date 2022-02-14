
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct nlm4_lockargs {int state; int reclaim; int exclusive; int block; int cookie; int alock; } ;
struct TYPE_6__ {int stat; } ;
struct TYPE_7__ {TYPE_1__ stat; int cookie; } ;
typedef TYPE_2__ nlm_res ;
struct TYPE_8__ {int cookie; int state; int reclaim; int exclusive; int block; int alock; } ;
typedef TYPE_3__ nlm_lockargs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct nlm4_lockargs*,struct svc_req*,int) ;
 int FUNC_1 (struct svc_req*) ;
 int FUNC_2 (char*,struct svc_req*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,TYPE_2__*,int ) ;

void *
FUNC_5(nlm_lockargs *VAR_4, struct svc_req *VAR_5)
{
 static nlm_res VAR_6;
 struct nlm4_lockargs VAR_7;

 FUNC_3(&VAR_4->alock, &VAR_7);
 VAR_7 = VAR_4->cookie;
 VAR_7 = VAR_4->block;
 VAR_7 = VAR_4->exclusive;
 VAR_7 = VAR_4->reclaim;
 VAR_7 = VAR_4->state;

 if (VAR_3)
  FUNC_2("nlm_lock_msg", VAR_5);

 VAR_6.cookie = VAR_4->cookie;
 VAR_6.stat.stat = FUNC_0(&VAR_7, VAR_5, VAR_0 | VAR_1);
 FUNC_4(VAR_2, &VAR_6, FUNC_1(VAR_5));

 return (((void*)0));
}
