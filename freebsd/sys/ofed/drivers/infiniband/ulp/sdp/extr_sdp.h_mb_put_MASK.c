
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mbuf {scalar_t__ m_len; int * m_data; } ;



__attribute__((used)) static inline void *
FUNC_0(struct mbuf *VAR_0, int VAR_1)
{
 uint8_t *VAR_2;

 VAR_2 = VAR_0->m_data;
 VAR_2 += VAR_0->m_len;
 VAR_0->m_len += VAR_1;
 return (void *)VAR_2;
}
