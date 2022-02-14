
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; scalar_t__ ip_summed; void* data; } ;
struct TYPE_7__ {int tx_errors; int tx_dropped; } ;
struct net_device {TYPE_3__ stats; } ;
struct ipoib_tx_buf {struct sk_buff* skb; } ;
struct TYPE_5__ {int send_flags; } ;
struct TYPE_6__ {TYPE_1__ wr; } ;
struct ipoib_dev_priv {int max_send_sge; scalar_t__ mcast_mtu; int tx_head; int tx_tail; int send_cq; TYPE_2__ tx_wr; int ca; struct ipoib_tx_buf* tx_ring; } ;
struct ib_ah {int dummy; } ;
struct TYPE_8__ {unsigned int nr_frags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (struct net_device*,struct sk_buff*,scalar_t__) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*,scalar_t__,struct ib_ah*,int ) ;
 int FUNC_5 (int ,struct ipoib_tx_buf*) ;
 int FUNC_6 (struct ipoib_dev_priv*,struct ipoib_tx_buf*) ;
 struct ipoib_dev_priv* FUNC_7 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_8 (struct ipoib_dev_priv*,char*,...) ;
 scalar_t__ FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct ipoib_dev_priv*,int,struct ib_ah*,int ,struct ipoib_tx_buf*,void*,int) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*,int) ;
 TYPE_4__* FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*) ;
 scalar_t__ FUNC_23 (int) ;

int FUNC_24(struct net_device *VAR_6, struct sk_buff *VAR_7,
        struct ib_ah *VAR_8, u32 VAR_9)
{
 struct ipoib_dev_priv *VAR_10 = FUNC_7(VAR_6);
 struct ipoib_tx_buf *VAR_11;
 int VAR_12, VAR_13;
 void *VAR_14;
 unsigned int VAR_15 = VAR_10->max_send_sge - !!FUNC_15(VAR_7);

 if (FUNC_16(VAR_7)) {
  VAR_12 = FUNC_21(VAR_7) + FUNC_22(VAR_7);
  VAR_14 = VAR_7->data;
  if (FUNC_23(!FUNC_19(VAR_7, VAR_12))) {
   FUNC_8(VAR_10, "linear data too small\n");
   ++VAR_6->stats.tx_dropped;
   ++VAR_6->stats.tx_errors;
   FUNC_0(VAR_7);
   return -1;
  }
 } else {
  if (FUNC_23(VAR_7->len > VAR_10->mcast_mtu + VAR_4)) {
   FUNC_8(VAR_10, "packet len %d (> %d) too long to send, dropping\n",
       VAR_7->len, VAR_10->mcast_mtu + VAR_4);
   ++VAR_6->stats.tx_dropped;
   ++VAR_6->stats.tx_errors;
   FUNC_2(VAR_6, VAR_7, VAR_10->mcast_mtu);
   return -1;
  }
  VAR_14 = ((void*)0);
  VAR_12 = 0;
 }
 if (FUNC_20(VAR_7)->nr_frags > VAR_15) {
  if (FUNC_17(VAR_7) < 0) {
   FUNC_8(VAR_10, "skb could not be linearized\n");
   ++VAR_6->stats.tx_dropped;
   ++VAR_6->stats.tx_errors;
   FUNC_0(VAR_7);
   return -1;
  }

  if (FUNC_20(VAR_7)->nr_frags > VAR_15) {
   FUNC_8(VAR_10, "too many frags after skb linearize\n");
   ++VAR_6->stats.tx_dropped;
   ++VAR_6->stats.tx_errors;
   FUNC_0(VAR_7);
   return -1;
  }
 }

 FUNC_4(VAR_10,
         "sending packet, length=%d address=%p dqpn=0x%06x\n",
         VAR_7->len, VAR_8, VAR_9);
 VAR_11 = &VAR_10->tx_ring[VAR_10->tx_head & (VAR_5 - 1)];
 VAR_11->skb = VAR_7;
 if (FUNC_23(FUNC_5(VAR_10->ca, VAR_11))) {
  ++VAR_6->stats.tx_errors;
  FUNC_0(VAR_7);
  return -1;
 }

 if (VAR_7->ip_summed == VAR_0)
  VAR_10->tx_wr.wr.send_flags |= VAR_3;
 else
  VAR_10->tx_wr.wr.send_flags &= ~VAR_3;

 if (VAR_10->tx_head - VAR_10->tx_tail == VAR_5 - 1) {
  FUNC_3(VAR_10, "TX ring full, stopping kernel net queue\n");
  FUNC_10(VAR_6);
 }

 FUNC_18(VAR_7);
 FUNC_14(VAR_7);

 if (FUNC_9(VAR_6))
  if (FUNC_1(VAR_10->send_cq, VAR_1 |
         VAR_2) < 0)
   FUNC_8(VAR_10, "request notify on send CQ failed\n");

 VAR_13 = FUNC_13(VAR_10, VAR_10->tx_head & (VAR_5 - 1),
         VAR_8, VAR_9, VAR_11, VAR_14, VAR_12);
 if (FUNC_23(VAR_13)) {
  FUNC_8(VAR_10, "post_send failed, error %d\n", VAR_13);
  ++VAR_6->stats.tx_errors;
  FUNC_6(VAR_10, VAR_11);
  FUNC_0(VAR_7);
  if (FUNC_9(VAR_6))
   FUNC_12(VAR_6);
  VAR_13 = 0;
 } else {
  FUNC_11(VAR_6);

  VAR_13 = VAR_10->tx_head;
  ++VAR_10->tx_head;
 }
 return VAR_13;
}
