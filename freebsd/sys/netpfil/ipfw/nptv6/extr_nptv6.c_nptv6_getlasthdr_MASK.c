
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nptv6_cfg {int dummy; } ;
struct mbuf {int m_len; } ;
struct ip6_hdr {int ip6_nxt; } ;
struct ip6_hbh {int ip6h_nxt; int ip6h_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct mbuf*,int) ;

__attribute__((used)) static int
FUNC_1(struct nptv6_cfg *VAR_3, struct mbuf *VAR_4, int *VAR_5)
{
 struct ip6_hdr *VAR_6;
 struct ip6_hbh *VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = (VAR_5 == ((void*)0)) ? 0: *VAR_5;
 if (VAR_4->m_len < VAR_9)
  return (-1);
 VAR_6 = FUNC_0(VAR_4, VAR_9);
 VAR_9 += sizeof(*VAR_6);
 VAR_8 = VAR_6->ip6_nxt;
 while (VAR_8 == VAR_1 || VAR_8 == VAR_2 ||
     VAR_8 == VAR_0) {
  VAR_7 = FUNC_0(VAR_4, VAR_9);
  if (VAR_4->m_len < VAR_9)
   return (-1);
  VAR_8 = VAR_7->ip6h_nxt;
  VAR_9 += (VAR_7->ip6h_len + 1) << 3;
 }
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_9;
 return (VAR_8);
}
