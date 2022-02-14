
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct rpc_callextra {int rc_feedback_arg; int (* rc_feedback ) (int ,int ,int ) ;} ;
struct TYPE_9__ {int tv_sec; scalar_t__ tv_usec; } ;
struct rc_data {int rc_retries; int rc_lock; TYPE_2__* rc_client; TYPE_1__ rc_timeout; int rc_err; scalar_t__ rc_intr; scalar_t__ rc_closed; } ;
struct mbuf {int dummy; } ;
typedef int rpcproc_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_10__ {scalar_t__ cl_private; } ;
typedef TYPE_2__ CLIENT ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,struct rpc_callextra*,int ,struct mbuf*,struct mbuf**,struct timeval) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *,int ,char*,int ) ;

__attribute__((used)) static enum clnt_stat
FUNC_10(
 CLIENT *VAR_13,
 struct rpc_callextra *VAR_14,
 rpcproc_t VAR_15,
 struct mbuf *VAR_16,
 struct mbuf **VAR_17,
 struct timeval VAR_18)
{
 struct rc_data *VAR_19 = (struct rc_data *)VAR_13->cl_private;
 CLIENT *VAR_20;
 enum clnt_stat VAR_21;
 int VAR_22, VAR_23;

 VAR_22 = 0;
 do {
  FUNC_6(&VAR_19->rc_lock);
  if (VAR_19->rc_closed) {
   FUNC_7(&VAR_19->rc_lock);
   return (VAR_5);
  }

  if (!VAR_19->rc_client) {
   FUNC_7(&VAR_19->rc_lock);
   VAR_21 = FUNC_5(VAR_13);
   if (VAR_21 == VAR_9) {
    VAR_23 = FUNC_9(&VAR_11,
        VAR_19->rc_intr ? VAR_3 : 0, "rpccon", VAR_12);
    if (VAR_23 == VAR_0 || VAR_23 == VAR_1)
     return (VAR_7);
    VAR_22++;
    if (VAR_22 >= VAR_19->rc_retries)
     return (VAR_21);
    continue;
   }
   if (VAR_21 != VAR_8)
    return (VAR_21);
   FUNC_6(&VAR_19->rc_lock);
  }

  if (!VAR_19->rc_client) {
   FUNC_7(&VAR_19->rc_lock);
   VAR_21 = VAR_6;
   continue;
  }
  FUNC_0(VAR_19->rc_client);
  VAR_20 = VAR_19->rc_client;
  FUNC_7(&VAR_19->rc_lock);
  VAR_21 = FUNC_1(VAR_20, VAR_14, VAR_15, VAR_16,
      VAR_17, VAR_18);

  if (VAR_21 != VAR_8) {
   if (!VAR_14)
    FUNC_2(VAR_20, &VAR_19->rc_err);
  }

  if (VAR_21 == VAR_10) {




   if ((VAR_19->rc_timeout.tv_sec == 0
    && VAR_19->rc_timeout.tv_usec == 0)
       || (VAR_19->rc_timeout.tv_sec == -1
    && VAR_18.tv_sec == 0
    && VAR_18.tv_usec == 0)) {
    FUNC_3(VAR_20);
    break;
   }
  }

  if (VAR_21 == VAR_10 || VAR_21 == VAR_5
      || VAR_21 == VAR_4) {
   VAR_22++;
   if (VAR_22 >= VAR_19->rc_retries) {
    FUNC_3(VAR_20);
    break;
   }

   if (VAR_14 && VAR_14->rc_feedback)
    VAR_14->rc_feedback(VAR_2, VAR_15,
        VAR_14->rc_feedback_arg);

   FUNC_6(&VAR_19->rc_lock);
   if (VAR_19->rc_client == VAR_20) {
    VAR_19->rc_client = ((void*)0);
    FUNC_7(&VAR_19->rc_lock);
    FUNC_3(VAR_20);
   } else {
    FUNC_7(&VAR_19->rc_lock);
   }
   FUNC_3(VAR_20);
  } else {
   FUNC_3(VAR_20);
   break;
  }
 } while (VAR_21 != VAR_8);

 FUNC_4(VAR_21 != VAR_8 || *VAR_17,
     ("RPC_SUCCESS without reply"));

 return (VAR_21);
}
