
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int ;
struct svc_rpc_gss_svc_name {int sn_principal; void* sn_version; void* sn_program; int sn_cred; void* sn_req_time; int sn_mech; } ;
typedef int gss_OID ;
typedef int bool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct svc_rpc_gss_svc_name*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 struct svc_rpc_gss_svc_name* FUNC_2 (int) ;
 int FUNC_3 (struct svc_rpc_gss_svc_name*,int) ;
 int FUNC_4 (struct svc_rpc_gss_svc_name*) ;
 int FUNC_5 (char const*,int *) ;
 int VAR_4 ;
 int FUNC_6 (char const*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

bool_t
FUNC_9(const char *VAR_7, const char *VAR_8,
    u_int VAR_9, u_int VAR_10, u_int VAR_11)
{
 struct svc_rpc_gss_svc_name *VAR_12;
 gss_OID VAR_13;

 if (!FUNC_5(VAR_8, &VAR_13))
  return (VAR_0);

 VAR_12 = FUNC_2(sizeof(*VAR_12));
 if (!VAR_12)
  return (VAR_0);
 VAR_12->sn_principal = FUNC_6(VAR_7, VAR_2);
 VAR_12->sn_mech = VAR_13;
 VAR_12->sn_req_time = VAR_9;
 VAR_12->sn_cred = VAR_1;
 VAR_12->sn_program = VAR_10;
 VAR_12->sn_version = VAR_11;

 if (!FUNC_4(VAR_12)) {
  FUNC_1(VAR_12->sn_principal, VAR_2);
  FUNC_3(VAR_12, sizeof(*VAR_12));
  return (VAR_0);
 }

 FUNC_7(&VAR_5);
 FUNC_0(&VAR_6, VAR_12, VAR_4);
 FUNC_8(&VAR_5);

 return (VAR_3);
}
