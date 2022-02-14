
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
struct TYPE_11__ {int holder; } ;
struct TYPE_12__ {scalar_t__ stat; TYPE_3__ nlm_testrply_u; } ;
struct TYPE_13__ {TYPE_4__ stat; int cookie; } ;
typedef TYPE_5__ nlm_testres ;
struct TYPE_9__ {int holder; } ;
struct TYPE_10__ {TYPE_1__ nlm4_testrply_u; } ;
struct TYPE_14__ {TYPE_2__ stat; int cookie; } ;
typedef TYPE_6__ nlm4_testres ;
typedef int bool_t ;


 int FUNC_0 (TYPE_6__*,void*,struct svc_req*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ VAR_0 ;

bool_t
FUNC_2(nlm_testres *VAR_1, void *VAR_2, struct svc_req *VAR_3)
{
 nlm4_testres VAR_4;

 VAR_4 = VAR_1->cookie;
 if (VAR_1->stat.stat == VAR_0)
  FUNC_1(
   &VAR_4,
   &VAR_1->stat.nlm_testrply_u.holder);

 return (FUNC_0(&VAR_4, VAR_2, VAR_3));
}
