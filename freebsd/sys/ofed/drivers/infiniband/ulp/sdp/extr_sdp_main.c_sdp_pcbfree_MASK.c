
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int destroyed_lock; } ;
struct sdp_sock {int flags; int lock; TYPE_1__ rx_ring; int * qp; scalar_t__ qp_active; int cred; int * socket; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sdp_sock*,int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sdp_sock*) ;
 int FUNC_5 (struct sdp_sock*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (struct sdp_sock*) ;
 int FUNC_11 (struct sdp_sock*) ;
 int FUNC_12 (struct sdp_sock*) ;
 int VAR_3 ;
 int FUNC_13 (int ,struct sdp_sock*) ;

__attribute__((used)) static void
FUNC_14(struct sdp_sock *VAR_4)
{

 FUNC_0(VAR_4->socket == ((void*)0), ("ssk %p socket still attached", VAR_4));
 FUNC_0((VAR_4->flags & VAR_0) == 0,
     ("ssk %p already destroyed", VAR_4));

 FUNC_9(VAR_4->socket, "Freeing pcb");
 FUNC_4(VAR_4);
 VAR_4->flags |= VAR_0;
 FUNC_5(VAR_4);
 FUNC_2();
 VAR_2--;
 FUNC_1(VAR_4, VAR_1);
 FUNC_3();
 FUNC_6(VAR_4->cred);
 VAR_4->qp_active = 0;
 if (VAR_4->qp) {
  FUNC_7(VAR_4->qp);
  VAR_4->qp = ((void*)0);
 }
 FUNC_12(VAR_4);
 FUNC_11(VAR_4);
 FUNC_10(VAR_4);
 FUNC_8(&VAR_4->rx_ring.destroyed_lock);
 FUNC_8(&VAR_4->lock);
 FUNC_13(VAR_3, VAR_4);
}
