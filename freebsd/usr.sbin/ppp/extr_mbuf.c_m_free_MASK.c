
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mbuf {size_t m_type; scalar_t__ m_size; struct mbuf* m_next; } ;
struct TYPE_4__ {int count; struct mbucket* next; } ;
struct TYPE_5__ {TYPE_1__ f; } ;
struct mbucket {TYPE_2__ u; } ;
struct TYPE_6__ {int octets; int fragments; } ;


 struct mbucket** FUNC_0 (scalar_t__) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;

struct mbuf *
FUNC_1(struct mbuf *VAR_2)
{
  struct mbucket **VAR_3, *VAR_4;
  struct mbuf *VAR_5;

  if ((VAR_4 = (struct mbucket *)VAR_2) != ((void*)0)) {
    VAR_0[VAR_2->m_type].fragments--;
    VAR_0[VAR_2->m_type].octets -= VAR_2->m_size;

    VAR_5 = VAR_2->m_next;
    VAR_3 = FUNC_0(VAR_2->m_size);
    VAR_4->u.f.next = *VAR_3;
    VAR_4->u.f.count = 1;
    *VAR_3 = VAR_4;

    VAR_1++;
    VAR_2 = VAR_5;
  }

  return VAR_2;
}
