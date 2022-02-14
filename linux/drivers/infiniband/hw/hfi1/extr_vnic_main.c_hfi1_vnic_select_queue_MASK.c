
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct sdma_engine {int this_idx; } ;
struct opa_vnic_skb_mdata {int vl; int entropy; } ;
struct net_device {int dummy; } ;
struct hfi1_vnic_vport_info {int dd; } ;


 struct hfi1_vnic_vport_info* FUNC_0 (struct net_device*) ;
 struct sdma_engine* FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static u16 FUNC_2(struct net_device *VAR_0,
      struct sk_buff *VAR_1,
      struct net_device *VAR_2)
{
 struct hfi1_vnic_vport_info *VAR_3 = FUNC_0(VAR_0);
 struct opa_vnic_skb_mdata *VAR_4;
 struct sdma_engine *VAR_5;

 VAR_4 = (struct opa_vnic_skb_mdata *)VAR_1->data;
 VAR_5 = FUNC_1(VAR_3->dd, VAR_4->entropy, VAR_4->vl);
 return VAR_5->this_idx;
}
