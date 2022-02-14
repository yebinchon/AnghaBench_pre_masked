
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
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nlm4_lockargs*,struct svc_req*,int ) ;
 int FUNC_1 (char*,struct svc_req*) ;
 int FUNC_2 (int *,int *) ;

nlm_res *
FUNC_3(nlm_lockargs *VAR_2, struct svc_req *VAR_3)
{
 static nlm_res VAR_4;
 struct nlm4_lockargs VAR_5;
 FUNC_2(&VAR_2->alock, &VAR_5);
 VAR_5 = VAR_2->cookie;
 VAR_5 = VAR_2->block;
 VAR_5 = VAR_2->exclusive;
 VAR_5 = VAR_2->reclaim;
 VAR_5 = VAR_2->state;

 if (VAR_1)
  FUNC_1("nlm_lock", VAR_3);


 VAR_4.cookie = VAR_2->cookie;

 VAR_4.stat.stat = FUNC_0(&VAR_5, VAR_3, VAR_0);
 return (&VAR_4);
}
