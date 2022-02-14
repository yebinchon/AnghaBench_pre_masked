
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct TYPE_4__ {int cq; } ;
struct TYPE_3__ {int cq; } ;
struct sdp_sock {scalar_t__ state; TYPE_2__ tx_ring; TYPE_1__ rx_ring; int rxctlq; int qp_active; struct socket* socket; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sdp_sock*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct sdp_sock*) ;
 struct mbuf* FUNC_2 (int *) ;
 int FUNC_3 (struct socket*,char*) ;
 int FUNC_4 (struct sdp_sock*) ;
 int FUNC_5 (struct sdp_sock*,int ) ;
 int FUNC_6 (struct socket*,int *,char*) ;
 int FUNC_7 (struct sdp_sock*,struct mbuf*) ;
 int FUNC_8 (struct sdp_sock*,int) ;
 scalar_t__ FUNC_9 (struct sdp_sock*) ;
 scalar_t__ FUNC_10 (struct sdp_sock*) ;

void
FUNC_11(struct sdp_sock *VAR_3)
{
 struct socket *VAR_4 = VAR_3->socket;
 int VAR_5;
 struct mbuf *VAR_6;

 FUNC_0(VAR_3);
 if (!VAR_3->qp_active) {
  FUNC_3(VAR_4, "QP is deactivated\n");
  return;
 }

 while ((VAR_6 = FUNC_2(&VAR_3->rxctlq)) != ((void*)0))
  FUNC_7(VAR_3, VAR_6);

 if (VAR_3->state == VAR_2)
  return;

 if (!VAR_3->rx_ring.cq || !VAR_3->tx_ring.cq)
  return;

 FUNC_4(VAR_3);

 if (FUNC_10(VAR_3))
  FUNC_8(VAR_3, 1);

 FUNC_5(VAR_3, VAR_0);

 VAR_5 = FUNC_9(VAR_3) < VAR_1;

 if (FUNC_1(VAR_3) || VAR_5) {

  FUNC_6(VAR_4, ((void*)0), "Processing to free pending sends");
  FUNC_8(VAR_3, VAR_5);
  FUNC_6(VAR_4, ((void*)0), "Sending credit update");
  FUNC_5(VAR_3, VAR_0);
 }

}
