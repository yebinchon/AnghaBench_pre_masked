
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xid ;
typedef int xdrproc_t ;
typedef int u_int ;
struct vnode {int dummy; } ;
struct timeval {int dummy; } ;
struct rpc_callextra {int dummy; } ;
struct nlm_host {int dummy; } ;
struct TYPE_6__ {int svid; } ;
struct TYPE_5__ {scalar_t__ stat; } ;
struct TYPE_4__ {int n_len; char* n_bytes; } ;
struct nlm4_unlockargs {TYPE_3__ alock; TYPE_2__ stat; TYPE_1__ cookie; } ;
struct nlm4_res {TYPE_3__ alock; TYPE_2__ stat; TYPE_1__ cookie; } ;
struct flock {int dummy; } ;
typedef int rpcvers_t ;
typedef int res ;
typedef int off_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int args ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int) ;
 int VAR_7 ;
 int FUNC_2 (struct nlm4_unlockargs*,int ,int) ;
 scalar_t__ VAR_8 ;
 int * FUNC_3 (struct nlm_host*,int ) ;
 int FUNC_4 (struct nlm_host*) ;
 int FUNC_5 (struct flock*,int,int,int ,size_t,void*,int ,TYPE_3__*,char*) ;
 int FUNC_6 (struct vnode*,int,struct flock*,int ,int ,int ) ;
 int FUNC_7 (int ,struct nlm4_unlockargs*,struct nlm4_unlockargs*,int *,struct rpc_callextra*,struct timeval) ;
 int VAR_9 ;
 int FUNC_8 (struct nlm4_unlockargs*,int ,char*,int) ;
 int FUNC_9 (int ,struct nlm4_unlockargs*) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int
FUNC_10(struct nlm_host *VAR_11, struct rpc_callextra *VAR_12,
    rpcvers_t VAR_13, struct timeval *VAR_14, int VAR_15,
    struct vnode *VAR_16, int VAR_17, struct flock *VAR_18, int VAR_19,
    int VAR_20, size_t VAR_21, void *VAR_22, off_t VAR_23)
{
 struct nlm4_unlockargs VAR_24;
 char VAR_25[32];
 struct nlm4_res VAR_26;
 u_int VAR_27;
 CLIENT *VAR_28;
 enum clnt_stat VAR_29;
 int VAR_30;

 FUNC_2(&VAR_24, 0, sizeof(VAR_24));
 FUNC_2(&VAR_26, 0, sizeof(VAR_26));

 VAR_30 = FUNC_5(VAR_18, VAR_19, VAR_20, VAR_13, VAR_21, VAR_22, VAR_23,
     &VAR_24.alock, VAR_25);
 if (VAR_30)
  return (VAR_30);

 for (;;) {
  VAR_28 = FUNC_3(VAR_11, VAR_3);
  if (!VAR_28)
   return (VAR_1);

  VAR_27 = FUNC_1(&VAR_9, 1);
  VAR_24.cookie.n_len = sizeof(VAR_27);
  VAR_24.cookie.n_bytes = (char*) &VAR_27;

  VAR_29 = FUNC_7(VAR_13, &VAR_24, &VAR_26, VAR_28, VAR_12, *VAR_14);

  FUNC_0(VAR_28);

  if (VAR_29 != VAR_6) {
   if (VAR_15) {
    VAR_15--;
    continue;
   }
   return (VAR_0);
  }




  FUNC_9((xdrproc_t) VAR_10, &VAR_26);

  if (VAR_26.stat.stat == VAR_8) {






   VAR_30 = FUNC_8(&VAR_24, VAR_5, "nlmgrace", 5*VAR_7);
   if (VAR_30 && VAR_30 != VAR_2)
    return (VAR_30);
   continue;
  }







  if (!(VAR_19 & VAR_4))
   FUNC_6(VAR_16, VAR_17, VAR_18, VAR_24.alock.svid,
       FUNC_4(VAR_11), VAR_23);

  return (0);
 }
}
