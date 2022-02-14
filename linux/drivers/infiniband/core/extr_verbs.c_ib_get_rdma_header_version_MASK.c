
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union rdma_network_hdr {int ibgrh; int roce4grh; } ;
typedef int u8 ;
struct ipv6hdr {int version; } ;
struct iphdr {int version; int ihl; scalar_t__ check; } ;
typedef int ip4h_checked ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (struct iphdr*,struct iphdr const*,int) ;

int FUNC_2(const union rdma_network_hdr *VAR_0)
{
 const struct iphdr *VAR_1 = (struct iphdr *)&VAR_0->roce4grh;
 struct iphdr VAR_2;
 const struct ipv6hdr *VAR_3 = (struct ipv6hdr *)&VAR_0->ibgrh;




 if (VAR_3->version != 6)
  return (VAR_1->version == 4) ? 4 : 0;





 if (VAR_1->ihl != 5)
  return 6;





 FUNC_1(&VAR_2, VAR_1, sizeof(VAR_2));
 VAR_2.check = 0;
 VAR_2.check = FUNC_0((u8 *)&VAR_2, 5);

 if (VAR_1->check == VAR_2.check)
  return 4;
 return 6;
}
