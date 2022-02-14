
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mbuf {size_t m_len; struct mbuf* m_next; } ;


 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (int *,int ,size_t) ;

size_t
FUNC_2(struct mbuf *VAR_0, void *VAR_1, size_t VAR_2)
{
  size_t VAR_3, VAR_4 = VAR_2;
  u_char *VAR_5 = VAR_1;

  while (VAR_0 && VAR_4 > 0) {
    if (VAR_4 > VAR_0->m_len)
      VAR_3 = VAR_0->m_len;
    else
      VAR_3 = VAR_4;
    FUNC_1(VAR_5, FUNC_0(VAR_0), VAR_3);
    VAR_5 += VAR_3;
    VAR_4 -= VAR_3;
    VAR_0 = VAR_0->m_next;
  }

  return VAR_2 - VAR_4;
}
