
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qca_data {int rx_ibs_state; int hci_ibs_lock; int ws_rx_vote_off; int workqueue; int ibs_recv_slps; } ;
struct hci_uart {struct qca_data* priv; } ;


 int FUNC_0 (char*,struct hci_uart*,int) ;
 int FUNC_1 (char*,int) ;


 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct hci_uart *VAR_0)
{
 unsigned long VAR_1;
 struct qca_data *VAR_2 = VAR_0->priv;

 FUNC_0("hu %p want to sleep in %d state", VAR_0, VAR_2->rx_ibs_state);

 FUNC_3(&VAR_2->hci_ibs_lock, VAR_1);

 VAR_2->ibs_recv_slps++;

 switch (VAR_2->rx_ibs_state) {
 case 128:

  VAR_2->rx_ibs_state = 129;

  FUNC_2(VAR_2->workqueue, &VAR_2->ws_rx_vote_off);
  break;

 case 129:
  break;

 default:

  FUNC_1("Received HCI_IBS_SLEEP_IND in rx state %d",
         VAR_2->rx_ibs_state);
  break;
 }

 FUNC_4(&VAR_2->hci_ibs_lock, VAR_1);
}
