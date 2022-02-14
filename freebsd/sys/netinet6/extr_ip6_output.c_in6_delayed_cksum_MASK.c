
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_short ;
struct TYPE_2__ {int csum_flags; scalar_t__ csum_data; } ;
struct mbuf {scalar_t__ m_len; TYPE_1__ m_pkthdr; } ;
typedef int csum ;
typedef int caddr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mbuf*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct mbuf*,scalar_t__,int,int ) ;
 scalar_t__ FUNC_2 (struct mbuf*,scalar_t__) ;

void
FUNC_3(struct mbuf *VAR_1, uint32_t VAR_2, u_short VAR_3)
{
 u_short VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3 + VAR_2, VAR_3);
 if (VAR_1->m_pkthdr.csum_flags & VAR_0 && VAR_4 == 0)
  VAR_4 = 0xffff;
 VAR_3 += VAR_1->m_pkthdr.csum_data;

 if (VAR_3 + sizeof(VAR_4) > VAR_1->m_len)
  FUNC_1(VAR_1, VAR_3, sizeof(VAR_4), (caddr_t)&VAR_4);
 else
  *(u_short *)FUNC_2(VAR_1, VAR_3) = VAR_4;
}
