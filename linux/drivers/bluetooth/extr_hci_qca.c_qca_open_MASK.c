
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qca_serdev {int oper_speed; int init_speed; int bt_en; int btsoc_type; } ;
struct qca_data {int wake_retrans; int tx_idle_delay; int tx_idle_timer; int wake_retrans_timer; int rx_skb; int workqueue; int vote_last_jif; int rx_ibs_state; int tx_ibs_state; int drop_ev_comp; struct hci_uart* hu; int ws_tx_vote_off; int ws_rx_vote_off; int ws_awake_device; int ws_awake_rx; int hci_ibs_lock; int tx_wait_q; int txq; } ;
struct hci_uart {struct qca_data* priv; int oper_speed; int init_speed; scalar_t__ serdev; } ;


 int FUNC_0 (char*,struct hci_uart*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct hci_uart*) ;
 int FUNC_7 (int *) ;
 int VAR_9 ;
 int FUNC_8 (struct qca_data*) ;
 int FUNC_9 (int ) ;
 struct qca_data* FUNC_10 (int,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct hci_uart*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct qca_serdev* FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_18(struct hci_uart *VAR_14)
{
 struct qca_serdev *VAR_15;
 struct qca_data *VAR_16;
 int VAR_17;

 FUNC_0("hu %p qca_open", VAR_14);

 if (!FUNC_6(VAR_14))
  return -VAR_1;

 VAR_16 = FUNC_10(sizeof(struct qca_data), VAR_2);
 if (!VAR_16)
  return -VAR_0;

 FUNC_15(&VAR_16->txq);
 FUNC_15(&VAR_16->tx_wait_q);
 FUNC_16(&VAR_16->hci_ibs_lock);
 VAR_16->workqueue = FUNC_3("qca_wq", 0);
 if (!VAR_16->workqueue) {
  FUNC_1("QCA Workqueue not initialized properly");
  FUNC_8(VAR_16);
  return -VAR_0;
 }

 FUNC_2(&VAR_16->ws_awake_rx, VAR_11);
 FUNC_2(&VAR_16->ws_awake_device, VAR_10);
 FUNC_2(&VAR_16->ws_rx_vote_off, VAR_12);
 FUNC_2(&VAR_16->ws_tx_vote_off, VAR_13);

 VAR_16->hu = VAR_14;
 FUNC_7(&VAR_16->drop_ev_comp);


 VAR_16->tx_ibs_state = VAR_4;
 VAR_16->rx_ibs_state = VAR_3;

 VAR_16->vote_last_jif = VAR_9;

 VAR_14->priv = VAR_16;

 if (VAR_14->serdev) {

  VAR_15 = FUNC_14(VAR_14->serdev);
  if (!FUNC_12(VAR_15->btsoc_type)) {
   FUNC_5(VAR_15->bt_en, 1);

   FUNC_11(150);
  } else {
   VAR_14->init_speed = VAR_15->init_speed;
   VAR_14->oper_speed = VAR_15->oper_speed;
   VAR_17 = FUNC_13(VAR_14, 1);
   if (VAR_17) {
    FUNC_4(VAR_16->workqueue);
    FUNC_9(VAR_16->rx_skb);
    VAR_14->priv = ((void*)0);
    FUNC_8(VAR_16);
    return VAR_17;
   }
  }
 }

 FUNC_17(&VAR_16->wake_retrans_timer, VAR_8, 0);
 VAR_16->wake_retrans = VAR_6;

 FUNC_17(&VAR_16->tx_idle_timer, VAR_7, 0);
 VAR_16->tx_idle_delay = VAR_5;

 FUNC_0("HCI_UART_QCA open, tx_idle_delay=%u, wake_retrans=%u",
        VAR_16->tx_idle_delay, VAR_16->wake_retrans);

 return 0;
}
