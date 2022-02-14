
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct hci_dev {int dummy; } ;
struct btusb_data {scalar_t__ reset_gpio; TYPE_1__* udev; scalar_t__ oob_wake_irq; struct usb_interface* isoc; struct usb_interface* intf; struct usb_interface* diag; struct hci_dev* hdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*,struct usb_interface*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (int *,struct usb_interface*) ;
 struct btusb_data* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_1)
{
 struct btusb_data *VAR_2 = FUNC_6(VAR_1);
 struct hci_dev *VAR_3;

 FUNC_0("intf %p", VAR_1);

 if (!VAR_2)
  return;

 VAR_3 = VAR_2->hdev;
 FUNC_7(VAR_2->intf, ((void*)0));

 if (VAR_2->isoc)
  FUNC_7(VAR_2->isoc, ((void*)0));

 if (VAR_2->diag)
  FUNC_7(VAR_2->diag, ((void*)0));

 FUNC_4(VAR_3);

 if (VAR_1 == VAR_2->intf) {
  if (VAR_2->isoc)
   FUNC_5(&VAR_0, VAR_2->isoc);
  if (VAR_2->diag)
   FUNC_5(&VAR_0, VAR_2->diag);
 } else if (VAR_1 == VAR_2->isoc) {
  if (VAR_2->diag)
   FUNC_5(&VAR_0, VAR_2->diag);
  FUNC_5(&VAR_0, VAR_2->intf);
 } else if (VAR_1 == VAR_2->diag) {
  FUNC_5(&VAR_0, VAR_2->intf);
  if (VAR_2->isoc)
   FUNC_5(&VAR_0, VAR_2->isoc);
 }

 if (VAR_2->oob_wake_irq)
  FUNC_1(&VAR_2->udev->dev, 0);

 if (VAR_2->reset_gpio)
  FUNC_2(VAR_2->reset_gpio);

 FUNC_3(VAR_3);
}
