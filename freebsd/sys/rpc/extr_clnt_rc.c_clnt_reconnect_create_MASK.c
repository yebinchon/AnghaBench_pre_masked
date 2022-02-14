
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_len; } ;
struct TYPE_8__ {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_7__ {int tv_sec; int tv_usec; } ;
struct rc_data {size_t rc_sendsz; size_t rc_recvsz; char* rc_waitchan; int * rc_client; int rc_ucred; void* rc_closed; void* rc_connecting; scalar_t__ rc_intr; void* rc_privport; int rc_retries; TYPE_2__ rc_retry; TYPE_1__ rc_timeout; int rc_vers; int rc_prog; struct netconfig* rc_nconf; int rc_addr; int rc_lock; } ;
struct netconfig {int dummy; } ;
typedef int rpcvers_t ;
typedef int rpcprog_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_11__ {int td_ucred; } ;
struct TYPE_10__ {int cf_stat; } ;
struct TYPE_9__ {int cl_refs; int * cl_netid; int * cl_tp; int cl_auth; scalar_t__ cl_private; int * cl_ops; } ;
typedef TYPE_3__ CLIENT ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 TYPE_5__* VAR_5 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,struct sockaddr*,size_t) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 TYPE_4__ VAR_6 ;

CLIENT *
FUNC_5(
 struct netconfig *VAR_7,
 struct sockaddr *VAR_8,
 rpcprog_t VAR_9,
 rpcvers_t VAR_10,
 size_t VAR_11,
 size_t VAR_12)
{
 CLIENT *VAR_13 = ((void*)0);
 struct rc_data *VAR_14 = ((void*)0);

 if (VAR_8 == ((void*)0)) {
  VAR_6.cf_stat = VAR_3;
  return (((void*)0));
 }

 VAR_13 = FUNC_2(sizeof (CLIENT));
 VAR_14 = FUNC_2(sizeof (*VAR_14));
 FUNC_4(&VAR_14->rc_lock, "rc->rc_lock", ((void*)0), VAR_2);
 (void) FUNC_3(&VAR_14->rc_addr, VAR_8, (size_t)VAR_8->sa_len);
 VAR_14->rc_nconf = VAR_7;
 VAR_14->rc_prog = VAR_9;
 VAR_14->rc_vers = VAR_10;
 VAR_14->rc_sendsz = VAR_11;
 VAR_14->rc_recvsz = VAR_12;
 VAR_14->rc_timeout.tv_sec = -1;
 VAR_14->rc_timeout.tv_usec = -1;
 VAR_14->rc_retry.tv_sec = 3;
 VAR_14->rc_retry.tv_usec = 0;
 VAR_14->rc_retries = VAR_1;
 VAR_14->rc_privport = VAR_0;
 VAR_14->rc_waitchan = "rpcrecv";
 VAR_14->rc_intr = 0;
 VAR_14->rc_connecting = VAR_0;
 VAR_14->rc_closed = VAR_0;
 VAR_14->rc_ucred = FUNC_1(VAR_5->td_ucred);
 VAR_14->rc_client = ((void*)0);

 VAR_13->cl_refs = 1;
 VAR_13->cl_ops = &VAR_4;
 VAR_13->cl_private = (caddr_t)(void *)VAR_14;
 VAR_13->cl_auth = FUNC_0();
 VAR_13->cl_tp = ((void*)0);
 VAR_13->cl_netid = ((void*)0);
 return (VAR_13);
}
