
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct svc_rpc_gss_client {int cl_state; int cl_mech; int cl_ctx; } ;
struct TYPE_6__ {int oa_length; int * oa_base; } ;
struct opaque_auth {scalar_t__ oa_length; int oa_base; int oa_flavor; } ;
struct TYPE_7__ {TYPE_1__ cb_verf; struct opaque_auth cb_cred; scalar_t__ cb_proc; scalar_t__ cb_vers; scalar_t__ cb_prog; scalar_t__ cb_rpcvers; } ;
struct rpc_msg {TYPE_2__ rm_call; int rm_direction; scalar_t__ rm_xid; } ;
typedef int rpchdr ;
typedef scalar_t__ rpc_gss_proc_t ;
typedef int int32_t ;
typedef int gss_qop_t ;
struct TYPE_8__ {int length; int * value; } ;
typedef TYPE_3__ gss_buffer_desc ;
typedef int caddr_t ;
typedef int bool_t ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,TYPE_3__*,TYPE_3__*,int *) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool_t
FUNC_8(struct svc_rpc_gss_client *VAR_5, struct rpc_msg *VAR_6,
    gss_qop_t *VAR_7, rpc_gss_proc_t VAR_8)
{
 struct opaque_auth *VAR_9;
 gss_buffer_desc VAR_10, VAR_11;
 OM_uint32 VAR_12, VAR_13;
 gss_qop_t VAR_14;
 int32_t VAR_15[128 / sizeof(int32_t)];
 int32_t *VAR_16;

 FUNC_6("in svc_rpc_gss_validate()");

 FUNC_5(VAR_15, 0, sizeof(VAR_15));


 VAR_16 = VAR_15;
 FUNC_1(VAR_16, VAR_6->rm_xid);
 FUNC_0(VAR_16, VAR_6->rm_direction);
 FUNC_1(VAR_16, VAR_6->rm_call.cb_rpcvers);
 FUNC_1(VAR_16, VAR_6->rm_call.cb_prog);
 FUNC_1(VAR_16, VAR_6->rm_call.cb_vers);
 FUNC_1(VAR_16, VAR_6->rm_call.cb_proc);
 VAR_9 = &VAR_6->rm_call.cb_cred;
 FUNC_0(VAR_16, VAR_9->oa_flavor);
 FUNC_1(VAR_16, VAR_9->oa_length);
 if (VAR_9->oa_length) {
  FUNC_4((caddr_t)VAR_16, VAR_9->oa_base, VAR_9->oa_length);
  VAR_16 += FUNC_2(VAR_9->oa_length) / sizeof(int32_t);
 }
 VAR_10.value = VAR_15;
 VAR_10.length = (u_char *)VAR_16 - (u_char *)VAR_15;

 VAR_11.value = VAR_6->rm_call.cb_verf.oa_base;
 VAR_11.length = VAR_6->rm_call.cb_verf.oa_length;

 VAR_12 = FUNC_3(&VAR_13, VAR_5->cl_ctx, &VAR_10, &VAR_11,
      &VAR_14);

 if (VAR_12 != VAR_2) {
  FUNC_7("gss_verify_mic", VAR_5->cl_mech,
      VAR_12, VAR_13);
  if (VAR_8 != VAR_3)
   VAR_5->cl_state = VAR_0;
  return (VAR_1);
 }

 *VAR_7 = VAR_14;
 return (VAR_4);
}
