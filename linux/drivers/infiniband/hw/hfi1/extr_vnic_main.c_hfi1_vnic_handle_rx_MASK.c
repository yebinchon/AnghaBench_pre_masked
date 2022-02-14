
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int protocol; } ;
struct hfi1_vnic_vport_info {int dummy; } ;
struct hfi1_vnic_rx_queue {int napi; int netdev; int idx; struct hfi1_vnic_vport_info* vinfo; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct hfi1_vnic_rx_queue*,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct hfi1_vnic_rx_queue*) ;
 int FUNC_4 (struct hfi1_vnic_vport_info*,int ,struct sk_buff*,int) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct hfi1_vnic_rx_queue *VAR_0,
    int *VAR_1, int VAR_2)
{
 struct hfi1_vnic_vport_info *VAR_3 = VAR_0->vinfo;
 struct sk_buff *VAR_4;
 int VAR_5;

 while (1) {
  if (*VAR_1 >= VAR_2)
   break;

  VAR_4 = FUNC_3(VAR_0);
  if (FUNC_7(!VAR_4))
   break;

  VAR_5 = FUNC_2(VAR_0, VAR_4);

  FUNC_4(VAR_3, VAR_0->idx, VAR_4, VAR_5);
  if (FUNC_7(VAR_5)) {
   FUNC_0(VAR_4);
   continue;
  }

  FUNC_6(VAR_4);
  VAR_4->protocol = FUNC_1(VAR_4, VAR_0->netdev);

  FUNC_5(&VAR_0->napi, VAR_4);
  (*VAR_1)++;
 }
}
