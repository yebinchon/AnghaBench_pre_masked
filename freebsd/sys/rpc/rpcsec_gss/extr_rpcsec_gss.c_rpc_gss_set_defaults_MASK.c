
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int gc_svc; } ;
struct rpc_gss_data {int gd_qop; TYPE_1__ gd_cred; int gd_mech; } ;
typedef int rpc_gss_service_t ;
typedef int bool_t ;
typedef int AUTH ;


 struct rpc_gss_data* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char const**) ;
 int FUNC_2 (char const*,char const*,int *) ;

bool_t
FUNC_3(AUTH *VAR_3, rpc_gss_service_t VAR_4, const char *VAR_5)
{
 struct rpc_gss_data *VAR_6;
 u_int VAR_7;
 const char *VAR_8;

 VAR_6 = FUNC_0(VAR_3);
 if (!FUNC_1(VAR_6->gd_mech, &VAR_8)) {
  return (VAR_0);
 }

 if (VAR_5) {
  if (!FUNC_2(VAR_5, VAR_8, &VAR_7)) {
   return (VAR_0);
  }
 } else {
  VAR_7 = VAR_1;
 }

 VAR_6->gd_cred.gc_svc = VAR_4;
 VAR_6->gd_qop = VAR_7;
 return (VAR_2);
}
