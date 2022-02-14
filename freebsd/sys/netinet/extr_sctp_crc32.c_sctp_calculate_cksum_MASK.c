
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mbuf {scalar_t__ m_len; scalar_t__ m_data; struct mbuf* m_next; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned char*,unsigned int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

uint32_t
FUNC_3(struct mbuf *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2 = 0xffffffff;

 while (VAR_1 > 0) {
  FUNC_0(VAR_0 != ((void*)0), ("sctp_calculate_cksum, offset > length of mbuf chain"));
  if (VAR_1 < (uint32_t)VAR_0->m_len) {
   break;
  }
  VAR_1 -= VAR_0->m_len;
  VAR_0 = VAR_0->m_next;
 }
 if (VAR_1 > 0) {
  VAR_2 = FUNC_1(VAR_2,
      (unsigned char *)(VAR_0->m_data + VAR_1),
      (unsigned int)(VAR_0->m_len - VAR_1));
  VAR_0 = VAR_0->m_next;
 }
 while (VAR_0 != ((void*)0)) {
  VAR_2 = FUNC_1(VAR_2,
      (unsigned char *)VAR_0->m_data,
      (unsigned int)VAR_0->m_len);
  VAR_0 = VAR_0->m_next;
 }
 VAR_2 = FUNC_2(VAR_2);
 return (VAR_2);
}
