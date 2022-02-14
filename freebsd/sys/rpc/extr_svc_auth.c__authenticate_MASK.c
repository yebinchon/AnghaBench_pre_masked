
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int oa_flavor; } ;
struct TYPE_6__ {int * svc_ah_private; int * svc_ah_ops; } ;
struct svc_req {TYPE_1__ rq_cred; TYPE_3__ rq_auth; } ;
struct TYPE_5__ {TYPE_1__ cb_cred; } ;
struct rpc_msg {TYPE_2__ rm_call; } ;
typedef enum auth_stat { ____Placeholder_auth_stat } auth_stat ;



 int VAR_0 ;



 int FUNC_0 (struct svc_req*,struct rpc_msg*) ;
 int FUNC_1 (struct svc_req*,struct rpc_msg*) ;
 int FUNC_2 (struct svc_req*,struct rpc_msg*) ;
 int FUNC_3 (struct svc_req*,struct rpc_msg*) ;
 int VAR_1 ;

enum auth_stat
FUNC_4(struct svc_req *VAR_2, struct rpc_msg *VAR_3)
{
 int VAR_4;
 enum auth_stat VAR_5;

 VAR_2->rq_cred = VAR_3->rm_call.cb_cred;
 VAR_2->rq_auth.svc_ah_ops = &VAR_1;
 VAR_2->rq_auth.svc_ah_private = ((void*)0);
 VAR_4 = VAR_2->rq_cred.oa_flavor;
 switch (VAR_4) {
 case 131:
  VAR_5 = FUNC_0(VAR_2, VAR_3);
  return (VAR_5);
 case 129:
  VAR_5 = FUNC_3(VAR_2, VAR_3);
  return (VAR_5);
 case 130:
  VAR_5 = FUNC_2(VAR_2, VAR_3);
  return (VAR_5);
 case 128:
  if (!&FUNC_1)
   return (VAR_0);
  VAR_5 = FUNC_1(VAR_2, VAR_3);
  return (VAR_5);
 default:
  break;
 }

 return (VAR_0);
}
