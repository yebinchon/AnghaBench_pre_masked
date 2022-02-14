
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct TYPE_9__ {int sequence; int stat; int cookie; } ;
typedef TYPE_1__ nlm_shareres ;
struct TYPE_10__ {int reclaim; int share; int cookie; } ;
typedef TYPE_2__ nlm_shareargs ;
struct TYPE_11__ {int sequence; int stat; int cookie; } ;
typedef TYPE_3__ nlm4_shareres ;
struct TYPE_12__ {int reclaim; int share; int cookie; } ;
typedef TYPE_4__ nlm4_shareargs ;
typedef scalar_t__ bool_t ;


 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_3__*,struct svc_req*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;

bool_t
FUNC_3(nlm_shareargs *VAR_0, nlm_shareres *VAR_1, struct svc_req *VAR_2)
{
 bool_t VAR_3;
 nlm4_shareargs VAR_4;
 nlm4_shareres VAR_5;

 VAR_4 = VAR_0->cookie;
 FUNC_1(&VAR_4, &VAR_0->share);
 VAR_4 = VAR_0->reclaim;

 VAR_3 = FUNC_0(&VAR_4, &VAR_5, VAR_2);
 if (VAR_3) {
  VAR_1->cookie = VAR_5;
  VAR_1->stat = FUNC_2(VAR_5);
  VAR_1->sequence = VAR_5;
 }

 return (VAR_3);
}
