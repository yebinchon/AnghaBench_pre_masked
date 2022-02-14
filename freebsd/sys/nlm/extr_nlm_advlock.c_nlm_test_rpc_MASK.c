
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct rpc_callextra {int dummy; } ;
typedef scalar_t__ rpcvers_t ;
typedef int res1 ;
struct TYPE_18__ {int holder; } ;
struct TYPE_19__ {scalar_t__ stat; TYPE_3__ nlm_testrply_u; } ;
struct TYPE_20__ {TYPE_4__ stat; int cookie; } ;
typedef TYPE_5__ nlm_testres ;
struct TYPE_21__ {int alock; int exclusive; int cookie; } ;
typedef TYPE_6__ nlm_testargs ;
struct TYPE_16__ {int holder; } ;
struct TYPE_17__ {int stat; TYPE_1__ nlm4_testrply_u; } ;
struct TYPE_22__ {TYPE_2__ stat; int cookie; } ;
typedef TYPE_7__ nlm4_testres ;
struct TYPE_23__ {int alock; int exclusive; int cookie; } ;
typedef TYPE_8__ nlm4_testargs ;
typedef enum nlm4_stats { ____Placeholder_nlm4_stats } nlm4_stats ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int CLIENT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ,int) ;
 int FUNC_1 (TYPE_8__*,TYPE_7__*,int *,struct rpc_callextra*,struct timeval) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (TYPE_6__*,TYPE_5__*,int *,struct rpc_callextra*,struct timeval) ;

__attribute__((used)) static enum clnt_stat
FUNC_5(rpcvers_t VAR_3, nlm4_testargs *VAR_4, nlm4_testres *VAR_5, CLIENT *VAR_6,
    struct rpc_callextra *VAR_7, struct timeval VAR_8)
{
 if (VAR_3 == VAR_0) {
  return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 } else {
  nlm_testargs VAR_9;
  nlm_testres VAR_10;
  enum clnt_stat VAR_11;

  VAR_9 = VAR_4->cookie;
  VAR_9 = VAR_4->exclusive;
  FUNC_3(&VAR_9, &VAR_4->alock);
  FUNC_0(&VAR_10, 0, sizeof(VAR_10));

  VAR_11 = FUNC_4(&VAR_9, &VAR_10, VAR_6, VAR_7, VAR_8);

  if (VAR_11 == VAR_1) {
   VAR_5->cookie = VAR_10;
   VAR_5->stat.stat = (enum nlm4_stats) VAR_10;
   if (VAR_10 == VAR_2)
    FUNC_2(
     &VAR_5->stat.nlm4_testrply_u.holder,
     &VAR_10);
  }

  return (VAR_11);
 }
}
