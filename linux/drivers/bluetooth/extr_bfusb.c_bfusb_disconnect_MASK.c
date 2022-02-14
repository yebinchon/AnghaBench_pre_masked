
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct hci_dev {int dummy; } ;
struct bfusb_data {struct hci_dev* hdev; } ;


 int FUNC_0 (char*,struct usb_interface*) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 struct bfusb_data* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_0)
{
 struct bfusb_data *VAR_1 = FUNC_4(VAR_0);
 struct hci_dev *VAR_2 = VAR_1->hdev;

 FUNC_0("intf %p", VAR_0);

 if (!VAR_2)
  return;

 FUNC_5(VAR_0, ((void*)0));

 FUNC_1(VAR_2);

 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
}
