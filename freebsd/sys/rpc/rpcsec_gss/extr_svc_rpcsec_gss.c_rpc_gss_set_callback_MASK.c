
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rpc_gss_callback {int cb_callback; } ;
typedef int rpc_gss_callback_t ;
typedef int bool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct svc_rpc_gss_callback*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 struct svc_rpc_gss_callback* FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

bool_t
FUNC_5(rpc_gss_callback_t *VAR_7)
{
 struct svc_rpc_gss_callback *VAR_8;

 VAR_8 = FUNC_2(sizeof(struct svc_rpc_gss_callback));
 if (!VAR_8) {
  FUNC_1(VAR_2, VAR_0);
  return (VAR_1);
 }
 VAR_8->cb_callback = *VAR_7;
 FUNC_3(&VAR_6);
 FUNC_0(&VAR_5, VAR_8, VAR_4);
 FUNC_4(&VAR_6);

 return (VAR_3);
}
