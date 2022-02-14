
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct svc_rpc_gss_svc_name {int sn_cred; int sn_req_time; scalar_t__ sn_principal; int sn_mech; } ;
typedef int gss_name_t ;
struct TYPE_5__ {int length; void* value; } ;
typedef TYPE_1__ gss_buffer_desc ;
struct TYPE_6__ {int count; int elements; } ;
typedef TYPE_2__ gss_OID_set_desc ;
typedef int bool_t ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int ,TYPE_2__*,int ,int *,int *,int *) ;
 scalar_t__ FUNC_1 (scalar_t__*,TYPE_1__*,int ,int *) ;
 int FUNC_2 (scalar_t__*,int *) ;
 int FUNC_3 (scalar_t__*,int *) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static bool_t
FUNC_5(struct svc_rpc_gss_svc_name *VAR_6)
{
 OM_uint32 VAR_7, VAR_8;
 gss_buffer_desc VAR_9;
 gss_name_t VAR_10;
 gss_OID_set_desc VAR_11;

 VAR_11.count = 1;
 VAR_11.elements = VAR_6->sn_mech;

 VAR_9.value = (void *) VAR_6->sn_principal;
 VAR_9.length = FUNC_4(VAR_6->sn_principal);

 VAR_7 = FUNC_1(&VAR_8, &VAR_9,
       VAR_3, &VAR_10);
 if (VAR_7 != VAR_4)
  return (VAR_0);

 if (VAR_6->sn_cred != VAR_2)
  FUNC_2(&VAR_8, &VAR_6->sn_cred);

 VAR_7 = FUNC_0(&VAR_8, VAR_10,
     VAR_6->sn_req_time, &VAR_11, VAR_1, &VAR_6->sn_cred,
     ((void*)0), ((void*)0));
 if (VAR_7 != VAR_4) {
  FUNC_3(&VAR_8, &VAR_10);
  return (VAR_0);
 }
 FUNC_3(&VAR_8, &VAR_10);

 return (VAR_5);
}
