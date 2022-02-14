
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct svc_rpc_gss_cookedcred {scalar_t__ cc_service; int cc_seq; struct svc_rpc_gss_client* cc_client; } ;
struct svc_rpc_gss_client {scalar_t__ cl_state; int cl_qop; int cl_ctx; } ;
struct mbuf {int dummy; } ;
typedef int bool_t ;
struct TYPE_3__ {scalar_t__ svc_ah_private; } ;
typedef TYPE_1__ SVCAUTH ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct mbuf**,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static bool_t
FUNC_2(SVCAUTH *VAR_3, struct mbuf **VAR_4)
{
 struct svc_rpc_gss_cookedcred *VAR_5;
 struct svc_rpc_gss_client *VAR_6;

 FUNC_0("in svc_rpc_gss_wrap()");

 VAR_5 = (struct svc_rpc_gss_cookedcred *) VAR_3->svc_ah_private;
 VAR_6 = VAR_5->cc_client;
 if (VAR_6->cl_state != VAR_0
     || VAR_5->cc_service == VAR_2 || *VAR_4 == ((void*)0)) {
  return (VAR_1);
 }

 return (FUNC_1(VAR_4,
  VAR_6->cl_ctx, VAR_6->cl_qop,
  VAR_5->cc_service, VAR_5->cc_seq));
}
