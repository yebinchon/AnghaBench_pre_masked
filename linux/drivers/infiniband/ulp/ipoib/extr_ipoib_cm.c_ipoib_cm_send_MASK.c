
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_5__ {int tx_errors; int tx_dropped; } ;
struct net_device {TYPE_2__ stats; } ;
struct ipoib_tx_buf {struct sk_buff* skb; } ;
struct ipoib_dev_priv {int tx_head; int tx_tail; int send_napi; int send_cq; int ca; } ;
struct ipoib_cm_tx {int max_send_sge; scalar_t__ mtu; int tx_head; TYPE_1__* qp; struct ipoib_tx_buf* tx_ring; } ;
struct TYPE_6__ {unsigned int nr_frags; } ;
struct TYPE_4__ {int qp_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct net_device*,struct sk_buff*,scalar_t__) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*,int ) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*,int,scalar_t__,int ) ;
 int FUNC_5 (int ,struct ipoib_tx_buf*) ;
 int FUNC_6 (struct ipoib_dev_priv*,struct ipoib_tx_buf*) ;
 struct ipoib_dev_priv* FUNC_7 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_8 (struct ipoib_dev_priv*,char*,...) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct ipoib_dev_priv*,struct ipoib_cm_tx*,int,struct ipoib_tx_buf*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 TYPE_3__* FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (int) ;

void FUNC_21(struct net_device *VAR_4, struct sk_buff *VAR_5, struct ipoib_cm_tx *VAR_6)
{
 struct ipoib_dev_priv *VAR_7 = FUNC_7(VAR_4);
 struct ipoib_tx_buf *VAR_8;
 int VAR_9;
 unsigned int VAR_10 = VAR_6->max_send_sge - !!FUNC_16(VAR_5);

 if (FUNC_20(VAR_5->len > VAR_6->mtu)) {
  FUNC_8(VAR_7, "packet len %d (> %d) too long to send, dropping\n",
      VAR_5->len, VAR_6->mtu);
  ++VAR_4->stats.tx_dropped;
  ++VAR_4->stats.tx_errors;
  FUNC_2(VAR_4, VAR_5, VAR_6->mtu - VAR_2);
  return;
 }
 if (FUNC_19(VAR_5)->nr_frags > VAR_10) {
  if (FUNC_17(VAR_5) < 0) {
   FUNC_8(VAR_7, "skb could not be linearized\n");
   ++VAR_4->stats.tx_dropped;
   ++VAR_4->stats.tx_errors;
   FUNC_0(VAR_5);
   return;
  }

  if (FUNC_19(VAR_5)->nr_frags > VAR_10) {
   FUNC_8(VAR_7, "too many frags after skb linearize\n");
   ++VAR_4->stats.tx_dropped;
   ++VAR_4->stats.tx_errors;
   FUNC_0(VAR_5);
   return;
  }
 }
 FUNC_4(VAR_7, "sending packet: head 0x%x length %d connection 0x%x\n",
         VAR_6->tx_head, VAR_5->len, VAR_6->qp->qp_num);
 VAR_8 = &VAR_6->tx_ring[VAR_6->tx_head & (VAR_3 - 1)];
 VAR_8->skb = VAR_5;

 if (FUNC_20(FUNC_5(VAR_7->ca, VAR_8))) {
  ++VAR_4->stats.tx_errors;
  FUNC_0(VAR_5);
  return;
 }

 if ((VAR_7->tx_head - VAR_7->tx_tail) == VAR_3 - 1) {
  FUNC_3(VAR_7, "TX ring 0x%x full, stopping kernel net queue\n",
     VAR_6->qp->qp_num);
  FUNC_11(VAR_4);
 }

 FUNC_18(VAR_5);
 FUNC_15(VAR_5);

 if (FUNC_10(VAR_4)) {
  VAR_9 = FUNC_1(VAR_7->send_cq, VAR_0 |
          VAR_1);
  if (FUNC_20(VAR_9 < 0))
   FUNC_8(VAR_7, "IPoIB/CM:request notify on send CQ failed\n");
  else if (VAR_9)
   FUNC_9(&VAR_7->send_napi);
 }

 VAR_9 = FUNC_14(VAR_7, VAR_6, VAR_6->tx_head & (VAR_3 - 1), VAR_8);
 if (FUNC_20(VAR_9)) {
  FUNC_8(VAR_7, "IPoIB/CM:post_send failed, error %d\n", VAR_9);
  ++VAR_4->stats.tx_errors;
  FUNC_6(VAR_7, VAR_8);
  FUNC_0(VAR_5);

  if (FUNC_10(VAR_4))
   FUNC_13(VAR_4);
 } else {
  FUNC_12(VAR_4);
  ++VAR_6->tx_head;
  ++VAR_7->tx_head;
 }
}
