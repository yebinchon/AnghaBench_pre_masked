
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {size_t m_size; size_t m_len; struct mbuf* m_next; } ;


 void* FUNC_0 (int *,void const*,size_t,int ) ;
 int FUNC_1 (char*,void const*,size_t) ;

struct mbuf *
FUNC_2(struct mbuf *VAR_0, const void *VAR_1, size_t VAR_2)
{
  struct mbuf *VAR_3 = VAR_0;

  if (VAR_3) {
    while (VAR_3->m_next)
      VAR_3 = VAR_3->m_next;
    if (VAR_3->m_size - VAR_3->m_len >= VAR_2) {
      if (VAR_1)
        FUNC_1((char *)(VAR_3 + 1) + VAR_3->m_len, VAR_1, VAR_2);
      VAR_3->m_len += VAR_2;
    } else
      VAR_3->m_next = FUNC_0(((void*)0), VAR_1, VAR_2, 0);
  } else
    VAR_0 = FUNC_0(((void*)0), VAR_1, VAR_2, 0);

  return VAR_0;
}
