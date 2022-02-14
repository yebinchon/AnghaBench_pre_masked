
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hci_uart {int flags; struct hci_dev* hdev; TYPE_2__* proto; int hdev_flags; TYPE_1__* tty; } ;
struct hci_dev {int dev_type; int quirks; int setup; int send; int flush; int close; int open; int manufacturer; int bus; } ;
struct TYPE_4__ {int (* open ) (struct hci_uart*) ;int (* close ) (struct hci_uart*) ;int manufacturer; scalar_t__ setup; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct hci_dev*,int ) ;
 struct hci_dev* FUNC_3 () ;
 int FUNC_4 (struct hci_dev*) ;
 scalar_t__ FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*,struct hci_uart*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct hci_uart*) ;
 int FUNC_9 (struct hci_uart*) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct hci_uart *VAR_19)
{
 struct hci_dev *VAR_20;
 int VAR_21;

 FUNC_0("");


 VAR_20 = FUNC_3();
 if (!VAR_20) {
  FUNC_1("Can't allocate HCI device");
  return -VAR_1;
 }

 VAR_19->hdev = VAR_20;

 VAR_20->bus = VAR_7;
 FUNC_6(VAR_20, VAR_19);





 if (VAR_19->proto->setup)
  VAR_20->manufacturer = VAR_19->proto->manufacturer;

 VAR_20->open = VAR_16;
 VAR_20->close = VAR_14;
 VAR_20->flush = VAR_15;
 VAR_20->send = VAR_17;
 VAR_20->setup = VAR_18;
 FUNC_2(VAR_20, VAR_19->tty->dev);

 if (FUNC_10(VAR_11, &VAR_19->hdev_flags))
  FUNC_7(VAR_5, &VAR_20->quirks);

 if (FUNC_10(VAR_9, &VAR_19->hdev_flags))
  FUNC_7(VAR_4, &VAR_20->quirks);

 if (!FUNC_10(VAR_13, &VAR_19->hdev_flags))
  FUNC_7(VAR_6, &VAR_20->quirks);

 if (FUNC_10(VAR_8, &VAR_19->hdev_flags))
  VAR_20->dev_type = VAR_2;
 else
  VAR_20->dev_type = VAR_3;




 VAR_21 = VAR_19->proto->open(VAR_19);
 if (VAR_21) {
  VAR_19->hdev = ((void*)0);
  FUNC_4(VAR_20);
  return VAR_21;
 }

 if (FUNC_10(VAR_10, &VAR_19->hdev_flags))
  return 0;

 if (FUNC_5(VAR_20) < 0) {
  FUNC_1("Can't register HCI device");
  VAR_19->proto->close(VAR_19);
  VAR_19->hdev = ((void*)0);
  FUNC_4(VAR_20);
  return -VAR_0;
 }

 FUNC_7(VAR_12, &VAR_19->flags);

 return 0;
}
