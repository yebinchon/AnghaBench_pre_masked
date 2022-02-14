
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int service; } ;
struct svc_rpc_gss_client {int cl_rpcflavor; TYPE_1__ cl_rawcred; int cl_mech; } ;
struct TYPE_5__ {int member_0; void* member_1; } ;
typedef TYPE_2__ gss_OID_desc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;





__attribute__((used)) static void
FUNC_1(struct svc_rpc_gss_client *VAR_4)
{
 static gss_OID_desc VAR_5 =
  {9, (void *) "\x2a\x86\x48\x86\xf7\x12\x01\x02\x02" };





 if (FUNC_0(VAR_4->cl_mech, &VAR_5)) {
  switch (VAR_4->cl_rawcred.service) {
  case 131:
  case 129:
   VAR_4->cl_rpcflavor = VAR_1;
   break;
  case 130:
   VAR_4->cl_rpcflavor = VAR_2;
   break;
  case 128:
   VAR_4->cl_rpcflavor = VAR_3;
   break;
  }
 } else {
  VAR_4->cl_rpcflavor = VAR_0;
 }
}
