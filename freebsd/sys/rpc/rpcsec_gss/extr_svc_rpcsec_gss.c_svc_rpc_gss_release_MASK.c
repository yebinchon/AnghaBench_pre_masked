
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct svc_rpc_gss_cookedcred {struct svc_rpc_gss_client* cc_client; } ;
struct svc_rpc_gss_client {int dummy; } ;
struct TYPE_3__ {scalar_t__ svc_ah_private; } ;
typedef TYPE_1__ SVCAUTH ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct svc_rpc_gss_client*) ;

__attribute__((used)) static void
FUNC_2(SVCAUTH *VAR_0)
{
 struct svc_rpc_gss_cookedcred *VAR_1;
 struct svc_rpc_gss_client *VAR_2;

 FUNC_0("in svc_rpc_gss_release()");

 VAR_1 = (struct svc_rpc_gss_cookedcred *) VAR_0->svc_ah_private;
 VAR_2 = VAR_1->cc_client;
 FUNC_1(VAR_2);
}
