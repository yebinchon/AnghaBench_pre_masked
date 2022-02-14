
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct qca_data {int tx_ibs_state; int hci_ibs_lock; int wake_retrans_timer; int wake_retrans; int ibs_sent_wakes; struct hci_uart* hu; } ;
struct hci_uart {int dummy; } ;


 int FUNC_0 (char*,struct hci_uart*,int) ;
 int FUNC_1 (char*,...) ;



 int VAR_0 ;
 int VAR_1 ;
 struct qca_data* FUNC_2 (int ,struct timer_list*,int ) ;
 int FUNC_3 (struct hci_uart*) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ) ;
 unsigned long FUNC_5 (int ) ;
 struct qca_data* VAR_3 ;
 int FUNC_6 (int ,struct hci_uart*) ;
 int FUNC_7 (int *,unsigned long,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_5)
{
 struct qca_data *VAR_6 = FUNC_2(VAR_6, VAR_5, VAR_4);
 struct hci_uart *VAR_7 = VAR_6->hu;
 unsigned long VAR_8, VAR_9;
 bool VAR_10 = 0;

 FUNC_0("hu %p wake retransmit timeout in %d state",
  VAR_7, VAR_6->tx_ibs_state);

 FUNC_7(&VAR_6->hci_ibs_lock,
     VAR_8, VAR_1);

 switch (VAR_6->tx_ibs_state) {
 case 128:

  VAR_10 = 1;
  if (FUNC_6(VAR_0, VAR_7) < 0) {
   FUNC_1("Failed to acknowledge device wake up");
   break;
  }
  VAR_6->ibs_sent_wakes++;
  VAR_9 = FUNC_5(VAR_6->wake_retrans);
  FUNC_4(&VAR_6->wake_retrans_timer, VAR_2 + VAR_9);
  break;

 case 130:
 case 129:


 default:
  FUNC_1("Spurious timeout tx state %d", VAR_6->tx_ibs_state);
  break;
 }

 FUNC_8(&VAR_6->hci_ibs_lock, VAR_8);

 if (VAR_10)
  FUNC_3(VAR_7);
}
