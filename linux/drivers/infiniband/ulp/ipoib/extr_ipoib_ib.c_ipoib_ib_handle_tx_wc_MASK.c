
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct ipoib_tx_buf {TYPE_2__* skb; } ;
struct ipoib_qp_state_validate {int work; struct ipoib_dev_priv* priv; } ;
struct ipoib_dev_priv {unsigned int tx_tail; unsigned int tx_head; int wq; int flags; struct ipoib_tx_buf* tx_ring; } ;
struct ib_wc {unsigned int wr_id; int vendor_err; int status; } ;
struct TYPE_4__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct ipoib_dev_priv*,char*,unsigned int,int ) ;
 int FUNC_3 (struct ipoib_dev_priv*,struct ipoib_tx_buf*) ;
 struct ipoib_dev_priv* FUNC_4 (struct net_device*) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_5 (struct ipoib_dev_priv*,char*,unsigned int,unsigned int,...) ;
 struct ipoib_qp_state_validate* FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_6, struct ib_wc *VAR_7)
{
 struct ipoib_dev_priv *VAR_8 = FUNC_4(VAR_6);
 unsigned int VAR_9 = VAR_7->wr_id;
 struct ipoib_tx_buf *VAR_10;

 FUNC_2(VAR_8, "send completion: id %d, status: %d\n",
         VAR_9, VAR_7->status);

 if (FUNC_11(VAR_9 >= VAR_5)) {
  FUNC_5(VAR_8, "send completion event with wrid %d (> %d)\n",
      VAR_9, VAR_5);
  return;
 }

 VAR_10 = &VAR_8->tx_ring[VAR_9];

 FUNC_3(VAR_8, VAR_10);

 ++VAR_6->stats.tx_packets;
 VAR_6->stats.tx_bytes += VAR_10->skb->len;

 FUNC_1(VAR_10->skb);

 ++VAR_8->tx_tail;

 if (FUNC_11(FUNC_7(VAR_6) &&
       ((VAR_8->tx_head - VAR_8->tx_tail) <= VAR_5 >> 1) &&
       FUNC_10(VAR_3, &VAR_8->flags)))
  FUNC_8(VAR_6);

 if (VAR_7->status != VAR_1 &&
     VAR_7->status != VAR_2) {
  struct ipoib_qp_state_validate *VAR_11;
  FUNC_5(VAR_8,
      "failed send event (status=%d, wrid=%d vend_err %#x)\n",
      VAR_7->status, VAR_9, VAR_7->vendor_err);
  VAR_11 = FUNC_6(sizeof(*VAR_11), VAR_0);
  if (!VAR_11)
   return;

  FUNC_0(&VAR_11->work, VAR_4);
  VAR_11->priv = VAR_8;
  FUNC_9(VAR_8->wq, &VAR_11->work);
 }
}
