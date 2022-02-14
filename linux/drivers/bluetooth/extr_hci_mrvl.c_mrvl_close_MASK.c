
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrvl_data {int rx_skb; int rawq; int txq; } ;
struct hci_uart {struct mrvl_data* priv; scalar_t__ serdev; } ;


 int FUNC_0 (char*,struct hci_uart*) ;
 int FUNC_1 (struct mrvl_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hci_uart *VAR_0)
{
 struct mrvl_data *VAR_1 = VAR_0->priv;

 FUNC_0("hu %p", VAR_0);

 if (VAR_0->serdev)
  FUNC_3(VAR_0->serdev);

 FUNC_4(&VAR_1->txq);
 FUNC_4(&VAR_1->rawq);
 FUNC_2(VAR_1->rx_skb);
 FUNC_1(VAR_1);

 VAR_0->priv = ((void*)0);
 return 0;
}
