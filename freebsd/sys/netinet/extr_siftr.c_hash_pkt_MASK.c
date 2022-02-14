
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mbuf {scalar_t__ m_len; scalar_t__ m_data; struct mbuf* m_next; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_1(struct mbuf *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2;

 VAR_2 = 0;

 while (VAR_0 != ((void*)0) && VAR_1 > VAR_0->m_len) {





  VAR_1 -= VAR_0->m_len;
  VAR_0 = VAR_0->m_next;
 }

 while (VAR_0 != ((void*)0)) {

  if ((VAR_0->m_len - VAR_1) > 0)
   VAR_2 = FUNC_0(VAR_0->m_data + VAR_1,
       VAR_0->m_len - VAR_1, VAR_2);

  VAR_0 = VAR_0->m_next;
  VAR_1 = 0;
        }

 return (VAR_2);
}
