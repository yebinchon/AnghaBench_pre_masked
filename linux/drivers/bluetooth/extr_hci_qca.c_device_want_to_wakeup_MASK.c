
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qca_data {int rx_ibs_state; int hci_ibs_lock; int ibs_sent_wacks; int ws_awake_rx; int workqueue; int ibs_recv_wakes; } ;
struct hci_uart {struct qca_data* priv; } ;


 int FUNC_0 (char*,struct hci_uart*) ;
 int FUNC_1 (char*,...) ;


 int VAR_0 ;
 int FUNC_2 (struct hci_uart*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,struct hci_uart*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct hci_uart *VAR_1)
{
 unsigned long VAR_2;
 struct qca_data *VAR_3 = VAR_1->priv;

 FUNC_0("hu %p want to wake up", VAR_1);

 FUNC_5(&VAR_3->hci_ibs_lock, VAR_2);

 VAR_3->ibs_recv_wakes++;

 switch (VAR_3->rx_ibs_state) {
 case 129:



  FUNC_3(VAR_3->workqueue, &VAR_3->ws_awake_rx);
  FUNC_6(&VAR_3->hci_ibs_lock, VAR_2);
  return;

 case 128:



  if (FUNC_4(VAR_0, VAR_1) < 0) {
   FUNC_1("Failed to acknowledge device wake up");
   break;
  }
  VAR_3->ibs_sent_wacks++;
  break;

 default:

  FUNC_1("Received HCI_IBS_WAKE_IND in rx state %d",
         VAR_3->rx_ibs_state);
  break;
 }

 FUNC_6(&VAR_3->hci_ibs_lock, VAR_2);


 FUNC_2(VAR_1);
}
