
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rpc_gss_cookedcred {struct svc_rpc_gss_client* cc_client; } ;
struct TYPE_2__ {int service; } ;
struct svc_rpc_gss_client {int cl_mech; int cl_qop; int cl_ctx; TYPE_1__ cl_rawcred; } ;
struct svc_req {struct svc_rpc_gss_cookedcred* rq_clntcred; } ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int,int ,int,scalar_t__*) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__) ;





int
FUNC_2(struct svc_req *VAR_3, int VAR_4)
{
 struct svc_rpc_gss_cookedcred *VAR_5 = VAR_3->rq_clntcred;
 struct svc_rpc_gss_client *VAR_6 = VAR_5->cc_client;
 int VAR_7;
 OM_uint32 VAR_8;
 OM_uint32 VAR_9, VAR_10;
 int VAR_11;

 switch (VAR_6->cl_rawcred.service) {
 case 129:
  return (VAR_4);
  break;

 case 131:
 case 130:
  VAR_7 = VAR_0;
  break;

 case 128:
  VAR_7 = VAR_2;
  break;

 default:
  return (0);
 }

 VAR_9 = FUNC_0(&VAR_10, VAR_6->cl_ctx, VAR_7,
     VAR_6->cl_qop, VAR_4, &VAR_8);

 if (VAR_9 == VAR_1) {
  VAR_11 = (int) VAR_8;
  if (VAR_11 < 0)
   VAR_11 = 0;
  return (VAR_11);
 } else {
  FUNC_1("gss_wrap_size_limit", VAR_6->cl_mech,
      VAR_9, VAR_10);
  return (0);
 }
}
