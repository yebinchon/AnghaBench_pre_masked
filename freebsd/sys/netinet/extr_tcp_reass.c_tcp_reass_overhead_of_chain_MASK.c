
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ext_size; } ;
struct mbuf {int m_flags; TYPE_1__ m_ext; struct mbuf* m_next; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct mbuf *VAR_2, struct mbuf **VAR_3)
{
 int VAR_4 = VAR_0;

 if (VAR_2->m_flags & VAR_1)
  VAR_4 += VAR_2->m_ext.ext_size;
 while (VAR_2->m_next != ((void*)0)) {
  VAR_2 = VAR_2->m_next;
  VAR_4 += VAR_0;
  if (VAR_2->m_flags & VAR_1)
   VAR_4 += VAR_2->m_ext.ext_size;
 }
 *VAR_3 = VAR_2;
 return (VAR_4);
}
