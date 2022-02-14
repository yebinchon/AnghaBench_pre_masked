
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int sk_sleep; } ;
struct TYPE_4__ {TYPE_1__* rdma_inflight; } ;
struct sdp_sock {struct socket* socket; TYPE_2__ tx_ring; int qp_active; } ;
struct TYPE_3__ {int busy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sdp_sock*) ;
 int FUNC_4 (struct sdp_sock*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (struct socket*,char*) ;
 int FUNC_7 (struct socket*,int *,char*) ;
 int FUNC_8 (struct socket*,char*) ;
 int FUNC_9 (struct socket*,long*,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_10(struct sdp_sock *VAR_3)
{
 struct socket *VAR_4 = VAR_3->socket;
 long VAR_5 = VAR_0 * 5;
 FUNC_0(VAR_2);

 FUNC_6(VAR_4, "Sleep till RDMA wr finished.\n");
 while (1) {
  FUNC_5(VAR_4->sk_sleep, &VAR_2, VAR_1);

  if (!VAR_3->tx_ring.rdma_inflight->busy) {
   FUNC_6(VAR_4, "got rdma cqe\n");
   break;
  }

  if (!VAR_3->qp_active) {
   FUNC_6(VAR_4, "QP destroyed\n");
   break;
  }

  if (!VAR_5) {
   FUNC_8(VAR_4, "Panic: Timed out waiting for RDMA read\n");
   FUNC_1(1);
   break;
  }

  FUNC_4(VAR_3);

  FUNC_7(VAR_4, ((void*)0), "Going to sleep");
  FUNC_9(VAR_4, &VAR_5,
   !VAR_3->tx_ring.rdma_inflight->busy);
  FUNC_7(VAR_4, ((void*)0), "Woke up");
  FUNC_6(VAR_3->socket, "woke up sleepers\n");

  FUNC_3(VAR_3);
 }

 FUNC_2(VAR_4->sk_sleep, &VAR_2);

 FUNC_6(VAR_4, "Finished waiting\n");
}
