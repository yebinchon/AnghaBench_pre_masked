
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qca_serdev {int bt_en; int btsoc_type; } ;
struct qca_data {int rx_skb; int * hu; int workqueue; int wake_retrans_timer; int tx_idle_timer; int txq; int tx_wait_q; } ;
struct hci_uart {struct qca_data* priv; scalar_t__ serdev; } ;


 int FUNC_0 (char*,struct hci_uart*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct qca_data*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct hci_uart*) ;
 struct qca_serdev* FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,struct hci_uart*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct hci_uart *VAR_1)
{
 struct qca_serdev *VAR_2;
 struct qca_data *VAR_3 = VAR_1->priv;

 FUNC_0("hu %p qca close", VAR_1);

 FUNC_9(VAR_0, VAR_1);

 FUNC_10(&VAR_3->tx_wait_q);
 FUNC_10(&VAR_3->txq);
 FUNC_1(&VAR_3->tx_idle_timer);
 FUNC_1(&VAR_3->wake_retrans_timer);
 FUNC_2(VAR_3->workqueue);
 VAR_3->hu = ((void*)0);

 if (VAR_1->serdev) {
  VAR_2 = FUNC_8(VAR_1->serdev);
  if (FUNC_6(VAR_2->btsoc_type))
   FUNC_7(VAR_1);
  else
   FUNC_3(VAR_2->bt_en, 0);

 }

 FUNC_5(VAR_3->rx_skb);

 VAR_1->priv = ((void*)0);

 FUNC_4(VAR_3);

 return 0;
}
