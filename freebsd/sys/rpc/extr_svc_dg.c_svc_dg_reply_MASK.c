
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct sockaddr {int dummy; } ;
struct TYPE_5__ {scalar_t__ ar_stat; } ;
struct TYPE_6__ {scalar_t__ rp_stat; TYPE_1__ rp_acpt; } ;
struct rpc_msg {TYPE_2__ rm_reply; } ;
struct mbuf {int dummy; } ;
typedef scalar_t__ bool_t ;
typedef int XDR ;
struct TYPE_7__ {int * xp_p2; int xp_socket; } ;
typedef TYPE_3__ SVCXPRT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct mbuf*) ;
 struct mbuf* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct sockaddr*,int *,struct mbuf*,int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *,struct rpc_msg*) ;
 int FUNC_6 (int *,struct mbuf*) ;
 int FUNC_7 (int *,struct mbuf*,int ) ;

__attribute__((used)) static bool_t
FUNC_8(SVCXPRT *VAR_8, struct rpc_msg *VAR_9,
    struct sockaddr *VAR_10, struct mbuf *VAR_11, uint32_t *VAR_12)
{
 XDR VAR_13;
 struct mbuf *VAR_14;
 bool_t VAR_15 = VAR_5;
 int VAR_16;

 VAR_14 = FUNC_3(VAR_3, VAR_2);

 FUNC_7(&VAR_13, VAR_14, VAR_6);

 if (VAR_9->rm_reply.rp_stat == VAR_1 &&
     VAR_9->rm_reply.rp_acpt.ar_stat == VAR_4) {
  if (!FUNC_5(&VAR_13, VAR_9))
   VAR_15 = VAR_0;
  else
   FUNC_6(&VAR_13, VAR_11);
 } else {
  VAR_15 = FUNC_5(&VAR_13, VAR_9);
 }

 if (VAR_15) {
  FUNC_1(VAR_14);
  VAR_16 = FUNC_4(VAR_8->xp_socket, VAR_10, ((void*)0), VAR_14, ((void*)0),
      0, VAR_7);
  if (!VAR_16) {
   VAR_15 = VAR_5;
  }
 } else {
  FUNC_2(VAR_14);
 }

 FUNC_0(&VAR_13);
 VAR_8->xp_p2 = ((void*)0);

 return (VAR_15);
}
