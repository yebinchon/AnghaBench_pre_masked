
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int pkt_type; struct net_device* dev; scalar_t__ len; scalar_t__ data; int protocol; } ;
struct TYPE_5__ {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {TYPE_2__ stats; } ;
struct ipoib_header {int proto; } ;
struct TYPE_6__ {int rx_sge; int rx_wr; int passive_ids; int rx_reap_task; int rx_reap_list; struct ipoib_cm_rx_buf* srq_ring; int rx_drain_list; } ;
struct ipoib_dev_priv {TYPE_3__ cm; int ca; int lock; int wq; } ;
struct ipoib_cm_rx_buf {int * mapping; struct sk_buff* skb; } ;
struct ipoib_cm_rx {scalar_t__ state; int recv_count; int list; scalar_t__ jiffies; struct ipoib_cm_rx_buf* rx_ring; } ;
struct ib_wc {unsigned int wr_id; int byte_len; int slid; int vendor_err; int status; TYPE_1__* qp; } ;
struct TYPE_4__ {struct ipoib_cm_rx* qp_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_14 ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 struct sk_buff* FUNC_4 (struct net_device*,struct ipoib_cm_rx_buf*,unsigned int,int,int *,int ) ;
 int FUNC_5 (struct ipoib_dev_priv*,int,int *) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,struct ipoib_cm_rx*,int *,int ,unsigned int) ;
 int FUNC_8 (struct net_device*,unsigned int) ;
 int FUNC_9 (struct ipoib_dev_priv*) ;
 int FUNC_10 (struct ipoib_dev_priv*,char*,unsigned int,...) ;
 int FUNC_11 (struct ipoib_dev_priv*,char*,unsigned int,int ) ;
 struct ipoib_dev_priv* FUNC_12 (struct net_device*) ;
 unsigned int VAR_15 ;
 int FUNC_13 (struct ipoib_dev_priv*,char*,unsigned int,...) ;
 scalar_t__ VAR_16 ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *,int) ;
 scalar_t__ FUNC_17 (int ,int,int ) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*,scalar_t__,int) ;
 int FUNC_22 (struct sk_buff*,int) ;
 int FUNC_23 (struct sk_buff*,int ,unsigned int,struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*,scalar_t__) ;
 int FUNC_25 (int *,unsigned long) ;
 int FUNC_26 (int *,unsigned long) ;
 scalar_t__ FUNC_27 (scalar_t__,scalar_t__) ;
 int VAR_17 ;
 scalar_t__ FUNC_28 (int) ;

void FUNC_29(struct net_device *VAR_18, struct ib_wc *VAR_19)
{
 struct ipoib_dev_priv *VAR_20 = FUNC_12(VAR_18);
 struct ipoib_cm_rx_buf *VAR_21;
 unsigned int VAR_22 = VAR_19->wr_id & ~(VAR_11 | VAR_12);
 struct sk_buff *VAR_23, *VAR_24;
 struct ipoib_cm_rx *VAR_25;
 unsigned long VAR_26;
 u64 VAR_27[VAR_8];
 int VAR_28;
 int VAR_29;
 struct sk_buff *VAR_30;

 FUNC_11(VAR_20, "cm recv completion: id %d, status: %d\n",
         VAR_22, VAR_19->status);

 if (FUNC_28(VAR_22 >= VAR_15)) {
  if (VAR_22 == (VAR_5 & ~(VAR_11 | VAR_12))) {
   FUNC_25(&VAR_20->lock, VAR_26);
   FUNC_15(&VAR_20->cm.rx_drain_list, &VAR_20->cm.rx_reap_list);
   FUNC_9(VAR_20);
   FUNC_19(VAR_20->wq, &VAR_20->cm.rx_reap_task);
   FUNC_26(&VAR_20->lock, VAR_26);
  } else
   FUNC_13(VAR_20, "cm recv completion event with wrid %d (> %d)\n",
       VAR_22, VAR_15);
  return;
 }

 VAR_25 = VAR_19->qp->qp_context;

 VAR_29 = FUNC_6(VAR_18);
 VAR_21 = VAR_29 ? VAR_20->cm.srq_ring : VAR_25->rx_ring;

 VAR_23 = VAR_21[VAR_22].skb;

 if (FUNC_28(VAR_19->status != VAR_2)) {
  FUNC_10(VAR_20,
     "cm recv error (status=%d, wrid=%d vend_err %#x)\n",
     VAR_19->status, VAR_22, VAR_19->vendor_err);
  ++VAR_18->stats.rx_dropped;
  if (VAR_29)
   goto repost;
  else {
   if (!--VAR_25->recv_count) {
    FUNC_25(&VAR_20->lock, VAR_26);
    FUNC_14(&VAR_25->list, &VAR_20->cm.rx_reap_list);
    FUNC_26(&VAR_20->lock, VAR_26);
    FUNC_19(VAR_20->wq, &VAR_20->cm.rx_reap_task);
   }
   return;
  }
 }

 if (FUNC_28(!(VAR_22 & VAR_9))) {
  if (VAR_25 && FUNC_27(VAR_16, VAR_25->jiffies + VAR_10)) {
   FUNC_25(&VAR_20->lock, VAR_26);
   VAR_25->jiffies = VAR_16;


   if (VAR_25->state == VAR_6)
    FUNC_14(&VAR_25->list, &VAR_20->cm.passive_ids);
   FUNC_26(&VAR_20->lock, VAR_26);
  }
 }

 if (VAR_19->byte_len < VAR_3) {
  int VAR_31 = VAR_19->byte_len;

  VAR_30 = FUNC_1(VAR_31 + VAR_7);
  if (VAR_30) {
   FUNC_24(VAR_30, VAR_7);
   FUNC_2(VAR_20->ca, VAR_21[VAR_22].mapping[0],
         VAR_31, VAR_0);
   FUNC_21(VAR_23, VAR_30->data, VAR_31);
   FUNC_3(VAR_20->ca, VAR_21[VAR_22].mapping[0],
            VAR_31, VAR_0);
   FUNC_22(VAR_30, VAR_31);
   VAR_23 = VAR_30;
   goto copied;
  }
 }

 VAR_28 = FUNC_0(VAR_19->byte_len -
      FUNC_17(VAR_17, VAR_19->byte_len, VAR_4)) /
  VAR_14;

 VAR_24 = FUNC_4(VAR_18, VAR_21, VAR_22, VAR_28,
           VAR_27, VAR_1);
 if (FUNC_28(!VAR_24)) {




  FUNC_10(VAR_20, "failed to allocate receive buffer %d\n", VAR_22);
  ++VAR_18->stats.rx_dropped;
  goto repost;
 }

 FUNC_5(VAR_20, VAR_28, VAR_21[VAR_22].mapping);
 FUNC_16(VAR_21[VAR_22].mapping, VAR_27, (VAR_28 + 1) * sizeof(*VAR_27));

 FUNC_11(VAR_20, "received %d bytes, SLID 0x%04x\n",
         VAR_19->byte_len, VAR_19->slid);

 FUNC_23(VAR_23, VAR_4, VAR_19->byte_len, VAR_24);

copied:
 VAR_23->protocol = ((struct ipoib_header *) VAR_23->data)->proto;
 FUNC_20(VAR_23);

 ++VAR_18->stats.rx_packets;
 VAR_18->stats.rx_bytes += VAR_23->len;

 VAR_23->dev = VAR_18;

 VAR_23->pkt_type = VAR_13;
 FUNC_18(VAR_23);

repost:
 if (VAR_29) {
  if (FUNC_28(FUNC_8(VAR_18, VAR_22)))
   FUNC_13(VAR_20, "ipoib_cm_post_receive_srq failed "
       "for buf %d\n", VAR_22);
 } else {
  if (FUNC_28(FUNC_7(VAR_18, VAR_25,
         &VAR_20->cm.rx_wr,
         VAR_20->cm.rx_sge,
         VAR_22))) {
   --VAR_25->recv_count;
   FUNC_13(VAR_20, "ipoib_cm_post_receive_nonsrq failed "
       "for buf %d\n", VAR_22);
  }
 }
}
