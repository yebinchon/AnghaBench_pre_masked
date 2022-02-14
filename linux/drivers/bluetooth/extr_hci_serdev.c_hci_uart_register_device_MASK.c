
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hci_uart_proto {int (* open ) (struct hci_uart*) ;int (* close ) (struct hci_uart*) ;int manufacturer; scalar_t__ setup; } ;
struct hci_uart {TYPE_1__* serdev; int flags; int hdev_flags; struct hci_uart_proto const* proto; int proto_lock; int write_work; int init_ready; struct hci_dev* hdev; } ;
struct hci_dev {int dev_type; int quirks; int setup; int send; int flush; int close; int open; int manufacturer; int bus; } ;
struct TYPE_4__ {int dev; } ;


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
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct hci_dev*,int *) ;
 int FUNC_4 (int ,int *) ;
 struct hci_dev* FUNC_5 () ;
 int FUNC_6 (struct hci_dev*) ;
 scalar_t__ FUNC_7 (struct hci_dev*) ;
 int VAR_13 ;
 int FUNC_8 (struct hci_dev*,struct hci_uart*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (struct hci_uart*) ;
 int FUNC_15 (struct hci_uart*) ;
 scalar_t__ FUNC_16 (int ,int *) ;

int FUNC_17(struct hci_uart *VAR_21,
        const struct hci_uart_proto *VAR_22)
{
 int VAR_23;
 struct hci_dev *VAR_24;

 FUNC_0("");

 FUNC_12(VAR_21->serdev, &VAR_13);

 VAR_23 = FUNC_11(VAR_21->serdev);
 if (VAR_23)
  return VAR_23;

 VAR_23 = VAR_22->open(VAR_21);
 if (VAR_23)
  goto err_open;

 VAR_21->proto = VAR_22;
 FUNC_13(VAR_10, &VAR_21->flags);


 VAR_24 = FUNC_5();
 if (!VAR_24) {
  FUNC_1("Can't allocate HCI device");
  VAR_23 = -VAR_1;
  goto err_alloc;
 }

 VAR_21->hdev = VAR_24;

 VAR_24->bus = VAR_6;
 FUNC_8(VAR_24, VAR_21);

 FUNC_2(&VAR_21->init_ready, VAR_16);
 FUNC_2(&VAR_21->write_work, VAR_20);
 FUNC_9(&VAR_21->proto_lock);





 if (VAR_21->proto->setup)
  VAR_24->manufacturer = VAR_21->proto->manufacturer;

 VAR_24->open = VAR_17;
 VAR_24->close = VAR_14;
 VAR_24->flush = VAR_15;
 VAR_24->send = VAR_18;
 VAR_24->setup = VAR_19;
 FUNC_3(VAR_24, &VAR_21->serdev->dev);

 if (FUNC_16(VAR_11, &VAR_21->hdev_flags))
  FUNC_13(VAR_5, &VAR_24->quirks);

 if (FUNC_16(VAR_8, &VAR_21->hdev_flags))
  FUNC_13(VAR_4, &VAR_24->quirks);

 if (FUNC_16(VAR_7, &VAR_21->hdev_flags))
  VAR_24->dev_type = VAR_2;
 else
  VAR_24->dev_type = VAR_3;

 if (FUNC_16(VAR_9, &VAR_21->hdev_flags))
  return 0;

 if (FUNC_7(VAR_24) < 0) {
  FUNC_1("Can't register HCI device");
  VAR_23 = -VAR_0;
  goto err_register;
 }

 FUNC_13(VAR_12, &VAR_21->flags);

 return 0;

err_register:
 FUNC_6(VAR_24);
err_alloc:
 FUNC_4(VAR_10, &VAR_21->flags);
 VAR_22->close(VAR_21);
err_open:
 FUNC_10(VAR_21->serdev);
 return VAR_23;
}
