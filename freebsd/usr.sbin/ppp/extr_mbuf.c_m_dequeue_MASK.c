
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct mqueue {scalar_t__ len; struct mbuf* top; struct mbuf* last; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;

struct mbuf *
FUNC_1(struct mqueue *VAR_2)
{
  struct mbuf *VAR_3;

  FUNC_0(VAR_0, "m_dequeue: queue len = %lu\n", (u_long)VAR_2->len);
  VAR_3 = VAR_2->top;
  if (VAR_3) {
    VAR_2->top = VAR_2->top->m_nextpkt;
    VAR_2->len--;
    if (VAR_2->top == ((void*)0)) {
      VAR_2->last = VAR_2->top;
      if (VAR_2->len)
 FUNC_0(VAR_1, "m_dequeue: Not zero (%lu)!!!\n",
                   (u_long)VAR_2->len);
    }
    VAR_3->m_nextpkt = ((void*)0);
  }

  return VAR_3;
}
