
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uid; int gid; int gidlen; int * gidlist; } ;
struct svc_rpc_gss_client {int cl_mech; int * cl_gid_storage; TYPE_1__ cl_ucred; } ;
typedef TYPE_1__ rpc_gss_ucred_t ;
typedef int gss_name_t ;
typedef int OM_uint32 ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int const,int ,int*,int*,int*,int *) ;

__attribute__((used)) static void
FUNC_2(struct svc_rpc_gss_client *VAR_1,
    const gss_name_t VAR_2)
{
 OM_uint32 VAR_3, VAR_4;
 rpc_gss_ucred_t *VAR_5 = &VAR_1->cl_ucred;
 int VAR_6;

 VAR_5->uid = 65534;
 VAR_5->gid = 65534;
 VAR_5->gidlist = VAR_1->cl_gid_storage;

 VAR_6 = VAR_0;
 VAR_3 = FUNC_1(&VAR_4, VAR_2, VAR_1->cl_mech,
     &VAR_5->uid, &VAR_5->gid, &VAR_6, &VAR_5->gidlist[0]);
 if (FUNC_0(VAR_3))
  VAR_5->gidlen = 0;
 else
  VAR_5->gidlen = VAR_6;
}
