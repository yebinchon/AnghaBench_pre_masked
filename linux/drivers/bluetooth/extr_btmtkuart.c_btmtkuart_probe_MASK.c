
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdev_device {int dev; } ;
struct hci_dev {int manufacturer; int quirks; int send; int shutdown; int setup; int flush; int close; int open; int bus; } ;
struct btmtkuart_dev {int vcc; int tx_state; int pins_runtime; int pinctrl; scalar_t__ boot; scalar_t__ reset; int osc; int pins_boot; struct hci_dev* hdev; int txq; int tx_work; struct serdev_device* serdev; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct hci_dev*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct btmtkuart_dev*) ;
 int VAR_9 ;
 int FUNC_3 (struct serdev_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,scalar_t__) ;
 struct btmtkuart_dev* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (scalar_t__,int) ;
 struct hci_dev* FUNC_10 () ;
 int FUNC_11 (struct hci_dev*) ;
 int FUNC_12 (struct hci_dev*) ;
 int FUNC_13 (struct hci_dev*,struct btmtkuart_dev*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct serdev_device*,int *) ;
 int FUNC_21 (struct serdev_device*,struct btmtkuart_dev*) ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int,int) ;

__attribute__((used)) static int FUNC_25(struct serdev_device *VAR_14)
{
 struct btmtkuart_dev *VAR_15;
 struct hci_dev *VAR_16;
 int VAR_17;

 VAR_15 = FUNC_8(&VAR_14->dev, sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_2;

 VAR_15->data = FUNC_15(&VAR_14->dev);
 if (!VAR_15->data)
  return -VAR_1;

 VAR_15->serdev = VAR_14;
 FUNC_21(VAR_14, VAR_15);

 FUNC_20(VAR_14, &VAR_6);

 VAR_17 = FUNC_3(VAR_14);
 if (VAR_17 < 0)
  return VAR_17;

 FUNC_0(&VAR_15->tx_work, VAR_13);
 FUNC_23(&VAR_15->txq);


 VAR_16 = FUNC_10();
 if (!VAR_16) {
  FUNC_6(&VAR_14->dev, "Can't allocate HCI device\n");
  return -VAR_2;
 }

 VAR_15->hdev = VAR_16;

 VAR_16->bus = VAR_5;
 FUNC_13(VAR_16, VAR_15);

 VAR_16->open = VAR_9;
 VAR_16->close = VAR_7;
 VAR_16->flush = VAR_8;
 VAR_16->setup = VAR_11;
 VAR_16->shutdown = VAR_12;
 VAR_16->send = VAR_10;
 FUNC_1(VAR_16, &VAR_14->dev);

 VAR_16->manufacturer = 70;
 FUNC_22(VAR_4, &VAR_16->quirks);

 if (FUNC_2(VAR_15)) {
  VAR_17 = FUNC_5(VAR_15->osc);
  if (VAR_17 < 0)
   return VAR_17;

  if (VAR_15->boot) {
   FUNC_9(VAR_15->boot, 1);
  } else {



   FUNC_16(VAR_15->pinctrl, VAR_15->pins_boot);
  }


  VAR_17 = FUNC_19(VAR_15->vcc);
  if (VAR_17 < 0) {
   FUNC_4(VAR_15->osc);
   return VAR_17;
  }




  if (VAR_15->reset) {
   FUNC_9(VAR_15->reset, 1);
   FUNC_24(1000, 2000);
   FUNC_9(VAR_15->reset, 0);
  }




  FUNC_14(50);

  if (VAR_15->boot)
   FUNC_7(&VAR_14->dev, VAR_15->boot);

  FUNC_16(VAR_15->pinctrl, VAR_15->pins_runtime);




  FUNC_17(&VAR_14->dev);

  FUNC_22(VAR_0, &VAR_15->tx_state);
 }

 VAR_17 = FUNC_12(VAR_16);
 if (VAR_17 < 0) {
  FUNC_6(&VAR_14->dev, "Can't register HCI device\n");
  FUNC_11(VAR_16);
  goto err_regulator_disable;
 }

 return 0;

err_regulator_disable:
 if (FUNC_2(VAR_15))
  FUNC_18(VAR_15->vcc);

 return VAR_17;
}
