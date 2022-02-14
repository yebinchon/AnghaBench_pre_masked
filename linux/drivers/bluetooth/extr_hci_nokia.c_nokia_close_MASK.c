
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nokia_bt_dev {int initialized; TYPE_1__* serdev; int wakeup_bt; int reset; int rx_skb; int txq; } ;
struct hci_uart {struct nokia_bt_dev* priv; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hci_uart *VAR_0)
{
 struct nokia_bt_dev *VAR_1 = VAR_0->priv;
 struct device *VAR_2 = &VAR_1->serdev->dev;

 FUNC_0(VAR_2, "close device");

 VAR_1->initialized = 0;

 FUNC_4(&VAR_1->txq);

 FUNC_2(VAR_1->rx_skb);


 FUNC_1(VAR_1->reset, 1);
 FUNC_1(VAR_1->wakeup_bt, 0);

 FUNC_3(&VAR_1->serdev->dev);

 return 0;
}
