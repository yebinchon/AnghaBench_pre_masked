
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int m_type; scalar_t__ m_size; struct mbuf* m_next; } ;
struct TYPE_2__ {int octets; int fragments; } ;


 TYPE_1__* VAR_0 ;

void
FUNC_0(struct mbuf *VAR_1, int VAR_2)
{
  for (; VAR_1; VAR_1 = VAR_1->m_next)
    if (VAR_2 != VAR_1->m_type) {
      VAR_0[VAR_1->m_type].fragments--;
      VAR_0[VAR_1->m_type].octets -= VAR_1->m_size;
      VAR_1->m_type = VAR_2;
      VAR_0[VAR_2].fragments++;
      VAR_0[VAR_2].octets += VAR_1->m_size;
    }
}
