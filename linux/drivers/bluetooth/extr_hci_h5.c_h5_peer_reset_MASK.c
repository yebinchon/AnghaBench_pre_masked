
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart {int hdev; struct h5* priv; } ;
struct h5 {scalar_t__ tx_ack; scalar_t__ tx_seq; int unack; int unrel; int rel; int timer; int state; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hci_uart *VAR_1)
{
 struct h5 *VAR_2 = VAR_1->priv;

 FUNC_0("Peer device has reset");

 VAR_2->state = VAR_0;

 FUNC_1(&VAR_2->timer);

 FUNC_3(&VAR_2->rel);
 FUNC_3(&VAR_2->unrel);
 FUNC_3(&VAR_2->unack);

 VAR_2->tx_seq = 0;
 VAR_2->tx_ack = 0;


 FUNC_2(VAR_1->hdev);
}
