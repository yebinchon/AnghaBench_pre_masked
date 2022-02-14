
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {size_t m_len; struct mbuf* m_next; } ;


 int FUNC_0 (struct mbuf*) ;
 size_t FUNC_1 (struct mbuf*) ;
 int FUNC_2 (int ,void const*,int) ;

void
FUNC_3(struct mbuf *VAR_0, const void *VAR_1, size_t VAR_2)
{
  size_t VAR_3;
  int VAR_4;

  VAR_3 = FUNC_1(VAR_0);
  if (VAR_3 < VAR_2)
    VAR_2 = VAR_3;

  while (VAR_2 > 0) {
    VAR_4 = (VAR_2 < VAR_0->m_len) ? VAR_2 : VAR_0->m_len;
    FUNC_2(FUNC_0(VAR_0), VAR_1, VAR_4);
    VAR_2 -= VAR_0->m_len;
    VAR_0 = VAR_0->m_next;
  }
}
