
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int transfer_flags; } ;
struct sk_buff {void* dev; int len; int data; } ;
struct hci_dev {int dummy; } ;
struct btusb_data {TYPE_1__* isoc_tx_ep; int udev; } ;
struct TYPE_2__ {int wMaxPacketSize; int bInterval; int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct urb* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct urb*,int ,int ) ;
 int VAR_5 ;
 struct btusb_data* FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (int ) ;
 struct urb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct urb*,int ,unsigned int,int ,int ,int ,struct sk_buff*,int ) ;
 unsigned int FUNC_6 (int ,int ) ;

__attribute__((used)) static struct urb *FUNC_7(struct hci_dev *VAR_6, struct sk_buff *VAR_7)
{
 struct btusb_data *VAR_8 = FUNC_2(VAR_6);
 struct urb *VAR_9;
 unsigned int VAR_10;

 if (!VAR_8->isoc_tx_ep)
  return FUNC_0(-VAR_1);

 VAR_9 = FUNC_4(VAR_0, VAR_3);
 if (!VAR_9)
  return FUNC_0(-VAR_2);

 VAR_10 = FUNC_6(VAR_8->udev, VAR_8->isoc_tx_ep->bEndpointAddress);

 FUNC_5(VAR_9, VAR_8->udev, VAR_10,
    VAR_7->data, VAR_7->len, VAR_5,
    VAR_7, VAR_8->isoc_tx_ep->bInterval);

 VAR_9->transfer_flags = VAR_4;

 FUNC_1(VAR_9, VAR_7->len,
          FUNC_3(VAR_8->isoc_tx_ep->wMaxPacketSize));

 VAR_7->dev = (void *)VAR_6;

 return VAR_9;
}
