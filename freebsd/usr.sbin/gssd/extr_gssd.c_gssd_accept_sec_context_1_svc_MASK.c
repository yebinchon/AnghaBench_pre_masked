
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct svc_req {int dummy; } ;
typedef int gss_name_t ;
typedef int gss_ctx_id_t ;
typedef int gss_cred_id_t ;
typedef int bool_t ;
struct TYPE_6__ {void* delegated_cred_handle; void* src_name; void* ctx; scalar_t__ major_status; scalar_t__ minor_status; int time_rec; int ret_flags; int output_token; int mech_type; } ;
typedef TYPE_1__ accept_sec_context_res ;
struct TYPE_7__ {void* ctx; int input_chan_bindings; int input_token; void* cred; } ;
typedef TYPE_2__ accept_sec_context_args ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__*,int *,int ,int *,int ,int *,int *,int *,int *,int *,int *) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

bool_t
FUNC_5(accept_sec_context_args *VAR_7, accept_sec_context_res *VAR_8, struct svc_req *VAR_9)
{
 gss_ctx_id_t VAR_10 = VAR_0;
 gss_cred_id_t VAR_11 = VAR_1;
 gss_name_t VAR_12;
 gss_cred_id_t VAR_13;

 FUNC_4(VAR_8, 0, sizeof(*VAR_8));
 if (VAR_7->ctx) {
  VAR_10 = FUNC_1(VAR_7->ctx);
  if (!VAR_10) {
   VAR_8->major_status = VAR_3;
   FUNC_3("gssd_accept_sec_context: ctx"
       " resource not found\n");
   return (VAR_6);
  }
 }
 if (VAR_7->cred) {
  VAR_11 = FUNC_1(VAR_7->cred);
  if (!VAR_11) {
   VAR_8->major_status = VAR_5;
   FUNC_3("gssd_accept_sec_context: cred"
       " resource not found\n");
   return (VAR_6);
  }
 }

 FUNC_4(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->major_status = FUNC_0(&VAR_8->minor_status,
     &VAR_10, VAR_11, &VAR_7->input_token, VAR_7->input_chan_bindings,
     &VAR_12, &VAR_8->mech_type, &VAR_8->output_token,
     &VAR_8->ret_flags, &VAR_8->time_rec,
     &VAR_13);
 FUNC_3("gssd_accept_sec_context: done major=0x%x minor=%d\n",
     (unsigned int)VAR_8->major_status, (int)VAR_8->minor_status);

 if (VAR_8->major_status == VAR_2
     || VAR_8->major_status == VAR_4) {
  if (VAR_7->ctx)
   VAR_8->ctx = VAR_7->ctx;
  else
   VAR_8->ctx = FUNC_2(VAR_10);
  VAR_8->src_name = FUNC_2(VAR_12);
  VAR_8->delegated_cred_handle =
   FUNC_2(VAR_13);
 }

 return (VAR_6);
}
