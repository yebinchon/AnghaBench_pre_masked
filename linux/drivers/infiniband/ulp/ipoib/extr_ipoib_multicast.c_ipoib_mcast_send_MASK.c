
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct sk_buff {int dummy; } ;
struct rdma_netdev {int (* send ) (struct net_device*,struct sk_buff*,int ,int ) ;} ;
struct TYPE_9__ {int tx_dropped; } ;
struct net_device {TYPE_4__ stats; } ;
struct ipoib_pseudo_header {int dummy; } ;
struct ipoib_neigh {int list; TYPE_5__* ah; } ;
struct TYPE_7__ {int raw; } ;
struct TYPE_8__ {TYPE_2__ mgid; } ;
struct ipoib_mcast {TYPE_5__* ah; int neigh_list; int flags; int pkt_queue; int list; TYPE_3__ mcmember; } ;
struct ipoib_dev_priv {int lock; int multicast_list; TYPE_1__* broadcast; int flags; } ;
struct TYPE_10__ {int valid; int ah; int last_send; int ref; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,struct ipoib_mcast*) ;
 struct ipoib_mcast* FUNC_1 (struct net_device*,void*) ;
 int FUNC_2 (struct ipoib_dev_priv*,int *,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*,void*) ;
 struct ipoib_mcast* FUNC_5 (struct net_device*,int ) ;
 struct ipoib_neigh* FUNC_6 (int *,struct net_device*) ;
 struct ipoib_neigh* FUNC_7 (struct net_device*,int *) ;
 int FUNC_8 (struct ipoib_neigh*) ;
 struct ipoib_dev_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct ipoib_dev_priv*,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int ,void*,int) ;
 struct rdma_netdev* FUNC_15 (struct net_device*) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (struct sk_buff*,int) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (int *,struct sk_buff*) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (struct net_device*,struct sk_buff*,int ,int ) ;
 int FUNC_23 (int ,int *) ;

void FUNC_24(struct net_device *VAR_6, u8 *VAR_7, struct sk_buff *VAR_8)
{
 struct ipoib_dev_priv *VAR_9 = FUNC_9(VAR_6);
 struct rdma_netdev *VAR_10 = FUNC_15(VAR_6);
 struct ipoib_mcast *VAR_11;
 unsigned long VAR_12;
 void *VAR_13 = VAR_7 + 4;

 FUNC_20(&VAR_9->lock, VAR_12);

 if (!FUNC_23(VAR_1, &VAR_9->flags) ||
     !VAR_9->broadcast ||
     !FUNC_23(VAR_3, &VAR_9->broadcast->flags)) {
  ++VAR_6->stats.tx_dropped;
  FUNC_3(VAR_8);
  goto unlock;
 }

 VAR_11 = FUNC_1(VAR_6, VAR_13);
 if (!VAR_11 || !VAR_11->ah) {
  if (!VAR_11) {

   FUNC_4(VAR_9, "setting up send only multicast group for %pI6\n",
     VAR_13);

   VAR_11 = FUNC_5(VAR_6, 0);
   if (!VAR_11) {
    FUNC_10(VAR_9, "unable to allocate memory "
        "for multicast structure\n");
    ++VAR_6->stats.tx_dropped;
    FUNC_3(VAR_8);
    goto unlock;
   }

   FUNC_16(VAR_5, &VAR_11->flags);
   FUNC_14(VAR_11->mcmember.mgid.raw, VAR_13,
          sizeof (union ib_gid));
   FUNC_0(VAR_6, VAR_11);
   FUNC_12(&VAR_11->list, &VAR_9->multicast_list);
  }
  if (FUNC_18(&VAR_11->pkt_queue) < VAR_2) {

   FUNC_17(VAR_8, sizeof(struct ipoib_pseudo_header));
   FUNC_19(&VAR_11->pkt_queue, VAR_8);
  } else {
   ++VAR_6->stats.tx_dropped;
   FUNC_3(VAR_8);
  }
  if (!FUNC_23(VAR_4, &VAR_11->flags)) {
   FUNC_2(VAR_9, ((void*)0), 0);
  }
 } else {
  struct ipoib_neigh *VAR_14;

  FUNC_21(&VAR_9->lock, VAR_12);
  VAR_14 = FUNC_7(VAR_6, VAR_7);
  FUNC_20(&VAR_9->lock, VAR_12);
  if (!VAR_14) {
   VAR_14 = FUNC_6(VAR_7, VAR_6);



   if (VAR_14 && FUNC_13(&VAR_14->list)) {
    FUNC_11(&VAR_11->ah->ref);
    VAR_14->ah = VAR_11->ah;
    VAR_14->ah->valid = 1;
    FUNC_12(&VAR_14->list, &VAR_11->neigh_list);
   }
  }
  FUNC_21(&VAR_9->lock, VAR_12);
  VAR_11->ah->last_send = VAR_10->send(VAR_6, VAR_8, VAR_11->ah->ah,
      VAR_0);
  if (VAR_14)
   FUNC_8(VAR_14);
  return;
 }

unlock:
 FUNC_21(&VAR_9->lock, VAR_12);
}
