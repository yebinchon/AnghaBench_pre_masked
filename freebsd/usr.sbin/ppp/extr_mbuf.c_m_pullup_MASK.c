
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mbuf {int m_offset; int m_len; int m_type; int * m_next; } ;


 int * FUNC_0 (struct mbuf*) ;
 int FUNC_1 (int *,struct mbuf*,int ) ;
 struct mbuf* FUNC_2 (struct mbuf*) ;
 struct mbuf* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (int *,int *,int ) ;

struct mbuf *
FUNC_6(struct mbuf *VAR_0)
{


  if (VAR_0 != ((void*)0)) {
    if (VAR_0->m_next != ((void*)0)) {
      struct mbuf *VAR_1;
      u_char *VAR_2;

      VAR_1 = FUNC_3(FUNC_4(VAR_0), VAR_0->m_type);

      for (VAR_2 = FUNC_0(VAR_1); VAR_0; VAR_0 = FUNC_2(VAR_0)) {
        FUNC_5(VAR_2, FUNC_0(VAR_0), VAR_0->m_len);
        VAR_2 += VAR_0->m_len;
      }
      VAR_0 = VAR_1;
    }

    else if ((VAR_0->m_offset & (sizeof(long) - 1)) != 0) {
      FUNC_1(FUNC_0(VAR_0), VAR_0 + 1, VAR_0->m_len);
      VAR_0->m_offset = 0;
    }

  }

  return VAR_0;
}
