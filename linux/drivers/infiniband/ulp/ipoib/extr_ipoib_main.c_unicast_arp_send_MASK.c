
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rdma_netdev {int (* send ) (struct net_device*,struct sk_buff*,int ,int ) ;} ;
struct TYPE_4__ {int tx_dropped; } ;
struct net_device {TYPE_2__ stats; } ;
struct ipoib_pseudo_header {scalar_t__ hwaddr; } ;
struct ipoib_path {TYPE_1__* ah; int pathrec; int queue; int query; } ;
struct ipoib_dev_priv {int lock; int broadcast; } ;
struct TYPE_3__ {int ah; int last_send; int valid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_device*,struct ipoib_path*) ;
 struct ipoib_path* FUNC_2 (struct net_device*,scalar_t__) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct ipoib_dev_priv*,struct ipoib_path*,scalar_t__) ;
 int FUNC_7 (struct ipoib_dev_priv*,char*,int ) ;
 struct ipoib_dev_priv* FUNC_8 (struct net_device*) ;
 struct rdma_netdev* FUNC_9 (struct net_device*) ;
 struct ipoib_path* FUNC_10 (struct net_device*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct net_device*,struct ipoib_path*) ;
 int FUNC_12 (struct sk_buff*,scalar_t__) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (struct net_device*,struct sk_buff*,int ,int ) ;

__attribute__((used)) static void FUNC_18(struct sk_buff *VAR_1, struct net_device *VAR_2,
        struct ipoib_pseudo_header *VAR_3)
{
 struct ipoib_dev_priv *VAR_4 = FUNC_8(VAR_2);
 struct rdma_netdev *VAR_5 = FUNC_9(VAR_2);
 struct ipoib_path *VAR_6;
 unsigned long VAR_7;

 FUNC_15(&VAR_4->lock, VAR_7);


 if (!VAR_4->broadcast)
  goto drop_and_unlock;

 VAR_6 = FUNC_2(VAR_2, VAR_3->hwaddr + 4);
 if (!VAR_6 || !VAR_6->ah || !VAR_6->ah->valid) {
  if (!VAR_6) {
   VAR_6 = FUNC_10(VAR_2, VAR_3->hwaddr + 4);
   if (!VAR_6)
    goto drop_and_unlock;
   FUNC_1(VAR_2, VAR_6);
  } else {




   FUNC_6(VAR_4, VAR_6, VAR_3->hwaddr + 4);
  }
  if (!VAR_6->query && FUNC_11(VAR_2, VAR_6)) {
   goto drop_and_unlock;
  }

  if (FUNC_14(&VAR_6->queue) < VAR_0) {
   FUNC_12(VAR_1, VAR_3->hwaddr);
   FUNC_3(&VAR_6->queue, VAR_1);
   goto unlock;
  } else {
   goto drop_and_unlock;
  }
 }

 FUNC_16(&VAR_4->lock, VAR_7);
 FUNC_7(VAR_4, "Send unicast ARP to %08x\n",
    FUNC_4(FUNC_13(&VAR_6->pathrec)));
 VAR_6->ah->last_send = VAR_5->send(VAR_2, VAR_1, VAR_6->ah->ah,
           FUNC_0(VAR_3->hwaddr));
 return;

drop_and_unlock:
 ++VAR_2->stats.tx_dropped;
 FUNC_5(VAR_1);
unlock:
 FUNC_16(&VAR_4->lock, VAR_7);
}
