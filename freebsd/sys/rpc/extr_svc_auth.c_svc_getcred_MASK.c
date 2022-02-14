
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xucred {int cr_groups; int cr_ngroups; int cr_uid; } ;
struct ucred {int * cr_prison; int * cr_groups; int cr_svgid; int cr_rgid; int cr_svuid; int cr_ruid; int cr_uid; } ;
struct TYPE_2__ {int oa_flavor; } ;
struct svc_req {scalar_t__ rq_clntcred; TYPE_1__ rq_cred; } ;



 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct svc_req*,struct ucred**,int*) ;
 struct ucred* FUNC_1 () ;
 int FUNC_2 (struct ucred*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct svc_req *VAR_3, struct ucred **VAR_4, int *VAR_5)
{
 struct ucred *VAR_6 = ((void*)0);
 int VAR_7;
 struct xucred *VAR_8;

 VAR_7 = VAR_3->rq_cred.oa_flavor;
 if (VAR_5)
  *VAR_5 = VAR_7;

 switch (VAR_7) {
 case 129:
  VAR_8 = (struct xucred *) VAR_3->rq_clntcred;
  VAR_6 = FUNC_1();
  VAR_6->cr_uid = VAR_6->cr_ruid = VAR_6->cr_svuid = VAR_8->cr_uid;
  FUNC_2(VAR_6, VAR_8->cr_ngroups, VAR_8->cr_groups);
  VAR_6->cr_rgid = VAR_6->cr_svgid = VAR_6->cr_groups[0];
  VAR_6->cr_prison = &VAR_2;
  FUNC_3(VAR_6->cr_prison);
  *VAR_4 = VAR_6;
  return (VAR_1);

 case 128:
  if (!&FUNC_0)
   return (VAR_0);
  return (FUNC_0(VAR_3, VAR_4, VAR_5));

 default:
  return (VAR_0);
 }
}
