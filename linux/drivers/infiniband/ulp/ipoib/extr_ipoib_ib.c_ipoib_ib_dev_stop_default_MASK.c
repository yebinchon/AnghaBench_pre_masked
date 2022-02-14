
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_tx_buf {int * skb; } ;
struct ipoib_rx_buf {int * skb; int mapping; } ;
struct ipoib_dev_priv {int tx_head; int tx_tail; int recv_cq; int qp; struct ipoib_rx_buf* rx_ring; struct ipoib_tx_buf* tx_ring; int flags; } ;
struct ib_qp_attr {int qp_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ipoib_dev_priv*,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,struct ib_qp_attr*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ipoib_dev_priv*,char*) ;
 int FUNC_6 (struct ipoib_dev_priv*,struct ipoib_tx_buf*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 struct ipoib_dev_priv* FUNC_9 (struct net_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (struct ipoib_dev_priv*,int ) ;
 int FUNC_11 (struct ipoib_dev_priv*,char*,...) ;
 unsigned long VAR_8 ;
 scalar_t__ FUNC_12 (struct net_device*) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (unsigned long,unsigned long) ;
 int FUNC_15 (int,int) ;

int FUNC_16(struct net_device *VAR_9)
{
 struct ipoib_dev_priv *VAR_10 = FUNC_9(VAR_9);
 struct ib_qp_attr VAR_11;
 unsigned long VAR_12;
 struct ipoib_tx_buf *VAR_13;
 int VAR_14;

 if (FUNC_13(VAR_5, &VAR_10->flags))
  FUNC_8(VAR_9);

 FUNC_4(VAR_9);





 VAR_11.qp_state = VAR_2;
 if (FUNC_2(VAR_10->qp, &VAR_11, VAR_4))
  FUNC_0(VAR_10, VAR_10->qp, VAR_2);


 VAR_12 = VAR_8;

 while (VAR_10->tx_head != VAR_10->tx_tail || FUNC_12(VAR_9)) {
  if (FUNC_14(VAR_8, VAR_12 + 5 * VAR_0)) {
   FUNC_11(VAR_10,
       "timing out; %d sends %d receives not completed\n",
       VAR_10->tx_head - VAR_10->tx_tail,
       FUNC_12(VAR_9));





   while ((int)VAR_10->tx_tail - (int)VAR_10->tx_head < 0) {
    VAR_13 = &VAR_10->tx_ring[VAR_10->tx_tail &
       (VAR_7 - 1)];
    FUNC_6(VAR_10, VAR_13);
    FUNC_1(VAR_13->skb);
    ++VAR_10->tx_tail;
   }

   for (VAR_14 = 0; VAR_14 < VAR_6; ++VAR_14) {
    struct ipoib_rx_buf *VAR_15;

    VAR_15 = &VAR_10->rx_ring[VAR_14];
    if (!VAR_15->skb)
     continue;
    FUNC_10(VAR_10,
            VAR_10->rx_ring[VAR_14].mapping);
    FUNC_1(VAR_15->skb);
    VAR_15->skb = ((void*)0);
   }

   goto timeout;
  }

  FUNC_7(VAR_9);

  FUNC_15(1000, 2000);
 }

 FUNC_5(VAR_10, "All sends and receives done.\n");

timeout:
 VAR_11.qp_state = VAR_3;
 if (FUNC_2(VAR_10->qp, &VAR_11, VAR_4))
  FUNC_11(VAR_10, "Failed to modify QP to RESET state\n");

 FUNC_3(VAR_10->recv_cq, VAR_1);

 return 0;
}
