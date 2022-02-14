
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int skb_task; int skb_queue; } ;
struct ipoib_dev_priv {TYPE_1__ cm; int wq; } ;


 struct ipoib_dev_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct sk_buff*) ;

void FUNC_5(struct net_device *VAR_0, struct sk_buff *VAR_1,
      unsigned int VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = FUNC_3(&VAR_3->cm.skb_queue);

 FUNC_2(VAR_1, VAR_2);

 FUNC_4(&VAR_3->cm.skb_queue, VAR_1);
 if (VAR_4)
  FUNC_1(VAR_3->wq, &VAR_3->cm.skb_task);
}
