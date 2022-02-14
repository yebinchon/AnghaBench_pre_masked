
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {struct mbuf* m_nextpkt; } ;
struct link {TYPE_1__* Queue; } ;
struct TYPE_2__ {size_t len; struct mbuf* top; } ;


 unsigned int FUNC_0 (struct link*) ;
 scalar_t__ FUNC_1 (struct mbuf*) ;

size_t
FUNC_2(struct link *VAR_0)
{
  unsigned VAR_1;
  size_t VAR_2, VAR_3;
  struct mbuf *VAR_4;

  VAR_3 = 0;
  for (VAR_1 = 0, VAR_2 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
    VAR_2 = VAR_0->Queue[VAR_1].len;
    VAR_4 = VAR_0->Queue[VAR_1].top;
    while (VAR_2--) {
      VAR_3 += FUNC_1(VAR_4);
      VAR_4 = VAR_4->m_nextpkt;
    }
  }

  return VAR_3;
}
