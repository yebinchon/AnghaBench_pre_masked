
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct opa_vnic_skb_mdata {int vl; int entropy; } ;
struct opa_vnic_adapter {TYPE_1__* rn_ops; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* ndo_select_queue ) (struct net_device*,struct sk_buff*,struct net_device*) ;} ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct opa_vnic_adapter*,struct sk_buff*) ;
 struct opa_vnic_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 struct opa_vnic_skb_mdata* FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct net_device*,struct sk_buff*,struct net_device*) ;

__attribute__((used)) static u16 FUNC_6(struct net_device *VAR_0, struct sk_buff *VAR_1,
     struct net_device *VAR_2)
{
 struct opa_vnic_adapter *VAR_3 = FUNC_2(VAR_0);
 struct opa_vnic_skb_mdata *VAR_4;
 int VAR_5;


 VAR_4 = FUNC_4(VAR_1, sizeof(*VAR_4));
 VAR_4->entropy = FUNC_0(VAR_1);
 VAR_4->vl = FUNC_1(VAR_3, VAR_1);
 VAR_5 = VAR_3->rn_ops->ndo_select_queue(VAR_0, VAR_1, VAR_2);
 FUNC_3(VAR_1, sizeof(*VAR_4));
 return VAR_5;
}
