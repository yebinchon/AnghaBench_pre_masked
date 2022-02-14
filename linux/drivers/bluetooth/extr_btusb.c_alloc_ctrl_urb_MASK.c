
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {int wLength; scalar_t__ wValue; scalar_t__ wIndex; int bRequest; int bRequestType; } ;
struct urb {int dummy; } ;
struct sk_buff {void* dev; int len; int data; } ;
struct hci_dev {int dummy; } ;
struct btusb_data {int udev; int cmdreq; int cmdreq_type; } ;


 int VAR_0 ;
 struct urb* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 struct btusb_data* FUNC_2 (struct hci_dev*) ;
 struct usb_ctrlrequest* FUNC_3 (int,int ) ;
 struct urb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct urb*,int ,unsigned int,void*,int ,int ,int ,struct sk_buff*) ;
 int FUNC_6 (struct urb*) ;
 unsigned int FUNC_7 (int ,int) ;

__attribute__((used)) static struct urb *FUNC_8(struct hci_dev *VAR_3, struct sk_buff *VAR_4)
{
 struct btusb_data *VAR_5 = FUNC_2(VAR_3);
 struct usb_ctrlrequest *VAR_6;
 struct urb *VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_4(0, VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  FUNC_6(VAR_7);
  return FUNC_0(-VAR_0);
 }

 VAR_6->bRequestType = VAR_5->cmdreq_type;
 VAR_6->bRequest = VAR_5->cmdreq;
 VAR_6->wIndex = 0;
 VAR_6->wValue = 0;
 VAR_6->wLength = FUNC_1(VAR_4->len);

 VAR_8 = FUNC_7(VAR_5->udev, 0x00);

 FUNC_5(VAR_7, VAR_5->udev, VAR_8, (void *)VAR_6,
        VAR_4->data, VAR_4->len, VAR_2, VAR_4);

 VAR_4->dev = (void *)VAR_3;

 return VAR_7;
}
