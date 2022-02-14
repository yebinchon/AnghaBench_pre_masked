
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rpc_gss_client_list {int dummy; } ;
struct TYPE_2__ {size_t ci_id; } ;
struct svc_rpc_gss_client {TYPE_1__ cl_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct svc_rpc_gss_client_list*,struct svc_rpc_gss_client*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct svc_rpc_gss_client_list* VAR_4 ;
 size_t VAR_5 ;
 struct svc_rpc_gss_client_list VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct svc_rpc_gss_client *VAR_8)
{
 struct svc_rpc_gss_client_list *VAR_9;

 FUNC_1(&VAR_7, VAR_0);
 VAR_9 = &VAR_4[VAR_8->cl_id.ci_id % VAR_5];
 FUNC_0(VAR_9, VAR_8, VAR_2);
 FUNC_0(&VAR_6, VAR_8, VAR_1);
 VAR_3--;
}
