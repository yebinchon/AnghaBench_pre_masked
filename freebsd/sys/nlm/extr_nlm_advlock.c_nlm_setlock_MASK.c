
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xid ;
typedef int xdrproc_t ;
typedef scalar_t__ u_int ;
struct vnode {int dummy; } ;
struct timeval {int dummy; } ;
struct rpc_callextra {int dummy; } ;
struct nlm_host {int dummy; } ;
struct TYPE_7__ {int svid; } ;
struct TYPE_6__ {int stat; } ;
struct TYPE_5__ {int n_len; char* n_bytes; } ;
struct nlm4_res {int block; int exclusive; TYPE_3__ alock; TYPE_2__ stat; TYPE_1__ cookie; int state; int reclaim; } ;
struct nlm4_lockargs {int block; int exclusive; TYPE_3__ alock; TYPE_2__ stat; TYPE_1__ cookie; int state; int reclaim; } ;
struct flock {scalar_t__ l_type; } ;
typedef int rpcvers_t ;
typedef int res ;
typedef int off_t ;
typedef struct nlm4_res nlm4_cancargs ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int cancel ;
typedef int bool_t ;
typedef int args ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int *,int) ;
 int VAR_9 ;
 int FUNC_2 (struct nlm4_res*,int ,int) ;
 int VAR_10 ;


 int FUNC_3 (int ,struct nlm4_res*,struct nlm4_res*,int *,struct rpc_callextra*,struct timeval) ;

 int FUNC_4 (void*) ;
 int * FUNC_5 (struct nlm_host*,int) ;
 int FUNC_6 (struct nlm_host*) ;
 int FUNC_7 (struct nlm_host*,int ) ;
 int FUNC_8 (struct flock*,int,int,int ,size_t,void*,int ,TYPE_3__*,char*) ;
 int FUNC_9 (int ,struct nlm4_res*,struct nlm4_res*,int *,struct rpc_callextra*,struct timeval) ;
 int FUNC_10 (int) ;
 int VAR_11 ;
 int FUNC_11 (struct vnode*,int,struct flock*,int ,int ,int ) ;
 void* FUNC_12 (TYPE_3__*,struct vnode*) ;
 int FUNC_13 (void*,int) ;
 int VAR_12 ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 (struct nlm4_res*,int ,char*,int) ;
 int FUNC_16 (int ,struct nlm4_res*) ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static int
FUNC_17(struct nlm_host *VAR_14, struct rpc_callextra *VAR_15,
    rpcvers_t VAR_16, struct timeval *VAR_17, int VAR_18,
    struct vnode *VAR_19, int VAR_20, struct flock *VAR_21, int VAR_22,
    int VAR_23, size_t VAR_24, void *VAR_25, off_t VAR_26, bool_t VAR_27)
{
 struct nlm4_lockargs VAR_28;
 char VAR_29[32];
 struct nlm4_res VAR_30;
 u_int VAR_31;
 CLIENT *VAR_32;
 enum clnt_stat VAR_33;
 int VAR_34, VAR_35, VAR_36;
 void *VAR_37 = ((void*)0);
 int VAR_38;

 FUNC_2(&VAR_28, 0, sizeof(VAR_28));
 FUNC_2(&VAR_30, 0, sizeof(VAR_30));

 VAR_35 = (VAR_22 & VAR_4) ? VAR_8 : VAR_3;
 VAR_36 = (VAR_21->l_type == VAR_5);

 VAR_38 = FUNC_8(VAR_21, VAR_22, VAR_23, VAR_16, VAR_24, VAR_25, VAR_26,
     &VAR_28.alock, VAR_29);
 if (VAR_38)
  return (VAR_38);
 VAR_28.block = VAR_35;
 VAR_28.exclusive = VAR_36;
 VAR_28.reclaim = VAR_27;
 VAR_28.state = VAR_11;

 VAR_34 = 5*VAR_9;
 for (;;) {
  VAR_32 = FUNC_5(VAR_14, VAR_3);
  if (!VAR_32)
   return (VAR_1);

  if (VAR_35)
   VAR_37 = FUNC_12(&VAR_28.alock, VAR_19);

  VAR_31 = FUNC_1(&VAR_12, 1);
  VAR_28.cookie.n_len = sizeof(VAR_31);
  VAR_28.cookie.n_bytes = (char*) &VAR_31;

  VAR_33 = FUNC_9(VAR_16, &VAR_28, &VAR_30, VAR_32, VAR_15, *VAR_17);

  FUNC_0(VAR_32);

  if (VAR_33 != VAR_7) {
   if (VAR_35)
    FUNC_4(VAR_37);
   if (VAR_18) {
    VAR_18--;
    continue;
   }
   return (VAR_0);
  }




  FUNC_16((xdrproc_t) VAR_13, &VAR_30);

  if (VAR_35 && VAR_30.stat.stat != VAR_10)
   FUNC_4(VAR_37);

  if (VAR_30.stat.stat == 130) {






   VAR_38 = FUNC_15(&VAR_28, VAR_6, "nlmgrace", VAR_34);
   if (VAR_38 && VAR_38 != VAR_2)
    return (VAR_38);
   VAR_34 = 2*VAR_34;
   if (VAR_34 > 30*VAR_9)
    VAR_34 = 30*VAR_9;
   continue;
  }

  if (VAR_35 && VAR_30.stat.stat == VAR_10) {







   VAR_38 = FUNC_13(VAR_37, VAR_34);
   if (VAR_38 == VAR_2) {
    VAR_34 = 2*VAR_34;
    if (VAR_34 > 30*VAR_9)
     VAR_34 = 30*VAR_9;
    continue;
   }
   if (VAR_38) {




    nlm4_cancargs VAR_39;

    FUNC_2(&VAR_39, 0, sizeof(VAR_39));

    VAR_31 = FUNC_1(&VAR_12, 1);
    VAR_39.cookie.n_len = sizeof(VAR_31);
    VAR_39.cookie.n_bytes = (char*) &VAR_31;
    VAR_39.block = VAR_35;
    VAR_39.exclusive = VAR_36;
    VAR_39.alock = VAR_28.alock;

    do {
     VAR_32 = FUNC_5(VAR_14, VAR_3);
     if (!VAR_32)

      return (VAR_1);

     VAR_33 = FUNC_3(VAR_16, &VAR_39,
         &VAR_30, VAR_32, VAR_15, *VAR_17);

     FUNC_0(VAR_32);

     if (VAR_33 != VAR_7) {
      FUNC_14("nlmcancel", 10*VAR_9);
     }
    } while (VAR_33 != VAR_7);




    FUNC_16((xdrproc_t) VAR_13, &VAR_30);

    switch (VAR_30.stat.stat) {
    case 128:







     VAR_38 = 0;
     break;

    case 130:







     break;

    case 129:




     break;

    default:






     break;
    }

   }
  } else {
   VAR_38 = FUNC_10(VAR_30.stat.stat);
  }

  if (!VAR_38 && !VAR_27) {
   FUNC_11(VAR_19, VAR_20, VAR_21, VAR_28.alock.svid,
       FUNC_6(VAR_14), VAR_26);
   FUNC_7(VAR_14, 0);
  }

  return (VAR_38);
 }
}
