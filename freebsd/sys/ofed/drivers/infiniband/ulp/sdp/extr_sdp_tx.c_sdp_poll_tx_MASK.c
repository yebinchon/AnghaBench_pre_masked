
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct socket {int dummy; } ;
struct TYPE_5__ {TYPE_1__* rdma_inflight; int timer; } ;
struct sdp_sock {scalar_t__ state; TYPE_2__ tx_ring; struct socket* socket; } ;
struct TYPE_4__ {scalar_t__ busy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ,int ,struct sdp_sock*) ;
 int FUNC_2 (TYPE_2__) ;
 int FUNC_3 (TYPE_2__) ;
 int FUNC_4 (struct sdp_sock*) ;
 int VAR_2 ;
 int FUNC_5 (struct socket*,int *,char*,...) ;
 scalar_t__ FUNC_6 (struct sdp_sock*) ;
 int FUNC_7 (struct socket*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (struct sdp_sock*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(struct sdp_sock *VAR_5)
{
 struct socket *VAR_6 = VAR_5->socket;
 u32 VAR_7, VAR_8;

 FUNC_5(VAR_5->socket, ((void*)0), "TX timeout: inflight=%d, head=%d tail=%d",
  (u32) FUNC_8(VAR_5),
  FUNC_2(VAR_5->tx_ring), FUNC_3(VAR_5->tx_ring));

 if (FUNC_9(VAR_5->state == VAR_1)) {
  FUNC_7(VAR_6, "Socket is closed\n");
  goto out;
 }

 VAR_8 = FUNC_6(VAR_5);
 if (!VAR_8)
  FUNC_0(VAR_4);
 else
  FUNC_0(VAR_3);

 VAR_7 = (u32) FUNC_8(VAR_5);
 FUNC_5(VAR_5->socket, ((void*)0), "finished tx processing. inflight = %d",
     VAR_7);




 if (VAR_7)
  FUNC_1(&VAR_5->tx_ring.timer, VAR_0,
      VAR_2, VAR_5);
out:






 return;
}
