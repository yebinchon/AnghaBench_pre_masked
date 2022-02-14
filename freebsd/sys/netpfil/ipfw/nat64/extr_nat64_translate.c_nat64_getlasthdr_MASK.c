
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_len; } ;
struct ip6_hdr {int ip6_nxt; scalar_t__ ip6_plen; } ;
struct ip6_hbh {int ip6h_nxt; int ip6h_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct mbuf*,int) ;

int
FUNC_1(struct mbuf *VAR_3, int *VAR_4)
{
 struct ip6_hdr *VAR_5;
 struct ip6_hbh *VAR_6;
 int VAR_7, VAR_8;

 if (VAR_4 != ((void*)0))
  VAR_8 = *VAR_4;
 else
  VAR_8 = 0;

 if (VAR_3->m_len < VAR_8 + sizeof(*VAR_5))
  return (-1);

 VAR_5 = FUNC_0(VAR_3, VAR_8);
 VAR_8 += sizeof(*VAR_5);
 VAR_7 = VAR_5->ip6_nxt;

 while (VAR_7 == VAR_1 || VAR_7 == VAR_2 ||
     VAR_7 == VAR_0) {
  VAR_6 = FUNC_0(VAR_3, VAR_8);




  if (VAR_3->m_len < VAR_8)
   return (-1);




  if (VAR_7 == VAR_1 && VAR_5->ip6_plen == 0)
   return (-1);
  VAR_7 = VAR_6->ip6h_nxt;
  VAR_8 += (VAR_6->ip6h_len + 1) << 3;
 }
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_8;
 return (VAR_7);
}
