
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct rpc_callextra {int dummy; } ;
typedef scalar_t__ rpcvers_t ;
typedef int res1 ;
typedef int nlm_res ;
struct TYPE_6__ {int alock; int exclusive; int block; int cookie; } ;
typedef TYPE_1__ nlm_cancargs ;
typedef int nlm4_res ;
struct TYPE_7__ {int alock; int exclusive; int block; int cookie; } ;
typedef TYPE_2__ nlm4_cancargs ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int CLIENT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_2__*,int *,int *,struct rpc_callextra*,struct timeval) ;
 int FUNC_2 (TYPE_1__*,int *,int *,struct rpc_callextra*,struct timeval) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static enum clnt_stat
FUNC_5(rpcvers_t VAR_2, nlm4_cancargs *VAR_3, nlm4_res *VAR_4, CLIENT *VAR_5,
    struct rpc_callextra *VAR_6, struct timeval VAR_7)
{
 if (VAR_2 == VAR_0) {
  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 } else {
  nlm_cancargs VAR_8;
  nlm_res VAR_9;
  enum clnt_stat VAR_10;

  VAR_8 = VAR_3->cookie;
  VAR_8 = VAR_3->block;
  VAR_8 = VAR_3->exclusive;
  FUNC_4(&VAR_8, &VAR_3->alock);
  FUNC_0(&VAR_9, 0, sizeof(VAR_9));

  VAR_10 = FUNC_2(&VAR_8, &VAR_9, VAR_5, VAR_6, VAR_7);

  if (VAR_10 == VAR_1) {
   FUNC_3(VAR_4, &VAR_9);
  }

  return (VAR_10);
 }
}
