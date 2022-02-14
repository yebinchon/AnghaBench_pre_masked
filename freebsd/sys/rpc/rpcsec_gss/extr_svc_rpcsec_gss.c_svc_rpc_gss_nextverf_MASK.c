
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct svc_rpc_gss_client {int cl_state; int cl_mech; int cl_qop; int cl_ctx; } ;
struct TYPE_6__ {scalar_t__ oa_length; int oa_base; int oa_flavor; } ;
struct svc_req {TYPE_1__ rq_verf; } ;
typedef int nseq ;
struct TYPE_7__ {int length; int * value; } ;
typedef TYPE_2__ gss_buffer_desc ;
typedef int bool_t ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__*,int ,int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (scalar_t__*,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool_t
FUNC_7(struct svc_rpc_gss_client *VAR_6,
    struct svc_req *VAR_7, u_int VAR_8)
{
 gss_buffer_desc VAR_9;
 gss_buffer_desc VAR_10;
 OM_uint32 VAR_11, VAR_12;
 uint32_t VAR_13;

 FUNC_5("in svc_rpc_gss_nextverf()");

 VAR_13 = FUNC_4(VAR_8);
 VAR_9.value = &VAR_13;
 VAR_9.length = sizeof(VAR_13);

 VAR_11 = FUNC_2(&VAR_12, VAR_6->cl_ctx, VAR_6->cl_qop,
     &VAR_9, &VAR_10);

 if (VAR_11 != VAR_2) {
  FUNC_6("gss_get_mic", VAR_6->cl_mech, VAR_11, VAR_12);
  VAR_6->cl_state = VAR_0;
  return (VAR_1);
 }

 FUNC_0(VAR_10.length <= VAR_3,
     ("MIC too large for RPCSEC_GSS"));

 VAR_7->rq_verf.oa_flavor = VAR_4;
 VAR_7->rq_verf.oa_length = VAR_10.length;
 FUNC_1(VAR_10.value, VAR_7->rq_verf.oa_base, VAR_10.length);

 FUNC_3(&VAR_12, &VAR_10);

 return (VAR_5);
}
