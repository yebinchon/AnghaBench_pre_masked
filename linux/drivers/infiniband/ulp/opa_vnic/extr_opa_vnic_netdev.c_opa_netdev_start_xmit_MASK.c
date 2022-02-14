
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int queue_mapping; } ;
struct opa_vnic_adapter {TYPE_1__* rn_ops; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int (* ndo_start_xmit ) (struct sk_buff*,struct net_device*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct opa_vnic_adapter*,struct sk_buff*) ;
 struct opa_vnic_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,scalar_t__) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,int ,scalar_t__) ;

__attribute__((used)) static netdev_tx_t FUNC_7(struct sk_buff *VAR_2,
      struct net_device *VAR_3)
{
 struct opa_vnic_adapter *VAR_4 = FUNC_1(VAR_3);

 FUNC_6("xmit: queue %d skb len %d\n", VAR_2->queue_mapping, VAR_2->len);

 if (FUNC_5(VAR_2->len < VAR_0)) {
  if (FUNC_2(VAR_2, VAR_0))
   return VAR_1;

  FUNC_3(VAR_2, VAR_0 - VAR_2->len);
 }

 FUNC_0(VAR_4, VAR_2);
 return VAR_4->rn_ops->ndo_start_xmit(VAR_2, VAR_3);
}
