
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ll_struct {int rx_skb; int txq; int tx_wait_q; } ;
struct ll_device {int ext_clk; int enable_gpio; } ;
struct hci_uart {struct ll_struct* priv; scalar_t__ serdev; } ;


 int FUNC_0 (char*,struct hci_uart*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ll_struct*) ;
 int FUNC_4 (int ) ;
 struct ll_device* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct hci_uart *VAR_0)
{
 struct ll_struct *VAR_1 = VAR_0->priv;

 FUNC_0("hu %p", VAR_0);

 FUNC_6(&VAR_1->tx_wait_q);
 FUNC_6(&VAR_1->txq);

 FUNC_4(VAR_1->rx_skb);

 if (VAR_0->serdev) {
  struct ll_device *VAR_2 = FUNC_5(VAR_0->serdev);

  FUNC_2(VAR_2->enable_gpio, 0);

  FUNC_1(VAR_2->ext_clk);
 }

 VAR_0->priv = ((void*)0);

 FUNC_3(VAR_1);

 return 0;
}
