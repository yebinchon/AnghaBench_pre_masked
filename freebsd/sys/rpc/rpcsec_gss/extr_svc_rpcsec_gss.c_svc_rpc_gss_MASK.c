
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xdrproc_t ;
struct svc_rpc_gss_cookedcred {scalar_t__ cc_service; scalar_t__ cc_seq; struct svc_rpc_gss_client* cc_client; } ;
struct svc_rpc_gss_clientid {int dummy; } ;
struct TYPE_10__ {scalar_t__ service; int mechanism; void* qop; } ;
struct svc_rpc_gss_client {void* cl_qop; TYPE_5__ cl_rawcred; int cl_locked; int cl_lock; int cl_done_callback; int cl_refs; int cl_state; } ;
struct TYPE_9__ {struct svc_rpc_gss_cookedcred* svc_ah_private; int * svc_ah_ops; } ;
struct TYPE_6__ {int oa_length; int oa_base; } ;
struct svc_req {int rq_proc; TYPE_4__ rq_auth; void* rq_verf; struct svc_rpc_gss_cookedcred* rq_clntcred; TYPE_1__ rq_cred; } ;
struct TYPE_8__ {void* cb_verf; } ;
struct rpc_msg {TYPE_3__ rm_call; } ;
struct TYPE_7__ {scalar_t__ length; struct svc_rpc_gss_clientid* value; } ;
struct rpc_gss_init_res {scalar_t__ gc_version; int gc_proc; scalar_t__ gc_svc; scalar_t__ gc_seq; scalar_t__ gr_win; int gr_major; int gr_token; TYPE_2__ gc_handle; } ;
struct rpc_gss_cred {scalar_t__ gc_version; int gc_proc; scalar_t__ gc_svc; scalar_t__ gc_seq; scalar_t__ gr_win; int gr_major; int gr_token; TYPE_2__ gc_handle; } ;
typedef void* gss_qop_t ;
typedef int gr ;
typedef int gc ;
typedef enum auth_stat { ____Placeholder_auth_stat } auth_stat ;
typedef int caddr_t ;
typedef int XDR ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;



 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *) ;
 void* VAR_15 ;
 void* FUNC_1 (int ,void*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct rpc_gss_init_res*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (struct svc_rpc_gss_client*,struct svc_req*,struct rpc_gss_init_res*,struct rpc_gss_init_res*) ;
 int FUNC_7 (struct svc_rpc_gss_client*,struct svc_req*) ;
 int FUNC_8 (struct svc_rpc_gss_client*,scalar_t__) ;
 struct svc_rpc_gss_client* FUNC_9 () ;
 struct svc_rpc_gss_client* FUNC_10 (struct svc_rpc_gss_clientid*) ;
 int FUNC_11 (struct svc_rpc_gss_client*) ;
 int FUNC_12 (struct svc_rpc_gss_client*,struct svc_req*,scalar_t__) ;
 int FUNC_13 (struct svc_rpc_gss_client*) ;
 int FUNC_14 (struct svc_rpc_gss_client*) ;
 int FUNC_15 () ;
 int FUNC_16 (struct svc_rpc_gss_client*,scalar_t__) ;
 int FUNC_17 (struct svc_rpc_gss_client*,struct rpc_msg*,void**,int) ;
 int FUNC_18 (struct svc_req*,int ,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,char*) ;
 int FUNC_22 (int *,struct rpc_gss_init_res*) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_23 (int *,int ,int ,int ) ;

enum auth_stat
FUNC_24(struct svc_req *VAR_22, struct rpc_msg *VAR_23)

{
 OM_uint32 VAR_24;
 XDR VAR_25;
 struct svc_rpc_gss_cookedcred *VAR_26;
 struct svc_rpc_gss_client *VAR_27;
 struct rpc_gss_cred VAR_28;
 struct rpc_gss_init_res VAR_29;
 gss_qop_t VAR_30;
 int VAR_31;
 enum auth_stat VAR_32;

 FUNC_5("in svc_rpc_gss()");


 FUNC_15();


 VAR_22->rq_verf = VAR_15;


 if (VAR_22->rq_cred.oa_length <= 0)
  return (VAR_0);

 FUNC_3(&VAR_28, 0, sizeof(VAR_28));

 FUNC_23(&VAR_25, VAR_22->rq_cred.oa_base,
     VAR_22->rq_cred.oa_length, VAR_14);

 if (!FUNC_22(&VAR_25, &VAR_28)) {
  FUNC_0(&VAR_25);
  return (VAR_0);
 }
 FUNC_0(&VAR_25);

 VAR_27 = ((void*)0);


 if (VAR_28.gc_version != VAR_12) {
  VAR_32 = VAR_0;
  goto out;
 }


 if (VAR_28.gc_proc == 128) {
  if (VAR_28.gc_handle.length != 0) {
   VAR_32 = VAR_0;
   goto out;
  }
  VAR_27 = FUNC_9();
 } else {
  struct svc_rpc_gss_clientid *VAR_33;
  if (VAR_28.gc_handle.length != sizeof(*VAR_33)) {
   VAR_32 = VAR_0;
   goto out;
  }
  VAR_33 = VAR_28.gc_handle.value;
  VAR_27 = FUNC_10(VAR_33);
  if (!VAR_27) {





   VAR_32 = VAR_9;
   goto out;
  }
 }
 VAR_26 = VAR_22->rq_clntcred;
 VAR_26->cc_client = VAR_27;
 VAR_26->cc_service = VAR_28.gc_svc;
 VAR_26->cc_seq = VAR_28.gc_seq;





 if (VAR_28.gc_proc != 128
     && VAR_28.gc_proc != 131) {



  if (VAR_28.gc_seq >= VAR_7) {
   VAR_32 = VAR_10;
   goto out;
  }




  if (VAR_28.gc_svc != VAR_17 &&
      VAR_28.gc_svc != VAR_16 &&
      VAR_28.gc_svc != VAR_18) {
   VAR_32 = VAR_0;
   goto out;
  }
 }


 switch (VAR_28.gc_proc) {

 case 128:
 case 131:
  if (VAR_22->rq_proc != VAR_8) {
   VAR_32 = VAR_4;
   break;
  }

  FUNC_3(&VAR_29, 0, sizeof(VAR_29));
  if (!FUNC_6(VAR_27, VAR_22, &VAR_29, &VAR_28)) {
   VAR_32 = VAR_4;
   break;
  }

  if (VAR_29.gr_major == VAR_6) {




   VAR_22->rq_verf = VAR_23->rm_call.cb_verf;
   if (!FUNC_12(VAR_27, VAR_22, VAR_29.gr_win)) {
    VAR_32 = VAR_4;
    break;
   }
  } else {
   VAR_22->rq_verf = VAR_15;
  }

  VAR_31 = FUNC_18(VAR_22,
      (xdrproc_t) VAR_20,
      (caddr_t) &VAR_29);

  FUNC_2(&VAR_24, &VAR_29.gr_token);

  if (!VAR_31) {
   VAR_32 = VAR_2;
   break;
  }

  if (VAR_29.gr_major == VAR_6)
   VAR_27->cl_state = VAR_5;

  VAR_32 = VAR_11;
  break;

 case 130:
 case 129:
  if (!FUNC_8(VAR_27, VAR_28.gc_seq)) {
   VAR_32 = VAR_11;
   break;
  }

  if (!FUNC_17(VAR_27, VAR_23, &VAR_30, VAR_28.gc_proc)) {
   VAR_32 = VAR_9;
   break;
  }





  VAR_22->rq_verf = VAR_23->rm_call.cb_verf;
  if (!FUNC_12(VAR_27, VAR_22, VAR_28.gc_seq)) {
   VAR_32 = VAR_10;
   break;
  }

  FUNC_16(VAR_27, VAR_28.gc_seq);
  FUNC_4(&VAR_27->cl_refs);
  VAR_22->rq_auth.svc_ah_ops = &VAR_19;
  VAR_22->rq_auth.svc_ah_private = VAR_26;

  if (VAR_28.gc_proc == 130) {




   FUNC_19(&VAR_27->cl_lock);
   if (!VAR_27->cl_done_callback) {
    VAR_27->cl_done_callback = VAR_13;
    VAR_27->cl_qop = VAR_30;
    VAR_27->cl_rawcred.qop = FUNC_1(
     VAR_27->cl_rawcred.mechanism, VAR_30);
    if (!FUNC_7(VAR_27, VAR_22)) {
     VAR_32 = VAR_4;
     FUNC_20(&VAR_27->cl_lock);
     break;
    }
   }
   FUNC_20(&VAR_27->cl_lock);






   if (VAR_27->cl_locked) {
    if (VAR_27->cl_rawcred.service != VAR_28.gc_svc) {
     VAR_32 = VAR_2;
     break;
    } else if (VAR_27->cl_qop != VAR_30) {
     VAR_32 = VAR_1;
     break;
    }
   }





   if (VAR_27->cl_qop != VAR_30) {
    VAR_27->cl_qop = VAR_30;
    VAR_27->cl_rawcred.qop = FUNC_1(
     VAR_27->cl_rawcred.mechanism, VAR_30);
   }





   if (VAR_27->cl_rawcred.service != VAR_28.gc_svc) {
    VAR_27->cl_rawcred.service = VAR_28.gc_svc;
    FUNC_14(VAR_27);
   }

   VAR_32 = VAR_3;
  } else {
   if (VAR_22->rq_proc != VAR_8) {
    VAR_32 = VAR_4;
    break;
   }

   VAR_31 = FUNC_18(VAR_22,
       (xdrproc_t) VAR_21, (caddr_t) ((void*)0));

   if (!VAR_31) {
    VAR_32 = VAR_2;
    break;
   }

   FUNC_11(VAR_27);

   VAR_32 = VAR_11;
   break;
  }
  break;

 default:
  VAR_32 = VAR_0;
  break;
 }
out:
 if (VAR_27)
  FUNC_13(VAR_27);

 FUNC_21((xdrproc_t) FUNC_22, (char *) &VAR_28);
 return (VAR_32);
}
