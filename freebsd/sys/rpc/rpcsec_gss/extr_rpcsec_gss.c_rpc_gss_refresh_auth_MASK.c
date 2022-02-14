
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_gss_data {scalar_t__ gd_state; } ;
typedef int rpc_gss_options_ret_t ;
typedef int options ;
typedef int AUTH ;


 struct rpc_gss_data* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int *) ;

void
FUNC_3(AUTH *VAR_1)
{
 struct rpc_gss_data *VAR_2;
 rpc_gss_options_ret_t VAR_3;

 VAR_2 = FUNC_0(VAR_1);






 if (VAR_2->gd_state != VAR_0) {
  FUNC_1(&VAR_3, 0, sizeof (VAR_3));
  (void) FUNC_2(VAR_1, &VAR_3);
 }
}
