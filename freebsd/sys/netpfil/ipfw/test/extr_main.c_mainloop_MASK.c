
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int flow_id; } ;
struct dn_queue {int dummy; } ;
struct cfg_s {int loops; int (* enq ) (int ,struct dn_queue*,struct mbuf*) ;int pending; int drop; int si; struct mbuf* (* deq ) (int ) ;int dequeue; scalar_t__ can_dequeue; int _enqueue; struct mbuf* tosend; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int,char*,int,...) ;
 struct dn_queue* FUNC_2 (struct cfg_s*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct cfg_s*) ;
 int FUNC_5 (struct cfg_s*,struct mbuf*) ;
 int FUNC_6 (struct cfg_s*,struct mbuf*) ;
 int FUNC_7 (struct cfg_s*,struct mbuf*) ;
 int FUNC_8 (int ,struct dn_queue*,struct mbuf*) ;
 struct mbuf* FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct cfg_s *VAR_0)
{
 int VAR_1;
 struct mbuf *VAR_2;

 for (VAR_1=0; VAR_1 < VAR_0->loops; VAR_1++) {

  FUNC_4(VAR_0);
  FUNC_1(3, "loop %d enq %d send %p rx %d",
   VAR_1, VAR_0->_enqueue, VAR_0->tosend, VAR_0->can_dequeue);
  if ( (VAR_2 = VAR_0->tosend) ) {
   int VAR_3;
   struct dn_queue *VAR_4 = FUNC_2(VAR_0, VAR_2->flow_id);
   VAR_0->_enqueue++;
   VAR_3 = VAR_0->enq(VAR_0->si, VAR_4, VAR_2);
   if (VAR_3) {
    FUNC_5(VAR_0, VAR_2);
    FUNC_0("loop %d enqueue fail", VAR_1 );



    goto do_dequeue;
   } else {
    FUNC_3("enqueue ok");
    VAR_0->pending++;
    FUNC_7(VAR_0, VAR_2);
   }
  } else if (VAR_0->can_dequeue) {
do_dequeue:
   VAR_0->dequeue++;
   VAR_2 = VAR_0->deq(VAR_0->si);
   if (VAR_2) {
    VAR_0->pending--;
    FUNC_5(VAR_0, VAR_2);
    VAR_0->drop--;
    FUNC_6(VAR_0, VAR_2);
   } else {
    FUNC_0("--- ouch, cannot operate on iteration %d, pending %d", VAR_1, VAR_0->pending);
    break;
   }
  }
 }
 FUNC_1(1, "mainloop ends %d", VAR_1);
 return 0;
}
