
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
struct btmtkuart_dev {int stp_cursor; scalar_t__ stp_dlen; int * rx_skb; int tx_work; int txq; int serdev; } ;


 int FUNC_0 (int *) ;
 struct btmtkuart_dev* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hci_dev *VAR_0)
{
 struct btmtkuart_dev *VAR_1 = FUNC_1(VAR_0);


 FUNC_3(VAR_1->serdev);
 FUNC_4(&VAR_1->txq);

 FUNC_0(&VAR_1->tx_work);

 FUNC_2(VAR_1->rx_skb);
 VAR_1->rx_skb = ((void*)0);

 VAR_1->stp_cursor = 2;
 VAR_1->stp_dlen = 0;

 return 0;
}
