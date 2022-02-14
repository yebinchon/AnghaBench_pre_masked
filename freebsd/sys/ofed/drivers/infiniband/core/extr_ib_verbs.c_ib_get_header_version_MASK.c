
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union rdma_network_hdr {int ibgrh; int roce4grh; } ;
struct ip6_hdr {int ip6_vfc; } ;
struct ip {int ip_v; int ip_hl; scalar_t__ ip_sum; } ;
typedef int ip4h_checked ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ip*) ;
 int FUNC_1 (struct ip*,struct ip const*,int) ;

__attribute__((used)) static int FUNC_2(const union rdma_network_hdr *VAR_2)
{
 const struct ip *VAR_3 = (const struct ip *)&VAR_2->roce4grh;
 struct ip VAR_4;
 const struct ip6_hdr *VAR_5 = (const struct ip6_hdr *)&VAR_2->ibgrh;




 if ((VAR_5->ip6_vfc & VAR_1) != VAR_0)
  return (VAR_3->ip_v == 4) ? 4 : 0;





 if (VAR_3->ip_hl != 5)
  return 6;





 FUNC_1(&VAR_4, VAR_3, sizeof(VAR_4));
 VAR_4.ip_sum = 0;




 if (VAR_3->ip_sum == VAR_4.ip_sum)
  return 4;
 return 6;
}
