
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct sk_buff {void* dev; int len; int data; } ;
struct hci_dev {int dummy; } ;
struct btusb_data {int udev; TYPE_1__* bulk_tx_ep; } ;
struct TYPE_2__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct urb* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct btusb_data* FUNC_1 (struct hci_dev*) ;
 struct urb* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct urb*,int ,unsigned int,int ,int ,int ,struct sk_buff*) ;
 unsigned int FUNC_4 (int ,int ) ;

__attribute__((used)) static struct urb *FUNC_5(struct hci_dev *VAR_4, struct sk_buff *VAR_5)
{
 struct btusb_data *VAR_6 = FUNC_1(VAR_4);
 struct urb *VAR_7;
 unsigned int VAR_8;

 if (!VAR_6->bulk_tx_ep)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_2(0, VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_8 = FUNC_4(VAR_6->udev, VAR_6->bulk_tx_ep->bEndpointAddress);

 FUNC_3(VAR_7, VAR_6->udev, VAR_8,
     VAR_5->data, VAR_5->len, VAR_3, VAR_5);

 VAR_5->dev = (void *)VAR_4;

 return VAR_7;
}
