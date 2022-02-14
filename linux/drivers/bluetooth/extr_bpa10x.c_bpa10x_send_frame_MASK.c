
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_ctrlrequest {int wLength; int wValue; int wIndex; int bRequest; int bRequestType; } ;
struct urb {int setup_packet; } ;
struct sk_buff {int len; int data; void* dev; } ;
struct TYPE_2__ {int sco_tx; int acl_tx; int cmd_tx; } ;
struct hci_dev {TYPE_1__ stat; int name; } ;
struct bpa10x_data {int tx_anchor; int udev; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct hci_dev*,char*,struct urb*) ;
 struct bpa10x_data* FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 struct usb_ctrlrequest* FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int) ;
 struct urb* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct urb*,int *) ;
 int FUNC_10 (struct urb*,int ,unsigned int,int ,int ,int ,struct sk_buff*) ;
 int FUNC_11 (struct urb*,int ,unsigned int,void*,int ,int ,int ,struct sk_buff*) ;
 int FUNC_12 (struct urb*) ;
 unsigned int FUNC_13 (int ,int) ;
 unsigned int FUNC_14 (int ,int) ;
 int FUNC_15 (struct urb*,int ) ;
 int FUNC_16 (struct urb*) ;

__attribute__((used)) static int FUNC_17(struct hci_dev *VAR_5, struct sk_buff *VAR_6)
{
 struct bpa10x_data *VAR_7 = FUNC_3(VAR_5);
 struct usb_ctrlrequest *VAR_8;
 struct urb *VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 FUNC_0("%s", VAR_5->name);

 VAR_6->dev = (void *) VAR_5;

 VAR_9 = FUNC_8(0, VAR_2);
 if (!VAR_9)
  return -VAR_1;


 *(u8 *)FUNC_7(VAR_6, 1) = FUNC_4(VAR_6);

 switch (FUNC_4(VAR_6)) {
 case 129:
  VAR_8 = FUNC_6(sizeof(*VAR_8), VAR_2);
  if (!VAR_8) {
   FUNC_12(VAR_9);
   return -VAR_1;
  }

  VAR_8->bRequestType = VAR_3;
  VAR_8->bRequest = 0;
  VAR_8->wIndex = 0;
  VAR_8->wValue = 0;
  VAR_8->wLength = FUNC_1(VAR_6->len);

  VAR_10 = FUNC_14(VAR_7->udev, 0x00);

  FUNC_11(VAR_9, VAR_7->udev, VAR_10, (void *) VAR_8,
    VAR_6->data, VAR_6->len, VAR_4, VAR_6);

  VAR_5->stat.cmd_tx++;
  break;

 case 130:
  VAR_10 = FUNC_13(VAR_7->udev, 0x02);

  FUNC_10(VAR_9, VAR_7->udev, VAR_10,
    VAR_6->data, VAR_6->len, VAR_4, VAR_6);

  VAR_5->stat.acl_tx++;
  break;

 case 128:
  VAR_10 = FUNC_13(VAR_7->udev, 0x02);

  FUNC_10(VAR_9, VAR_7->udev, VAR_10,
    VAR_6->data, VAR_6->len, VAR_4, VAR_6);

  VAR_5->stat.sco_tx++;
  break;

 default:
  FUNC_12(VAR_9);
  return -VAR_0;
 }

 FUNC_9(VAR_9, &VAR_7->tx_anchor);

 VAR_11 = FUNC_15(VAR_9, VAR_2);
 if (VAR_11 < 0) {
  FUNC_2(VAR_5, "urb %p submission failed", VAR_9);
  FUNC_5(VAR_9->setup_packet);
  FUNC_16(VAR_9);
 }

 FUNC_12(VAR_9);

 return VAR_11;
}
