
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hci {int hci_port; } ;
typedef enum hci_usbev { ____Placeholder_hci_usbev } hci_usbev ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(struct usb_hci *VAR_0, enum hci_usbev VAR_1, void *VAR_2)
{

 FUNC_0(("xhci device event port %d\r\n", VAR_0->hci_port));
 return (0);
}
