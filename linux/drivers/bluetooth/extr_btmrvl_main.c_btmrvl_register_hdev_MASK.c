
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hci_dev {int dev_type; int set_bdaddr; int setup; int send; int flush; int close; int open; int bus; } ;
struct TYPE_4__ {int task; } ;
struct TYPE_3__ {int dev_type; struct hci_dev* hcidev; } ;
struct btmrvl_private {TYPE_2__ main_thread; TYPE_1__ btmrvl_dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hci_dev*) ;
 int VAR_3 ;
 int FUNC_2 (struct btmrvl_private*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct hci_dev* FUNC_3 () ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*,struct btmrvl_private*) ;
 int FUNC_7 (struct btmrvl_private*) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct btmrvl_private *VAR_8)
{
 struct hci_dev *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_9 = FUNC_3();
 if (!VAR_9) {
  FUNC_0("Can not allocate HCI device");
  goto err_hdev;
 }

 VAR_8->btmrvl_dev.hcidev = VAR_9;
 FUNC_6(VAR_9, VAR_8);

 VAR_9->bus = VAR_1;
 VAR_9->open = VAR_4;
 VAR_9->close = VAR_2;
 VAR_9->flush = VAR_3;
 VAR_9->send = VAR_5;
 VAR_9->setup = VAR_7;
 VAR_9->set_bdaddr = VAR_6;

 VAR_9->dev_type = VAR_8->btmrvl_dev.dev_type;

 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10 < 0) {
  FUNC_0("Can not register HCI device");
  goto err_hci_register_dev;
 }





 return 0;

err_hci_register_dev:
 FUNC_4(VAR_9);

err_hdev:

 FUNC_8(VAR_8->main_thread.task);

 FUNC_2(VAR_8);
 FUNC_7(VAR_8);

 return -VAR_0;
}
