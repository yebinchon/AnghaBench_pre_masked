
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct rdma_netdev {int (* send ) (struct net_device*,struct sk_buff*,int ,int ) ;} ;
struct TYPE_4__ {int tx_dropped; } ;
struct net_device {TYPE_2__ stats; } ;
struct ipoib_path {int query; TYPE_1__* ah; int neigh_list; } ;
struct ipoib_neigh {int queue; int daddr; TYPE_1__* ah; int list; } ;
struct ipoib_dev_priv {int lock; } ;
struct TYPE_3__ {int ah; int last_send; int ref; scalar_t__ valid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*,struct ipoib_path*) ;
 struct ipoib_path* FUNC_2 (struct net_device*,int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct net_device*,struct ipoib_path*,struct ipoib_neigh*) ;
 scalar_t__ FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct ipoib_neigh*) ;
 int FUNC_8 (struct ipoib_neigh*,int ) ;
 struct ipoib_neigh* FUNC_9 (int *,struct net_device*) ;
 int FUNC_10 (struct ipoib_neigh*) ;
 int FUNC_11 (struct ipoib_neigh*) ;
 struct ipoib_dev_priv* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct ipoib_dev_priv*,char*,scalar_t__) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;
 struct rdma_netdev* FUNC_17 (struct net_device*) ;
 struct ipoib_path* FUNC_18 (struct net_device*,int *) ;
 scalar_t__ FUNC_19 (struct net_device*,struct ipoib_path*) ;
 int FUNC_20 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_21 (int *) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (int *,unsigned long) ;
 int FUNC_24 (struct net_device*,struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_25 (int) ;

__attribute__((used)) static struct ipoib_neigh *FUNC_26(struct sk_buff *VAR_1, u8 *VAR_2,
       struct net_device *VAR_3)
{
 struct ipoib_dev_priv *VAR_4 = FUNC_12(VAR_3);
 struct rdma_netdev *VAR_5 = FUNC_17(VAR_3);
 struct ipoib_path *VAR_6;
 struct ipoib_neigh *VAR_7;
 unsigned long VAR_8;

 FUNC_22(&VAR_4->lock, VAR_8);
 VAR_7 = FUNC_9(VAR_2, VAR_3);
 if (!VAR_7) {
  FUNC_23(&VAR_4->lock, VAR_8);
  ++VAR_3->stats.tx_dropped;
  FUNC_4(VAR_1);
  return ((void*)0);
 }




 if (FUNC_25(!FUNC_16(&VAR_7->list))) {
  FUNC_23(&VAR_4->lock, VAR_8);
  return VAR_7;
 }

 VAR_6 = FUNC_2(VAR_3, VAR_2 + 4);
 if (!VAR_6) {
  VAR_6 = FUNC_18(VAR_3, VAR_2 + 4);
  if (!VAR_6)
   goto err_path;

  FUNC_1(VAR_3, VAR_6);
 }

 FUNC_15(&VAR_7->list, &VAR_6->neigh_list);

 if (VAR_6->ah && VAR_6->ah->valid) {
  FUNC_14(&VAR_6->ah->ref);
  VAR_7->ah = VAR_6->ah;

  if (FUNC_6(VAR_3, VAR_7->daddr)) {
   if (!FUNC_7(VAR_7))
    FUNC_8(VAR_7, FUNC_5(VAR_3, VAR_6, VAR_7));
   if (!FUNC_7(VAR_7)) {
    FUNC_10(VAR_7);
    goto err_drop;
   }
   if (FUNC_21(&VAR_7->queue) <
       VAR_0) {
    FUNC_20(VAR_1, VAR_7->daddr);
    FUNC_3(&VAR_7->queue, VAR_1);
   } else {
    FUNC_13(VAR_4, "queue length limit %d. Packet drop.\n",
        FUNC_21(&VAR_7->queue));
    goto err_drop;
   }
  } else {
   FUNC_23(&VAR_4->lock, VAR_8);
   VAR_6->ah->last_send = VAR_5->send(VAR_3, VAR_1, VAR_6->ah->ah,
             FUNC_0(VAR_2));
   FUNC_11(VAR_7);
   return ((void*)0);
  }
 } else {
  VAR_7->ah = ((void*)0);

  if (!VAR_6->query && FUNC_19(VAR_3, VAR_6))
   goto err_path;
  if (FUNC_21(&VAR_7->queue) < VAR_0) {
   FUNC_20(VAR_1, VAR_7->daddr);
   FUNC_3(&VAR_7->queue, VAR_1);
  } else {
   goto err_drop;
  }
 }

 FUNC_23(&VAR_4->lock, VAR_8);
 FUNC_11(VAR_7);
 return ((void*)0);

err_path:
 FUNC_10(VAR_7);
err_drop:
 ++VAR_3->stats.tx_dropped;
 FUNC_4(VAR_1);

 FUNC_23(&VAR_4->lock, VAR_8);
 FUNC_11(VAR_7);

 return ((void*)0);
}
