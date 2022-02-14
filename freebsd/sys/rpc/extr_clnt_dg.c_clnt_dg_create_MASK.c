
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_long ;
struct timeval {int dummy; } ;
struct sockbuf {scalar_t__ sb_upcall; scalar_t__ sb_upcallarg; } ;
struct socket {struct sockbuf so_rcv; } ;
struct sockaddr {scalar_t__ sa_len; } ;
struct TYPE_8__ {int cb_vers; int cb_prog; } ;
struct rpc_msg {TYPE_3__ rm_call; int rm_xid; } ;
struct TYPE_7__ {int tv_sec; int tv_usec; } ;
struct TYPE_6__ {int tv_sec; scalar_t__ tv_usec; } ;
struct cu_socket {size_t cu_sendsz; size_t cu_recvsz; char* cu_waitchan; int cu_cwnd; int cs_refs; int cl_refs; int * cl_netid; int * cl_tp; int cl_auth; scalar_t__ cl_private; int * cl_ops; int cs_pending; scalar_t__ cs_upcallrefs; int cs_lock; struct socket* cu_socket; void* cu_closeit; int cu_mcalllen; int cu_mcallc; int cu_xid; void* cu_cwnd_wait; scalar_t__ cu_sent; scalar_t__ cu_waitflag; void* cu_connected; void* cu_connect; void* cu_async; TYPE_2__ cu_total; TYPE_1__ cu_wait; scalar_t__ cu_rlen; int cu_raddr; void* cu_closed; void* cu_closing; scalar_t__ cu_threads; } ;
struct cu_data {size_t cu_sendsz; size_t cu_recvsz; char* cu_waitchan; int cu_cwnd; int cs_refs; int cl_refs; int * cl_netid; int * cl_tp; int cl_auth; scalar_t__ cl_private; int * cl_ops; int cs_pending; scalar_t__ cs_upcallrefs; int cs_lock; struct socket* cu_socket; void* cu_closeit; int cu_mcalllen; int cu_mcallc; int cu_xid; void* cu_cwnd_wait; scalar_t__ cu_sent; scalar_t__ cu_waitflag; void* cu_connected; void* cu_connect; void* cu_async; TYPE_2__ cu_total; TYPE_1__ cu_wait; scalar_t__ cu_rlen; int cu_raddr; void* cu_closed; void* cu_closing; scalar_t__ cu_threads; } ;
struct __rpc_sockinfo {int si_proto; int si_af; } ;
typedef int rpcvers_t ;
typedef int rpcprog_t ;
typedef scalar_t__ caddr_t ;
typedef int XDR ;
struct TYPE_9__ {int re_errno; } ;
struct TYPE_10__ {TYPE_4__ cf_error; void* cf_stat; } ;
typedef struct cu_socket CLIENT ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (struct sockbuf*) ;
 int FUNC_1 (struct sockbuf*) ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct timeval*) ;
 size_t FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct socket*,struct __rpc_sockinfo*) ;
 int FUNC_7 () ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_8 (struct timeval*) ;
 struct cu_socket* FUNC_9 (int) ;
 int FUNC_10 (struct cu_socket*,int) ;
 int FUNC_11 (int *,struct sockaddr*,size_t) ;
 int FUNC_12 (int *,char*,int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*) ;
 size_t FUNC_16 (size_t,int) ;
 TYPE_5__ VAR_12 ;
 int FUNC_17 (struct socket*,int ,int ) ;
 int FUNC_18 (struct socket*,int ,scalar_t__,struct cu_socket*) ;
 int FUNC_19 (int *,struct rpc_msg*) ;
 int FUNC_20 (int *,int ,int ,int ) ;

CLIENT *
FUNC_21(
 struct socket *VAR_13,
 struct sockaddr *VAR_14,
 rpcprog_t VAR_15,
 rpcvers_t VAR_16,
 size_t VAR_17,
 size_t VAR_18)
{
 CLIENT *VAR_19 = ((void*)0);
 struct cu_data *VAR_20 = ((void*)0);
 struct cu_socket *VAR_21 = ((void*)0);
 struct sockbuf *VAR_22;
 struct timeval VAR_23;
 struct rpc_msg VAR_24;
 struct __rpc_sockinfo VAR_25;
 XDR VAR_26;
 int VAR_27;

 if (VAR_14 == ((void*)0)) {
  VAR_12.cf_stat = VAR_7;
  return (((void*)0));
 }

 if (!FUNC_6(VAR_13, &VAR_25)) {
  VAR_12.cf_stat = VAR_6;
  VAR_12.cf_error.re_errno = 0;
  return (((void*)0));
 }




 VAR_17 = FUNC_5(VAR_25.si_af, VAR_25.si_proto, (int)VAR_17);
 VAR_18 = FUNC_5(VAR_25.si_af, VAR_25.si_proto, (int)VAR_18);
 if ((VAR_17 == 0) || (VAR_18 == 0)) {
  VAR_12.cf_stat = VAR_6;
  VAR_12.cf_error.re_errno = 0;
  return (((void*)0));
 }

 VAR_19 = FUNC_9(sizeof (CLIENT));




 VAR_17 = FUNC_16(VAR_17 + 3, 4);
 VAR_18 = FUNC_16(VAR_18 + 3, 4);
 VAR_20 = FUNC_9(sizeof (*VAR_20));
 VAR_20->cu_threads = 0;
 VAR_20->cu_closing = VAR_0;
 VAR_20->cu_closed = VAR_0;
 (void) FUNC_11(&VAR_20->cu_raddr, VAR_14, (size_t)VAR_14->sa_len);
 VAR_20->cu_rlen = VAR_14->sa_len;

 VAR_20->cu_wait.tv_sec = 3;
 VAR_20->cu_wait.tv_usec = 0;
 VAR_20->cu_total.tv_sec = -1;
 VAR_20->cu_total.tv_usec = -1;
 VAR_20->cu_sendsz = VAR_17;
 VAR_20->cu_recvsz = VAR_18;
 VAR_20->cu_async = VAR_0;
 VAR_20->cu_connect = VAR_0;
 VAR_20->cu_connected = VAR_0;
 VAR_20->cu_waitchan = "rpcrecv";
 VAR_20->cu_waitflag = 0;
 VAR_20->cu_cwnd = VAR_1 / 2;
 VAR_20->cu_sent = 0;
 VAR_20->cu_cwnd_wait = VAR_0;
 (void) FUNC_8(&VAR_23);
 VAR_20->cu_xid = FUNC_4(&VAR_23);
 VAR_24.rm_xid = VAR_20->cu_xid;
 VAR_24.rm_call.cb_prog = VAR_15;
 VAR_24.rm_call.cb_vers = VAR_16;
 FUNC_20(&VAR_26, VAR_20->cu_mcallc, VAR_2, VAR_9);
 if (! FUNC_19(&VAR_26, &VAR_24)) {
  VAR_12.cf_stat = VAR_4;
  VAR_12.cf_error.re_errno = 0;
  goto err2;
 }
 VAR_20->cu_mcalllen = FUNC_3(&VAR_26);






 VAR_20->cu_closeit = VAR_0;
 VAR_20->cu_socket = VAR_13;
 VAR_27 = FUNC_17(VAR_13, (u_long)VAR_17, (u_long)VAR_18);
 if (VAR_27 != 0) {
  VAR_12.cf_stat = VAR_5;
  VAR_12.cf_error.re_errno = VAR_27;
  goto err2;
 }

 VAR_22 = &VAR_13->so_rcv;
 FUNC_0(&VAR_13->so_rcv);
recheck_socket:
 if (VAR_22->sb_upcall) {
  if (VAR_22->sb_upcall != VAR_11) {
   FUNC_1(&VAR_13->so_rcv);
   FUNC_15("clnt_dg_create(): socket already has an incompatible upcall\n");
   goto err2;
  }
  VAR_21 = (struct cu_socket *) VAR_22->sb_upcallarg;
  FUNC_13(&VAR_21->cs_lock);
  VAR_21->cs_refs++;
  FUNC_14(&VAR_21->cs_lock);
 } else {




  FUNC_1(&VAR_13->so_rcv);
  VAR_21 = FUNC_9(sizeof(*VAR_21));
  FUNC_0(&VAR_13->so_rcv);
  if (VAR_22->sb_upcall) {



   FUNC_10(VAR_21, sizeof(*VAR_21));
   goto recheck_socket;
  }
  FUNC_12(&VAR_21->cs_lock, "cs->cs_lock", ((void*)0), VAR_3);
  VAR_21->cs_refs = 1;
  VAR_21->cs_upcallrefs = 0;
  FUNC_2(&VAR_21->cs_pending);
  FUNC_18(VAR_13, VAR_8, VAR_11, VAR_21);
 }
 FUNC_1(&VAR_13->so_rcv);

 VAR_19->cl_refs = 1;
 VAR_19->cl_ops = &VAR_10;
 VAR_19->cl_private = (caddr_t)(void *)VAR_20;
 VAR_19->cl_auth = FUNC_7();
 VAR_19->cl_tp = ((void*)0);
 VAR_19->cl_netid = ((void*)0);
 return (VAR_19);
err2:
 FUNC_10(VAR_19, sizeof (CLIENT));
 FUNC_10(VAR_20, sizeof (*VAR_20));

 return (((void*)0));
}
