
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ip6ctlparam {struct mbuf* ip6c_m; struct icmp6_hdr* ip6c_icmp6; struct in6_addr* ip6c_finaldst; } ;
struct ip6_hdr {int dummy; } ;
struct ip6_frag {int dummy; } ;
struct in6_addr {int dummy; } ;
struct in_conninfo {struct in6_addr inc6_faddr; int inc_flags; int inc_fibnum; } ;
struct icmp6_hdr {int icmp6_mtu; } ;
typedef int inc ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct in_conninfo*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct in6_addr*,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct in_conninfo*,int) ;
 int FUNC_6 (struct in_conninfo*,int *) ;

void
FUNC_7(struct ip6ctlparam *VAR_3, int VAR_4)
{
 struct in6_addr *VAR_5 = VAR_3->ip6c_finaldst;
 struct icmp6_hdr *VAR_6 = VAR_3->ip6c_icmp6;
 struct mbuf *VAR_7 = VAR_3->ip6c_m;
 u_int VAR_8 = FUNC_4(VAR_6->icmp6_mtu);
 struct in_conninfo VAR_9;
 if (VAR_8 < sizeof(struct ip6_hdr) + sizeof(struct ip6_frag) + 8)
  return;

 if (!VAR_4)
  return;







 if (VAR_8 < VAR_1)
  VAR_8 = VAR_1 - 8;

 FUNC_2(&VAR_9, sizeof(VAR_9));
 VAR_9.inc_fibnum = FUNC_1(VAR_7);
 VAR_9.inc_flags |= VAR_0;
 VAR_9.inc6_faddr = *VAR_5;
 if (FUNC_3(&VAR_9.inc6_faddr, VAR_7->m_pkthdr.rcvif, ((void*)0)))
  return;

 if (VAR_8 < FUNC_6(&VAR_9, ((void*)0))) {
  FUNC_5(&VAR_9, VAR_8);
  FUNC_0(VAR_2);
 }
}
