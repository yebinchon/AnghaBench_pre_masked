
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucred {int * cr_prison; int cr_svgid; int cr_rgid; int cr_svuid; int cr_ruid; int cr_uid; } ;
struct svc_rpc_gss_cookedcred {struct svc_rpc_gss_client* cc_client; } ;
struct TYPE_4__ {int gidlist; int gidlen; int gid; int uid; } ;
struct svc_rpc_gss_client {int cl_rpcflavor; struct ucred* cl_cred; TYPE_2__ cl_ucred; } ;
struct TYPE_3__ {scalar_t__ oa_flavor; } ;
struct svc_req {struct svc_rpc_gss_cookedcred* rq_clntcred; TYPE_1__ rq_cred; } ;
typedef TYPE_2__ rpc_gss_ucred_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ucred* FUNC_0 () ;
 struct ucred* FUNC_1 (struct ucred*) ;
 int FUNC_2 (struct ucred*,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct svc_req *VAR_4, struct ucred **VAR_5, int *VAR_6)
{
 struct ucred *VAR_7;
 struct svc_rpc_gss_cookedcred *VAR_8;
 struct svc_rpc_gss_client *VAR_9;
 rpc_gss_ucred_t *VAR_10;

 if (VAR_4->rq_cred.oa_flavor != VAR_1)
  return (VAR_0);

 VAR_8 = VAR_4->rq_clntcred;
 VAR_9 = VAR_8->cc_client;

 if (VAR_6)
  *VAR_6 = VAR_9->cl_rpcflavor;

 if (VAR_9->cl_cred) {
  *VAR_5 = FUNC_1(VAR_9->cl_cred);
  return (VAR_2);
 }

 VAR_10 = &VAR_9->cl_ucred;
 VAR_7 = VAR_9->cl_cred = FUNC_0();
 VAR_7->cr_uid = VAR_7->cr_ruid = VAR_7->cr_svuid = VAR_10->uid;
 VAR_7->cr_rgid = VAR_7->cr_svgid = VAR_10->gid;
 FUNC_2(VAR_7, VAR_10->gidlen, VAR_10->gidlist);
 VAR_7->cr_prison = &VAR_3;
 FUNC_3(VAR_7->cr_prison);
 *VAR_5 = FUNC_1(VAR_7);

 return (VAR_2);
}
