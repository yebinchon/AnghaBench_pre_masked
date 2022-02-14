
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nokia_bt_dev {int txq; TYPE_1__* serdev; } ;
struct hci_uart {struct nokia_bt_dev* priv; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct hci_uart *VAR_0)
{
 struct nokia_bt_dev *VAR_1 = VAR_0->priv;

 FUNC_0(&VAR_1->serdev->dev, "flush device");

 FUNC_1(&VAR_1->txq);

 return 0;
}
