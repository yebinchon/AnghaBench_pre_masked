
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
struct nlm4_holder {scalar_t__ exclusive; int svid; int l_len; int l_offset; } ;
struct TYPE_5__ {struct nlm4_holder holder; } ;
struct TYPE_6__ {scalar_t__ stat; TYPE_2__ nlm4_testrply_u; } ;
struct TYPE_4__ {int n_len; char* n_bytes; } ;
struct nlm4_testres {int exclusive; TYPE_3__ stat; TYPE_1__ cookie; int alock; } ;
struct nlm4_testargs {int exclusive; TYPE_3__ stat; TYPE_1__ cookie; int alock; } ;
struct flock {scalar_t__ l_type; scalar_t__ l_sysid; int l_whence; int l_pid; int l_len; int l_start; } ;
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
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,int) ;
 int VAR_11 ;
 int FUNC_3 (struct nlm4_testres*,int ,int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int * FUNC_4 (struct nlm_host*,int ) ;
 int FUNC_5 (struct flock*,int,int,int ,size_t,void*,int ,int *,char*) ;
 int FUNC_6 (int ,struct nlm4_testres*,struct nlm4_testres*,int *,struct rpc_callextra*,struct timeval) ;
 int VAR_14 ;
 int FUNC_7 (struct nlm4_testres*,int ,char*,int) ;
 int FUNC_8 (int ,struct nlm4_testres*) ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static int
FUNC_9(struct nlm_host *VAR_16, struct rpc_callextra *VAR_17,
    rpcvers_t VAR_18, struct timeval *VAR_19, int VAR_20,
    struct vnode *VAR_21, int VAR_22, struct flock *VAR_23, int VAR_24,
    int VAR_25, size_t VAR_26, void *VAR_27, off_t VAR_28)
{
 struct nlm4_testargs VAR_29;
 char VAR_30[32];
 struct nlm4_testres VAR_31;
 u_int VAR_32;
 CLIENT *VAR_33;
 enum clnt_stat VAR_34;
 int VAR_35;
 int VAR_36;

 FUNC_1(!(VAR_24 & VAR_4), ("unexpected F_FLOCK for F_GETLK"));

 FUNC_3(&VAR_29, 0, sizeof(VAR_29));
 FUNC_3(&VAR_31, 0, sizeof(VAR_31));

 VAR_35 = (VAR_23->l_type == VAR_7);

 VAR_36 = FUNC_5(VAR_23, VAR_24, VAR_25, VAR_18, VAR_26, VAR_27, VAR_28,
     &VAR_29.alock, VAR_30);
 if (VAR_36)
  return (VAR_36);
 VAR_29.exclusive = VAR_35;

 for (;;) {
  VAR_33 = FUNC_4(VAR_16, VAR_3);
  if (!VAR_33)
   return (VAR_1);

  VAR_32 = FUNC_2(&VAR_14, 1);
  VAR_29.cookie.n_len = sizeof(VAR_32);
  VAR_29.cookie.n_bytes = (char*) &VAR_32;

  VAR_34 = FUNC_6(VAR_18, &VAR_29, &VAR_31, VAR_33, VAR_17, *VAR_19);

  FUNC_0(VAR_33);

  if (VAR_34 != VAR_9) {
   if (VAR_20) {
    VAR_20--;
    continue;
   }
   return (VAR_0);
  }

  if (VAR_31.stat.stat == VAR_13) {






   FUNC_8((xdrproc_t) VAR_15, &VAR_31);
   VAR_36 = FUNC_7(&VAR_29, VAR_8, "nlmgrace", 5*VAR_11);
   if (VAR_36 && VAR_36 != VAR_2)
    return (VAR_36);
   continue;
  }

  if (VAR_31.stat.stat == VAR_12) {
   struct nlm4_holder *VAR_37 =
    &VAR_31.stat.nlm4_testrply_u.holder;
   VAR_23->l_start = VAR_37->l_offset;
   VAR_23->l_len = VAR_37->l_len;
   VAR_23->l_pid = VAR_37->svid;
   if (VAR_37->exclusive)
    VAR_23->l_type = VAR_7;
   else
    VAR_23->l_type = VAR_5;
   VAR_23->l_whence = VAR_10;
   VAR_23->l_sysid = 0;
  } else {
   VAR_23->l_type = VAR_6;
  }

  FUNC_8((xdrproc_t) VAR_15, &VAR_31);

  return (0);
 }
}
