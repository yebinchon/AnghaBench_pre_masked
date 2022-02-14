
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nokia_bt_dev {int initialized; int tx_enabled; scalar_t__ man_id; int wakeup_bt; TYPE_2__* serdev; } ;
struct hci_uart {TYPE_1__* hdev; struct nokia_bt_dev* priv; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device dev; } ;
struct TYPE_4__ {int quirks; int set_bdaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (struct hci_uart*) ;
 int FUNC_5 (struct hci_uart*) ;
 int FUNC_6 (struct hci_uart*) ;
 int FUNC_7 (struct hci_uart*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct hci_uart *VAR_4)
{
 struct nokia_bt_dev *VAR_5 = VAR_4->priv;
 struct device *VAR_6 = &VAR_5->serdev->dev;
 int VAR_7;

 VAR_5->initialized = 0;

 FUNC_3(VAR_5->serdev, 0);

 FUNC_8(VAR_6);

 if (VAR_5->tx_enabled) {
  FUNC_2(VAR_5->wakeup_bt, 0);
  FUNC_9(&VAR_5->serdev->dev);
  VAR_5->tx_enabled = 0;
 }

 FUNC_0(VAR_6, "protocol setup");


 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7 < 0) {
  FUNC_1(VAR_6, "Reset failed: %d", VAR_7);
  goto out;
 }


 VAR_7 = FUNC_6(VAR_4);
 if (VAR_7 < 0) {
  FUNC_1(VAR_6, "Negotiation failed: %d", VAR_7);
  goto out;
 }


 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7 < 0) {
  FUNC_1(VAR_6, "Alive check failed: %d", VAR_7);
  goto out;
 }


 VAR_7 = FUNC_7(VAR_4);
 if (VAR_7 < 0) {
  FUNC_1(VAR_6, "Could not setup FW: %d", VAR_7);
  goto out;
 }

 FUNC_3(VAR_5->serdev, 0);
 FUNC_10(VAR_5->serdev, VAR_1);
 FUNC_3(VAR_5->serdev, 1);

 if (VAR_5->man_id == VAR_2) {
  VAR_4->hdev->set_bdaddr = VAR_3;
  FUNC_11(VAR_0, &VAR_4->hdev->quirks);
  FUNC_0(VAR_6, "bcm2048 has invalid bluetooth address!");
 }

 FUNC_0(VAR_6, "protocol setup done!");

 FUNC_2(VAR_5->wakeup_bt, 0);
 FUNC_9(VAR_6);
 VAR_5->tx_enabled = 0;
 VAR_5->initialized = 1;

 return 0;
out:
 FUNC_9(VAR_6);

 return VAR_7;
}
