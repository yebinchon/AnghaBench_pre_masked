
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_tx_buf {int * mb; } ;
struct ipoib_rx_buf {int * mb; } ;
struct ipoib_dev_priv {scalar_t__ tx_head; scalar_t__ tx_tail; int recv_cq; int ah_reap_task; int flags; int qp; int poll_timer; struct ipoib_rx_buf* rx_ring; int tx_outstanding; int ca; struct ipoib_tx_buf* tx_ring; } ;
struct ib_qp_attr {int qp_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ipoib_dev_priv*,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,struct ib_qp_attr*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ipoib_dev_priv*) ;
 int FUNC_8 (struct ipoib_dev_priv*) ;
 int FUNC_9 (struct ipoib_dev_priv*,char*) ;
 int FUNC_10 (struct ipoib_dev_priv*,struct ipoib_rx_buf*) ;
 int FUNC_11 (int ,struct ipoib_tx_buf*) ;
 int FUNC_12 (struct ipoib_dev_priv*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (struct ipoib_dev_priv*,char*,...) ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (struct ipoib_dev_priv*) ;
 int FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (unsigned long,unsigned long) ;

int FUNC_19(struct ipoib_dev_priv *VAR_11, int VAR_12)
{
 struct ib_qp_attr VAR_13;
 unsigned long VAR_14;
 struct ipoib_tx_buf *VAR_15;
 int VAR_16;

 FUNC_2(VAR_5, &VAR_11->flags);

 FUNC_8(VAR_11);





 VAR_13.qp_state = VAR_2;
 if (FUNC_5(VAR_11->qp, &VAR_13, VAR_4))
  FUNC_1(VAR_11, VAR_11->qp, VAR_2);


 VAR_14 = VAR_10;

 while (VAR_11->tx_head != VAR_11->tx_tail || FUNC_16(VAR_11)) {
  if (FUNC_18(VAR_10, VAR_14 + 5 * VAR_0)) {
   FUNC_13(VAR_11, "timing out; %d sends %d receives not completed\n",
       VAR_11->tx_head - VAR_11->tx_tail, FUNC_16(VAR_11));





   while ((int) VAR_11->tx_tail - (int) VAR_11->tx_head < 0) {
    VAR_15 = &VAR_11->tx_ring[VAR_11->tx_tail &
       (VAR_8 - 1)];
    FUNC_11(VAR_11->ca, VAR_15);
    FUNC_14(VAR_15->mb);
    ++VAR_11->tx_tail;
    --VAR_11->tx_outstanding;
   }

   for (VAR_16 = 0; VAR_16 < VAR_7; ++VAR_16) {
    struct ipoib_rx_buf *VAR_17;

    VAR_17 = &VAR_11->rx_ring[VAR_16];
    if (!VAR_17->mb)
     continue;
    FUNC_10(VAR_11, &VAR_11->rx_ring[VAR_16]);
    FUNC_14(VAR_17->mb);
    VAR_17->mb = ((void*)0);
   }

   goto timeout;
  }

  FUNC_12(VAR_11);

  FUNC_15(1);
 }

 FUNC_9(VAR_11, "All sends and receives done.\n");

timeout:
 FUNC_3(&VAR_11->poll_timer);
 VAR_13.qp_state = VAR_3;
 if (FUNC_5(VAR_11->qp, &VAR_13, VAR_4))
  FUNC_13(VAR_11, "Failed to modify QP to RESET state\n");


 FUNC_17(VAR_6, &VAR_11->flags);
 FUNC_0(&VAR_11->ah_reap_task);
 if (VAR_12)
  FUNC_4(VAR_9);

 FUNC_7(VAR_11);

 FUNC_6(VAR_11->recv_cq, VAR_1);

 return 0;
}
