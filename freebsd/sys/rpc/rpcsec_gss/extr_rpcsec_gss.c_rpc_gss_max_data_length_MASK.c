
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gc_svc; } ;
struct rpc_gss_data {int gd_mech; int gd_qop; int gd_ctx; TYPE_1__ gd_cred; } ;
typedef scalar_t__ OM_uint32 ;
typedef int AUTH ;


 struct rpc_gss_data* FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,int,int ,int,scalar_t__*) ;
 int FUNC_2 (char*,int ,scalar_t__,scalar_t__) ;





int
FUNC_3(AUTH *VAR_3, int VAR_4)
{
 struct rpc_gss_data *VAR_5;
 int VAR_6;
 OM_uint32 VAR_7;
 OM_uint32 VAR_8, VAR_9;
 int VAR_10;

 VAR_5 = FUNC_0(VAR_3);

 switch (VAR_5->gd_cred.gc_svc) {
 case 129:
  return (VAR_4);
  break;

 case 131:
 case 130:
  VAR_6 = VAR_0;
  break;

 case 128:
  VAR_6 = VAR_2;
  break;

 default:
  return (0);
 }

 VAR_8 = FUNC_1(&VAR_9, VAR_5->gd_ctx, VAR_6,
     VAR_5->gd_qop, VAR_4, &VAR_7);

 if (VAR_8 == VAR_1) {
  VAR_10 = (int) VAR_7;
  if (VAR_10 < 0)
   VAR_10 = 0;
  return (VAR_10);
 } else {
  FUNC_2("gss_wrap_size_limit", VAR_5->gd_mech,
      VAR_8, VAR_9);
  return (0);
 }
}
