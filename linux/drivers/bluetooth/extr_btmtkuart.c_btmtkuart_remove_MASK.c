
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdev_device {int dummy; } ;
struct hci_dev {int dummy; } ;
struct btmtkuart_dev {int osc; int vcc; struct hci_dev* hdev; } ;


 scalar_t__ FUNC_0 (struct btmtkuart_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (int ) ;
 struct btmtkuart_dev* FUNC_5 (struct serdev_device*) ;

__attribute__((used)) static void FUNC_6(struct serdev_device *VAR_0)
{
 struct btmtkuart_dev *VAR_1 = FUNC_5(VAR_0);
 struct hci_dev *VAR_2 = VAR_1->hdev;

 if (FUNC_0(VAR_1)) {
  FUNC_4(VAR_1->vcc);
  FUNC_1(VAR_1->osc);
 }

 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
}
