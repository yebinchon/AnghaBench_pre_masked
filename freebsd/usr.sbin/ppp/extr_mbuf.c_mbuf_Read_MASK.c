
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mbuf {size_t m_len; int m_offset; } ;


 int FUNC_0 (struct mbuf*) ;
 struct mbuf* FUNC_1 (struct mbuf*) ;
 int FUNC_2 (int *,int ,int) ;

struct mbuf *
FUNC_3(struct mbuf *VAR_0, void *VAR_1, size_t VAR_2)
{
  int VAR_3;
  u_char *VAR_4 = VAR_1;

  while (VAR_0 && VAR_2 > 0) {
    if (VAR_2 > VAR_0->m_len)
      VAR_3 = VAR_0->m_len;
    else
      VAR_3 = VAR_2;
    if (VAR_3) {
      FUNC_2(VAR_4, FUNC_0(VAR_0), VAR_3);
      VAR_4 += VAR_3;
      VAR_0->m_len -= VAR_3;
      VAR_2 -= VAR_3;
      VAR_0->m_offset += VAR_3;
    }
    if (VAR_0->m_len == 0)
      VAR_0 = FUNC_1(VAR_0);
  }

  while (VAR_0 && VAR_0->m_len == 0)
    VAR_0 = FUNC_1(VAR_0);

  return VAR_0;
}
