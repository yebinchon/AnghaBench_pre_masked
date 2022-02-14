
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_char ;
struct mbuf {int m_len; struct mbuf* m_next; } ;


 int * FUNC_0 (struct mbuf*) ;
 int* VAR_0 ;
 int FUNC_1 (struct mbuf*) ;

__attribute__((used)) static inline u_short
FUNC_2(u_short VAR_1, struct mbuf *VAR_2)
{
  int VAR_3;
  u_char *VAR_4, *VAR_5;

  VAR_3 = FUNC_1(VAR_2);
  VAR_4 = FUNC_0(VAR_2);
  VAR_5 = VAR_4 + VAR_2->m_len;
  while (VAR_3--) {
    VAR_1 = (VAR_1 >> 8) ^ VAR_0[(VAR_1 ^ *VAR_4++) & 0xff];
    if (VAR_4 == VAR_5 && VAR_3) {
      VAR_2 = VAR_2->m_next;
      VAR_4 = FUNC_0(VAR_2);
      VAR_5 = VAR_4 + VAR_2->m_len;
    }
  }
  return (VAR_1);
}
