
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ucred {int dummy; } ;
typedef int rpc_gss_service_t ;
typedef int rpc_gss_options_ret_t ;
typedef int rpc_gss_options_req_t ;
typedef int gss_OID ;
typedef int CLIENT ;
typedef int AUTH ;


 int VAR_0 ;
 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (char const*,char const*,int *) ;
 int * FUNC_2 (int *,struct ucred*,char const*,char const*,int ,int ,int ,int *,int *) ;

AUTH *
FUNC_3(CLIENT *VAR_1, struct ucred *VAR_2, const char *VAR_3,
    const char *VAR_4, const char *VAR_5, rpc_gss_service_t VAR_6,
    const char *VAR_7, rpc_gss_options_req_t *VAR_8,
    rpc_gss_options_ret_t *VAR_9)
{
 gss_OID VAR_10;
 u_int VAR_11;




 if (!FUNC_0(VAR_5, &VAR_10))
  return (((void*)0));

 if (VAR_7) {
  if (!FUNC_1(VAR_7, VAR_5, &VAR_11))
   return (((void*)0));
 } else {
  VAR_11 = VAR_0;
 }

 return (FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
  VAR_10, VAR_6, VAR_11, VAR_8, VAR_9));
}
