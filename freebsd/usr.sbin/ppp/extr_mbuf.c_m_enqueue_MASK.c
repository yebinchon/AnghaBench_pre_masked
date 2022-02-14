
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqueue {scalar_t__ len; struct mbuf* top; struct mbuf* last; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long) ;

void
FUNC_1(struct mqueue *VAR_1, struct mbuf *VAR_2)
{
  if (VAR_2 != ((void*)0)) {
    if (VAR_1->last) {
      VAR_1->last->m_nextpkt = VAR_2;
      VAR_1->last = VAR_2;
    } else
      VAR_1->last = VAR_1->top = VAR_2;
    VAR_1->len++;
    FUNC_0(VAR_0, "m_enqueue: len = %lu\n", (unsigned long)VAR_1->len);
  }
}
