
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_short ;
struct mbuf {size_t m_offset; size_t m_len; struct mbuf* m_next; int m_type; } ;


 int FUNC_0 (struct mbuf*) ;
 int VAR_0 ;
 struct mbuf* FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct mbuf*,void const*,size_t) ;

struct mbuf *
FUNC_3(struct mbuf *VAR_1, const void *VAR_2, size_t VAR_3, u_short VAR_4)
{
  struct mbuf *VAR_5;

  if (VAR_1 && VAR_1->m_offset) {
    if (VAR_1->m_offset >= VAR_3) {
      VAR_1->m_offset -= VAR_3;
      VAR_1->m_len += VAR_3;
      if (VAR_2)
        FUNC_2(FUNC_0(VAR_1), VAR_2, VAR_3);
      return VAR_1;
    }
    VAR_3 -= VAR_1->m_offset;
    if (VAR_2)
      FUNC_2(VAR_1 + 1, (const char *)VAR_2 + VAR_3, VAR_1->m_offset);
    VAR_1->m_len += VAR_1->m_offset;
    VAR_1->m_offset = 0;
  }

  VAR_5 = FUNC_1(VAR_3 + VAR_4, VAR_1 ? VAR_1->m_type : VAR_0);
  VAR_5->m_offset = VAR_4;
  VAR_5->m_len -= VAR_4;
  if (VAR_2)
    FUNC_2(FUNC_0(VAR_5), VAR_2, VAR_3);
  VAR_5->m_next = VAR_1;

  return VAR_5;
}
