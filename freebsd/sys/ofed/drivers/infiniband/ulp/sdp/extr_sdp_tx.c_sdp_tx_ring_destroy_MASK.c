
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cq; int * buffer; int timer; } ;
struct sdp_sock {TYPE_1__ tx_ring; int socket; int nagle_timer; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdp_sock*) ;
 int FUNC_1 (struct sdp_sock*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_1__) ;
 scalar_t__ FUNC_8 (TYPE_1__) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct sdp_sock*) ;
 int FUNC_11 (int ,char*,int *) ;

void
FUNC_12(struct sdp_sock *VAR_1)
{

 FUNC_9(VAR_1->socket, "tx ring destroy\n");
 FUNC_0(VAR_1);
 FUNC_4(&VAR_1->tx_ring.timer);
 FUNC_4(&VAR_1->nagle_timer);
 FUNC_1(VAR_1);
 FUNC_3(&VAR_1->tx_ring.timer);
 FUNC_3(&VAR_1->nagle_timer);

 if (VAR_1->tx_ring.buffer) {
  FUNC_10(VAR_1);
  FUNC_5(VAR_1->tx_ring.buffer, VAR_0);
  VAR_1->tx_ring.buffer = ((void*)0);
 }

 if (VAR_1->tx_ring.cq) {
  if (FUNC_6(VAR_1->tx_ring.cq)) {
   FUNC_11(VAR_1->socket, "destroy cq(%p) failed\n",
     VAR_1->tx_ring.cq);
  } else {
   VAR_1->tx_ring.cq = ((void*)0);
  }
 }

 FUNC_2(FUNC_7(VAR_1->tx_ring) != FUNC_8(VAR_1->tx_ring));
}
