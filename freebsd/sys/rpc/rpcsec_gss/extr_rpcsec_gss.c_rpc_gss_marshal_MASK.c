
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
struct rpc_pending_request {void* pr_seq; void* pr_xid; } ;
struct rpc_gss_cred {scalar_t__ gc_proc; scalar_t__ gc_svc; void* gc_seq; } ;
struct rpc_gss_data {scalar_t__ gd_state; struct rpc_gss_cred gd_cred; int gd_qop; int gd_ctx; int gd_mech; int gd_lock; int gd_reqs; } ;
struct opaque_auth {char* oa_base; void* oa_length; void* oa_flavor; } ;
struct mbuf {int dummy; } ;
struct TYPE_5__ {char* value; void* length; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int credbuf ;
typedef int bool_t ;
typedef int XDR ;
typedef scalar_t__ OM_uint32 ;
typedef int AUTH ;


 struct rpc_gss_data* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,struct rpc_pending_request*,int ) ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *) ;
 int VAR_12 ;
 void* FUNC_3 (int *) ;
 char* FUNC_4 (int *,void*) ;
 int FUNC_5 (int *,int ) ;
 struct opaque_auth VAR_13 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (scalar_t__*,int ,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (scalar_t__*,TYPE_1__*) ;
 struct rpc_pending_request* FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_14 ;
 void* FUNC_12 (struct rpc_gss_data*) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_15 ;
 int FUNC_16 (int *,struct opaque_auth*) ;
 int FUNC_17 (int *,struct rpc_gss_cred*) ;
 int FUNC_18 (struct mbuf**,int ,int ,scalar_t__,void*) ;
 int FUNC_19 (int *,struct mbuf*) ;
 int FUNC_20 (int *,char*,int,int ) ;

__attribute__((used)) static bool_t
FUNC_21(AUTH *VAR_16, uint32_t VAR_17, XDR *VAR_18, struct mbuf *VAR_19)
{
 struct rpc_gss_data *VAR_20;
 struct rpc_pending_request *VAR_21;
 uint32_t VAR_22;
 XDR VAR_23;
 struct rpc_gss_cred VAR_24;
 char VAR_25[VAR_5];
 struct opaque_auth VAR_26, VAR_27;
 gss_buffer_desc VAR_28, VAR_29;
 OM_uint32 VAR_30, VAR_31;
 bool_t VAR_32;

 FUNC_14("in rpc_gss_marshal()");

 VAR_20 = FUNC_0(VAR_16);

 VAR_24 = VAR_20->gd_cred;
 VAR_22 = FUNC_12(VAR_20);
 VAR_24.gc_seq = VAR_22;

 FUNC_20(&VAR_23, VAR_25, sizeof(VAR_25), VAR_12);
 if (!FUNC_17(&VAR_23, &VAR_24)) {
  FUNC_2(&VAR_23);
  FUNC_6(VAR_10, VAR_0);
  return (VAR_2);
 }
 VAR_26.oa_flavor = VAR_6;
 VAR_26.oa_base = VAR_25;
 VAR_26.oa_length = FUNC_3(&VAR_23);
 FUNC_2(&VAR_23);

 FUNC_16(VAR_18, &VAR_26);

 if (VAR_20->gd_cred.gc_proc == VAR_9 ||
     VAR_20->gd_cred.gc_proc == VAR_7) {
  if (!FUNC_16(VAR_18, &VAR_13)) {
   FUNC_6(VAR_10, VAR_0);
   return (VAR_2);
  }
  FUNC_19(VAR_18, VAR_19);
  return (VAR_11);
 } else {




  VAR_21 = FUNC_9(sizeof(struct rpc_pending_request));
  FUNC_10(&VAR_20->gd_lock);
  VAR_21->pr_xid = VAR_17;
  VAR_21->pr_seq = VAR_22;
  FUNC_1(&VAR_20->gd_reqs, VAR_21, VAR_14);
  FUNC_11(&VAR_20->gd_lock);







  VAR_28.length = FUNC_3(VAR_18);
  FUNC_5(VAR_18, 0);
  VAR_28.value = FUNC_4(VAR_18, VAR_28.length);

  VAR_30 = FUNC_7(&VAR_31, VAR_20->gd_ctx, VAR_20->gd_qop,
      &VAR_28, &VAR_29);

  if (VAR_30 != VAR_3) {
   FUNC_15("gss_get_mic", VAR_20->gd_mech,
       VAR_30, VAR_31);
   if (VAR_30 == VAR_4) {
    FUNC_13(VAR_16, VAR_11);
   }
   FUNC_6(VAR_10, VAR_1);
   return (VAR_2);
  }

  VAR_27.oa_flavor = VAR_6;
  VAR_27.oa_base = VAR_29.value;
  VAR_27.oa_length = VAR_29.length;

  VAR_32 = FUNC_16(VAR_18, &VAR_27);
  FUNC_8(&VAR_31, &VAR_29);
  if (!VAR_32) {
   FUNC_6(VAR_10, VAR_0);
   return (VAR_2);
  }
  if (VAR_20->gd_state != VAR_8 ||
      VAR_20->gd_cred.gc_svc == VAR_15) {
   FUNC_19(VAR_18, VAR_19);
   return (VAR_11);
  } else {
   if (!FUNC_18(&VAR_19,
    VAR_20->gd_ctx, VAR_20->gd_qop, VAR_20->gd_cred.gc_svc,
    VAR_22))
    return (VAR_2);
   FUNC_19(VAR_18, VAR_19);
   return (VAR_11);
  }
 }

 return (VAR_11);
}
