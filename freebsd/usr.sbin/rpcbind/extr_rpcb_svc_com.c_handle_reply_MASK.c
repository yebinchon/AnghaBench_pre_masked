
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xdrproc_t ;
typedef int u_int ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {scalar_t__ proc; scalar_t__ where; } ;
struct TYPE_5__ {TYPE_1__ ar_results; int ar_verf; } ;
struct rpc_msg {int rm_xid; TYPE_2__ acpted_rply; } ;
struct rpc_err {scalar_t__ re_status; } ;
struct TYPE_6__ {char* args; int arglen; } ;
struct r_rmtcall_args {char* rmt_uaddr; int rmt_localvers; TYPE_3__ rmt_args; } ;
struct finfo {char* uaddr; int versnum; } ;
typedef int ss ;
typedef int socklen_t ;
typedef int XDR ;
typedef int SVCXPRT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (struct rpc_msg*,struct rpc_err*) ;
 char* FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct finfo* FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int,char*,int ,int ,struct sockaddr*,int*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,struct finfo*) ;
 int VAR_7 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,scalar_t__,char*) ;
 char* FUNC_13 (int ,int ) ;
 int FUNC_14 (int *,struct rpc_msg*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_15 (int *,char*,int ,int ) ;
 int FUNC_16 (int *,struct finfo*) ;

__attribute__((used)) static void
FUNC_17(int VAR_10, SVCXPRT *VAR_11)
{
 XDR VAR_12;
 struct rpc_msg VAR_13;
 struct rpc_err VAR_14;
 char *VAR_15;
 struct finfo *VAR_16;
 int VAR_17, VAR_18, VAR_19;
 struct r_rmtcall_args VAR_20;
 struct sockaddr_storage VAR_21;
 socklen_t VAR_22;




 VAR_15 = FUNC_7(VAR_1);
 if (VAR_15 == ((void*)0))
  goto done;

 do {
  VAR_22 = sizeof(VAR_21);
  VAR_17 = FUNC_8(VAR_10, VAR_15, VAR_1, 0,
       (struct sockaddr *)&VAR_21, &VAR_22);
 } while (VAR_17 < 0 && VAR_6 == VAR_0);
 if (VAR_17 < 0) {
  if (VAR_5)
   FUNC_4(VAR_7,
 "handle_reply:  recvfrom returned %d, errno %ld\n", VAR_17, VAR_6);
  goto done;
 }

 VAR_13.acpted_rply.ar_verf = VAR_4;
 VAR_13.acpted_rply.ar_results.where = 0;
 VAR_13.acpted_rply.ar_results.proc = (xdrproc_t) VAR_9;

 FUNC_15(&VAR_12, VAR_15, (u_int)VAR_17, VAR_3);
 if (!FUNC_14(&VAR_12, &VAR_13)) {
  if (VAR_5)
   (void) FUNC_4(VAR_7,
    "handle_reply:  xdr_replymsg failed\n");
  goto done;
 }
 VAR_16 = FUNC_3(VAR_13.rm_xid);






 if (VAR_16 == ((void*)0)) {
  goto done;
 }
 FUNC_1(&VAR_13, &VAR_14);
 if (VAR_14.re_status != VAR_2) {
  if (VAR_5)
   (void) FUNC_4(VAR_7, "handle_reply:  %s\n",
    FUNC_2(VAR_14.re_status));
  FUNC_10(VAR_11, VAR_16);
  goto done;
 }
 VAR_18 = FUNC_0(&VAR_12);
 VAR_19 = VAR_17 - VAR_18;
 VAR_20.rmt_args.args = &VAR_15[VAR_18];
 VAR_20.rmt_args.arglen = VAR_19;
 VAR_20.rmt_uaddr = VAR_16->uaddr;
 VAR_20.rmt_localvers = VAR_16->versnum;

 FUNC_16(VAR_11, VAR_16);
 FUNC_12(VAR_11, (xdrproc_t) VAR_8, (char *) &VAR_20);
done:
 FUNC_5(VAR_15);

 if (VAR_13.rm_xid == 0) {





 } else
  (void) FUNC_6(VAR_13.rm_xid);
 return;
}
