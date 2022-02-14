
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct qca_data {int tx_ibs_state; int hci_ibs_lock; int ws_tx_vote_off; int workqueue; int ibs_sent_slps; struct hci_uart* hu; } ;
struct hci_uart {int dummy; } ;


 int FUNC_0 (char*,struct hci_uart*,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;



 int VAR_1 ;
 struct qca_data* FUNC_2 (int ,struct timer_list*,int ) ;
 struct qca_data* VAR_2 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,struct hci_uart*) ;
 int FUNC_5 (int *,unsigned long,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_4)
{
 struct qca_data *VAR_5 = FUNC_2(VAR_5, VAR_4, VAR_3);
 struct hci_uart *VAR_6 = VAR_5->hu;
 unsigned long VAR_7;

 FUNC_0("hu %p idle timeout in %d state", VAR_6, VAR_5->tx_ibs_state);

 FUNC_5(&VAR_5->hci_ibs_lock,
     VAR_7, VAR_1);

 switch (VAR_5->tx_ibs_state) {
 case 129:

  if (FUNC_4(VAR_0, VAR_6) < 0) {
   FUNC_1("Failed to send SLEEP to device");
   break;
  }
  VAR_5->tx_ibs_state = 130;
  VAR_5->ibs_sent_slps++;
  FUNC_3(VAR_5->workqueue, &VAR_5->ws_tx_vote_off);
  break;

 case 130:
 case 128:


 default:
  FUNC_1("Spurious timeout tx state %d", VAR_5->tx_ibs_state);
  break;
 }

 FUNC_6(&VAR_5->hci_ibs_lock, VAR_7);
}
