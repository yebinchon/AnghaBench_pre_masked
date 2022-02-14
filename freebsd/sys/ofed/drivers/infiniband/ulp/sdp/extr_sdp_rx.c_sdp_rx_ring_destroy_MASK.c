
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * cq; int * buffer; } ;
struct sdp_sock {TYPE_1__ rx_ring; int socket; int rx_comp_work; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__) ;
 scalar_t__ FUNC_5 (TYPE_1__) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct sdp_sock*) ;
 int FUNC_8 (int ,char*,int *) ;

void
FUNC_9(struct sdp_sock *VAR_1)
{

 FUNC_1(&VAR_1->rx_comp_work);
 FUNC_6(&VAR_1->rx_ring);

 if (VAR_1->rx_ring.buffer) {
  FUNC_7(VAR_1);
  FUNC_2(VAR_1->rx_ring.buffer, VAR_0);
  VAR_1->rx_ring.buffer = ((void*)0);
 }

 if (VAR_1->rx_ring.cq) {
  if (FUNC_3(VAR_1->rx_ring.cq)) {
   FUNC_8(VAR_1->socket, "destroy cq(%p) failed\n",
    VAR_1->rx_ring.cq);
  } else {
   VAR_1->rx_ring.cq = ((void*)0);
  }
 }

 FUNC_0(FUNC_4(VAR_1->rx_ring) != FUNC_5(VAR_1->rx_ring));
}
