
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {scalar_t__ m_len; struct mbuf* m_next; } ;



size_t
FUNC_0(struct mbuf *VAR_0)
{
  size_t VAR_1;

  for (VAR_1 = 0; VAR_0; VAR_0 = VAR_0->m_next)
    VAR_1 += VAR_0->m_len;
  return VAR_1;
}
