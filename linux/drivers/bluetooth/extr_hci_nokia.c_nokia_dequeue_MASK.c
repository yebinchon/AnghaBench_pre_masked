
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nokia_bt_dev {int tx_enabled; int wakeup_bt; TYPE_1__* serdev; int initialized; int txq; } ;
struct hci_uart {struct nokia_bt_dev* priv; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 struct sk_buff* FUNC_4 (int *) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct hci_uart *VAR_0)
{
 struct nokia_bt_dev *VAR_1 = VAR_0->priv;
 struct device *VAR_2 = &VAR_1->serdev->dev;
 struct sk_buff *VAR_3 = FUNC_4(&VAR_1->txq);

 if (!VAR_1->initialized)
  return VAR_3;

 if (VAR_1->tx_enabled == !!VAR_3)
  return VAR_3;

 if (VAR_3) {
  FUNC_1(VAR_2);
  FUNC_0(VAR_1->wakeup_bt, 1);
 } else {
  FUNC_3(VAR_1->serdev, 0);
  FUNC_0(VAR_1->wakeup_bt, 0);
  FUNC_2(VAR_2);
 }

 VAR_1->tx_enabled = !!VAR_3;

 return VAR_3;
}
