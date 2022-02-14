
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rpc_gss_client {int cl_refs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct svc_rpc_gss_client*) ;

__attribute__((used)) static void
FUNC_2(struct svc_rpc_gss_client *VAR_0)
{

 if (!FUNC_0(&VAR_0->cl_refs))
  return;
 FUNC_1(VAR_0);
}
