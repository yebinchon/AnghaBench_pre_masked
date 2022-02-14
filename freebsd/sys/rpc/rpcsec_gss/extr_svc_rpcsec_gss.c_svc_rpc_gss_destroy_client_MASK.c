
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct svc_rpc_gss_client* client_principal; } ;
struct svc_rpc_gss_client {int len; int cl_lock; scalar_t__ cl_cred; TYPE_1__ cl_rawcred; int cl_cname; int cl_ctx; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct svc_rpc_gss_client*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct svc_rpc_gss_client *VAR_1)
{
 OM_uint32 VAR_2;

 FUNC_4("in svc_rpc_gss_destroy_client()");

 if (VAR_1->cl_ctx)
  FUNC_1(&VAR_2,
      &VAR_1->cl_ctx, VAR_0);

 if (VAR_1->cl_cname)
  FUNC_2(&VAR_2, &VAR_1->cl_cname);

 if (VAR_1->cl_rawcred.client_principal)
  FUNC_3(VAR_1->cl_rawcred.client_principal,
      sizeof(*VAR_1->cl_rawcred.client_principal)
      + VAR_1->cl_rawcred.client_principal->len);

 if (VAR_1->cl_cred)
  FUNC_0(VAR_1->cl_cred);

 FUNC_5(&VAR_1->cl_lock);
 FUNC_3(VAR_1, sizeof(*VAR_1));
}
