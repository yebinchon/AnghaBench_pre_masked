
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rpc_callextra {int rc_auth; } ;
struct TYPE_8__ {int l_len; int l_offset; int svid; int oh; int fh; int caller_name; } ;
struct TYPE_11__ {TYPE_2__ alock; int exclusive; int cookie; } ;
struct nlm_async_lock {TYPE_3__* af_host; scalar_t__ af_expiretime; int af_rpc; TYPE_6__ af_granted; } ;
struct TYPE_7__ {int l_len; int l_offset; int svid; int oh; int fh; int caller_name; } ;
struct TYPE_10__ {TYPE_1__ alock; int exclusive; int cookie; } ;
typedef TYPE_4__ nlm_testargs ;
typedef int ext ;
struct TYPE_9__ {scalar_t__ nh_vers; int nh_lock; int nh_granted; int nh_pending; int nh_sysid; int nh_caller_name; } ;


 int FUNC_0 (int,char*,struct nlm_async_lock*,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,struct nlm_async_lock*,int ) ;
 int FUNC_2 (int *,struct nlm_async_lock*,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct rpc_callextra*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_6__*,int *,int ,struct rpc_callextra*,int ) ;
 int VAR_3 ;
 int FUNC_9 (TYPE_4__*,int *,int ,struct rpc_callextra*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_10(void *VAR_6, int VAR_7)
{
 struct nlm_async_lock *VAR_8 = (struct nlm_async_lock *) VAR_6;
 struct rpc_callextra VAR_9;

 FUNC_0(2, "NLM: async lock %p for %s (sysid %d) granted,"
     " cookie %d:%d\n", VAR_8, VAR_8->af_host->nh_caller_name,
     VAR_8->af_host->nh_sysid, FUNC_7(&VAR_8->af_granted.cookie),
     FUNC_6(&VAR_8->af_granted.cookie));
 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.rc_auth = VAR_3;
 if (VAR_8->af_host->nh_vers == VAR_1) {
  FUNC_8(&VAR_8->af_granted,
      ((void*)0), VAR_8->af_rpc, &VAR_9, VAR_4);
 } else {



  nlm_testargs VAR_10;
  VAR_10.cookie = VAR_8->af_granted.cookie;
  VAR_10.exclusive = VAR_8->af_granted.exclusive;
  VAR_10.alock.caller_name =
   VAR_8->af_granted.alock.caller_name;
  VAR_10.alock.fh = VAR_8->af_granted.alock.fh;
  VAR_10.alock.oh = VAR_8->af_granted.alock.oh;
  VAR_10.alock.svid = VAR_8->af_granted.alock.svid;
  VAR_10.alock.l_offset =
   VAR_8->af_granted.alock.l_offset;
  VAR_10.alock.l_len =
   VAR_8->af_granted.alock.l_len;

  FUNC_9(&VAR_10,
      ((void*)0), VAR_8->af_rpc, &VAR_9, VAR_4);
 }




 VAR_8->af_expiretime = VAR_5 + VAR_0;
 FUNC_4(&VAR_8->af_host->nh_lock);
 FUNC_2(&VAR_8->af_host->nh_pending, VAR_8, VAR_2);
 FUNC_1(&VAR_8->af_host->nh_granted, VAR_8, VAR_2);
 FUNC_5(&VAR_8->af_host->nh_lock);
}
