
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct nlm_unlockargs {int alock; int cookie; } ;
typedef int nlm_res ;
struct TYPE_3__ {int alock; int cookie; } ;
typedef TYPE_1__ nlm4_unlockargs ;
typedef int nlm4_res ;
typedef scalar_t__ bool_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *,struct svc_req*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

bool_t
FUNC_3(struct nlm_unlockargs *VAR_0, nlm_res *VAR_1, struct svc_req *VAR_2)
{
 bool_t VAR_3;
 nlm4_unlockargs VAR_4;
 nlm4_res VAR_5;

 VAR_4 = VAR_0->cookie;
 FUNC_1(&VAR_4, &VAR_0->alock);

 VAR_3 = FUNC_0(&VAR_4, &VAR_5, VAR_2);
 if (VAR_3)
  FUNC_2(VAR_1, &VAR_5);

 return (VAR_3);
}
