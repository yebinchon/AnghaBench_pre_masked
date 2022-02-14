
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union rdma_network_hdr {int ibgrh; int roce4grh; } ;
struct sk_buff {scalar_t__ protocol; } ;
struct rxe_pkt_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (struct rxe_pkt_info*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (union rdma_network_hdr*,int ,int) ;

__attribute__((used)) static void FUNC_6(union rdma_network_hdr *VAR_2,
       struct rxe_pkt_info *VAR_3)
{
 struct sk_buff *VAR_4 = FUNC_0(VAR_3);

 FUNC_5(VAR_2, 0, sizeof(*VAR_2));
 if (VAR_4->protocol == FUNC_1(VAR_0))
  FUNC_4(&VAR_2->roce4grh, FUNC_2(VAR_4), sizeof(VAR_2->roce4grh));
 else if (VAR_4->protocol == FUNC_1(VAR_1))
  FUNC_4(&VAR_2->ibgrh, FUNC_3(VAR_4), sizeof(VAR_2->ibgrh));
}
