
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqueue {size_t len; struct mbuf* top; } ;
struct mbuf {scalar_t__ priv; struct mbuf* m_nextpkt; } ;
struct link {struct mqueue* Queue; } ;


 struct mqueue* FUNC_0 (struct link*) ;
 scalar_t__ FUNC_1 (struct mbuf*) ;

void
FUNC_2(struct link *VAR_0, size_t *VAR_1, size_t *VAR_2)
{
  struct mqueue *VAR_3, *VAR_4;
  struct mbuf *VAR_5;
  size_t VAR_6;
  VAR_4 = FUNC_0(VAR_0);
  *VAR_1 = *VAR_2 = 0;
  for (VAR_3 = VAR_0->Queue; VAR_3 < VAR_4; VAR_3++) {
    VAR_6 = VAR_3->len;
    *VAR_1 += VAR_6;
    for (VAR_5 = VAR_3->top; VAR_6--; VAR_5 = VAR_5->m_nextpkt)
      *VAR_2 += FUNC_1(VAR_5) - VAR_5->priv;
  }
}
