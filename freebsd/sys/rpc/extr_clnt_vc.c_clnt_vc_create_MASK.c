
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct timeval {int dummy; } ;
struct sockopt {int* sopt_val; int sopt_valsize; int sopt_name; scalar_t__ sopt_level; void* sopt_dir; } ;
struct socket {int so_state; int so_error; int so_rcv; TYPE_2__* so_proto; int so_timeo; } ;
struct sockaddr {int sa_len; } ;
struct TYPE_9__ {scalar_t__ cb_vers; scalar_t__ cb_prog; int cb_rpcvers; } ;
struct rpc_msg {TYPE_4__ rm_call; int rm_direction; scalar_t__ rm_xid; } ;
struct TYPE_8__ {int tv_sec; int tv_usec; } ;
struct ct_data {char* ct_waitchan; int cl_refs; int ct_lock; int ct_pending; scalar_t__ ct_record_resid; int * ct_record; struct socket* ct_socket; int cl_auth; struct ct_data* cl_private; int * cl_ops; void* ct_closeit; scalar_t__ ct_waitflag; int ct_mpos; int ct_mcallc; scalar_t__ ct_xid; int ct_addr; TYPE_3__ ct_wait; scalar_t__ ct_upcallrefs; void* ct_closed; void* ct_closing; scalar_t__ ct_threads; } ;
struct __rpc_sockinfo {int si_proto; int si_af; } ;
typedef int sopt ;
typedef scalar_t__ rpcvers_t ;
typedef scalar_t__ rpcprog_t ;
typedef int one ;
typedef int XDR ;
struct TYPE_6__ {int re_errno; } ;
struct TYPE_10__ {TYPE_1__ cf_error; int cf_stat; } ;
struct TYPE_7__ {int pr_flags; scalar_t__ pr_protocol; } ;
typedef struct ct_data CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 (struct socket*) ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (int *) ;
 int VAR_19 ;
 int FUNC_6 (int *) ;
 int VAR_20 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct timeval*) ;
 size_t FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct socket*,struct __rpc_sockinfo*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct sockopt*,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_13 (struct timeval*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct ct_data*,int) ;
 int FUNC_16 (int *,struct sockaddr*,int ) ;
 int FUNC_17 (int *,int ,int,char*,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,char*,int *,int ) ;
 TYPE_5__ VAR_24 ;
 int FUNC_20 (struct socket*) ;
 int FUNC_21 (struct socket*,struct sockaddr*,int ) ;
 int FUNC_22 (struct socket*,size_t,size_t) ;
 int FUNC_23 (struct socket*,struct sockopt*) ;
 int FUNC_24 (struct socket*,int ,int ,struct ct_data*) ;
 int FUNC_25 (int *,struct rpc_msg*) ;
 int FUNC_26 (int *,int ,int ,int ) ;

CLIENT *
FUNC_27(
 struct socket *VAR_25,
 struct sockaddr *VAR_26,
 const rpcprog_t VAR_27,
 const rpcvers_t VAR_28,
 size_t VAR_29,
 size_t VAR_30,
 int VAR_31)
{
 CLIENT *VAR_32;
 struct ct_data *VAR_33 = ((void*)0);
 struct timeval VAR_34;
 struct rpc_msg VAR_35;
 static uint32_t VAR_36;
 struct __rpc_sockinfo VAR_37;
 XDR VAR_38;
 int VAR_39, VAR_40, VAR_41 = 1, VAR_42;
 struct sockopt VAR_43;

 if (VAR_36 == 0)
  VAR_36 = (uint32_t)(long)VAR_26;

 VAR_32 = (CLIENT *)FUNC_14(sizeof (*VAR_32));
 VAR_33 = (struct ct_data *)FUNC_14(sizeof (*VAR_33));

 FUNC_19(&VAR_33->ct_lock, "ct->ct_lock", ((void*)0), VAR_6);
 VAR_33->ct_threads = 0;
 VAR_33->ct_closing = VAR_3;
 VAR_33->ct_closed = VAR_3;
 VAR_33->ct_upcallrefs = 0;

 if ((VAR_25->so_state & (VAR_17|VAR_16)) == 0) {
  VAR_39 = FUNC_21(VAR_25, VAR_26, VAR_23);
  FUNC_2(VAR_25);
  VAR_40 = 0;
  VAR_42 = VAR_9;
  if (VAR_31 != 0)
   VAR_42 |= VAR_7;
  while ((VAR_25->so_state & VAR_18)
      && VAR_25->so_error == 0) {
   VAR_39 = FUNC_17(&VAR_25->so_timeo, FUNC_3(VAR_25),
       VAR_42, "connec", 0);
   if (VAR_39) {
    if (VAR_39 == VAR_1 || VAR_39 == VAR_2)
     VAR_40 = 1;
    break;
   }
  }
  if (VAR_39 == 0) {
   VAR_39 = VAR_25->so_error;
   VAR_25->so_error = 0;
  }
  FUNC_4(VAR_25);
  if (VAR_39) {
   if (!VAR_40)
    VAR_25->so_state &= ~VAR_18;
   VAR_24.cf_stat = VAR_11;
   VAR_24.cf_error.re_errno = VAR_39;
   goto err;
  }
 }

 if (!FUNC_10(VAR_25, &VAR_37)) {
  goto err;
 }

 if (VAR_25->so_proto->pr_flags & VAR_8) {
  FUNC_12(&VAR_43, sizeof(VAR_43));
  VAR_43.sopt_dir = VAR_13;
  VAR_43.sopt_level = VAR_12;
  VAR_43.sopt_name = VAR_14;
  VAR_43.sopt_val = &VAR_41;
  VAR_43.sopt_valsize = sizeof(VAR_41);
  FUNC_23(VAR_25, &VAR_43);
 }

 if (VAR_25->so_proto->pr_protocol == VAR_4) {
  FUNC_12(&VAR_43, sizeof(VAR_43));
  VAR_43.sopt_dir = VAR_13;
  VAR_43.sopt_level = VAR_4;
  VAR_43.sopt_name = VAR_19;
  VAR_43.sopt_val = &VAR_41;
  VAR_43.sopt_valsize = sizeof(VAR_41);
  FUNC_23(VAR_25, &VAR_43);
 }

 VAR_33->ct_closeit = VAR_3;




 VAR_33->ct_socket = VAR_25;
 VAR_33->ct_wait.tv_sec = -1;
 VAR_33->ct_wait.tv_usec = -1;
 FUNC_16(&VAR_33->ct_addr, VAR_26, VAR_26->sa_len);




 FUNC_13(&VAR_34);
 VAR_33->ct_xid = ((uint32_t)++VAR_36) ^ FUNC_8(&VAR_34);
 VAR_35.rm_xid = VAR_33->ct_xid;
 VAR_35.rm_direction = VAR_0;
 VAR_35.rm_call.cb_rpcvers = VAR_10;
 VAR_35.rm_call.cb_prog = (uint32_t)VAR_27;
 VAR_35.rm_call.cb_vers = (uint32_t)VAR_28;




 FUNC_26(&VAR_38, VAR_33->ct_mcallc, VAR_5,
     VAR_20);
 if (! FUNC_25(&VAR_38, &VAR_35)) {
  if (VAR_33->ct_closeit) {
   FUNC_20(VAR_33->ct_socket);
  }
  goto err;
 }
 VAR_33->ct_mpos = FUNC_7(&VAR_38);
 FUNC_6(&VAR_38);
 VAR_33->ct_waitchan = "rpcrecv";
 VAR_33->ct_waitflag = 0;





 VAR_29 = FUNC_9(VAR_37.si_af, VAR_37.si_proto, (int)VAR_29);
 VAR_30 = FUNC_9(VAR_37.si_af, VAR_37.si_proto, (int)VAR_30);
 VAR_39 = FUNC_22(VAR_33->ct_socket, VAR_29, VAR_30);
 if (VAR_39 != 0) {
  if (VAR_33->ct_closeit) {
   FUNC_20(VAR_33->ct_socket);
  }
  goto err;
 }
 VAR_32->cl_refs = 1;
 VAR_32->cl_ops = &VAR_21;
 VAR_32->cl_private = VAR_33;
 VAR_32->cl_auth = FUNC_11();

 FUNC_0(&VAR_33->ct_socket->so_rcv);
 FUNC_24(VAR_33->ct_socket, VAR_15, VAR_22, VAR_33);
 FUNC_1(&VAR_33->ct_socket->so_rcv);

 VAR_33->ct_record = ((void*)0);
 VAR_33->ct_record_resid = 0;
 FUNC_5(&VAR_33->ct_pending);
 return (VAR_32);

err:
 FUNC_18(&VAR_33->ct_lock);
 FUNC_15(VAR_33, sizeof (struct ct_data));
 FUNC_15(VAR_32, sizeof (CLIENT));

 return ((CLIENT *)((void*)0));
}
